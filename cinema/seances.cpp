#include "seances.h"
#include "ui_seances.h"
#include <QtSql>
#include <QMessageBox>

Seances::Seances(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Seances)
{
    ui->setupUi(this);
    query = QSqlQuery(db);
    getActualSeances();
    ui->stackedWidget->setCurrentIndex(0);
}

Seances::~Seances()
{
    delete ui;
}

void Seances::getActualSeances ()
{
    query.exec("select * from seance_view where date_time > now() order by date_time,title");
    QSqlQueryModel *model =  new QSqlQueryModel();
    model->setQuery(query);
    model->removeColumn(0);
    ui->tableViewSeances->setModel(model);
    ui->tableViewSeances->resizeColumnsToContents();
}

void Seances::getOccupiedPlaces()
{
    query.prepare("select row,place from cinema.tickets where seance_id_seance=:seance_id");
    query.bindValue(":seance_id",seance_id);                                    //передаем id в запрос и получаем занятые места
    if(!query.exec()) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин",QString::fromUtf8("Ошибка с выдачей занятых мест\n") + query.lastError().text());
        return;
    }
    if (query.size() == 200){
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Нет свободных мест на данный сеанс");
        return;
    }
    for (int i = 0; i < ui->tableWidget->rowCount(); i++)
        for (int j = 0; j < ui->tableWidget->columnCount(); j++) {
            QTableWidgetItem *item = new QTableWidgetItem;
            item->setBackgroundColor(Qt::white);
            ui->tableWidget->setItem(i,j,item);
        }

    if(query.size() > 0) {   //если есть занятые места, надо это указать
        int row,place;
        while(query.next()) {
            QTableWidgetItem *item = new QTableWidgetItem;
            item->setBackgroundColor(Qt::red);
            row = query.value("row").toInt() - 1;
            place = query.value("place").toInt() - 1;
            ui->tableWidget->setItem(row,place,item);
        }
    }
}

void Seances::on_pushButtonChoosSeance_clicked()
{
    QModelIndexList seance = ui->tableViewSeances->selectionModel()->selectedIndexes();//.value(0).row();    //получаем номер сеанса в выдаче запроса
    if (seance.size() != 1) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Не выбрано или выбрано больше одного сеанса\n");
        return;
    }
    if(query.isSelect()) {
        query.seek(seance.value(0).row());                                                            //переходим по номеру к записи в выдаче, чтобы получить id
        seance_id = query.value("id_seance").toInt();                           //получаем id выбранного сеанса
        getOccupiedPlaces();
        ui->stackedWidget->setCurrentIndex(1);
    }
    else {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Падажжи, что-то сломалось с запросом (он не select)");
        return;
    }
}

void Seances::on_pushButtonReloadTb_clicked()
{
    getActualSeances();
}

void Seances::on_pushButtonBackToSeaSel_clicked()
{
    query.clear();
    ui->stackedWidget->setCurrentIndex(0);
    getActualSeances();
}

void Seances::on_pushButtonBuyTickets_clicked()
{
    QModelIndexList places = ui->tableWidget->selectionModel()->selectedIndexes();
    if(places.size() == 0) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Не выбрано ни одного места\n");
        return;
    }
    int row,place;
    QSqlQuery local_query = QSqlQuery(db);
    local_query.prepare("select title,date_time,hall,price from seance_view where id_seance=:seance_id");
    local_query.bindValue(":seance_id",seance_id);
    if (!local_query.exec()) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Что-то с запросом");
        return;
    }
    local_query.next();
    if(query.size() > 0) {
        for (int i = 0; i < places.size(); i++) {   //вычленяем конкретное место
            row = places.value(i).row() + 1;
            place = places.value(i).column() + 1;
            query.first();
            do { //проверяем не занято ли конкретное место
                if((row == query.value("row").toInt()) && (query.value("place").toInt() == place)) {
                    QMessageBox::warning(this,"ОшИбОчКа, гражданин","Ошибка с провекой занятых мест \nВыбрано одно или более занятых мест");
                    return;
                }
            }
            while (query.next());
        }
    }
    else
        qDebug() << "Все места свободны";

    QString sold_tickets = "Проданы билеты на следующий сеанс:\n" + local_query.value("title").toString() + "\n" + local_query.value("date_time").toString() + "\nв " + local_query.value("hall").toString() + " зале по цене " + local_query.value("price").toString() + "р за билет\nНа следующие места:\n";

    for (int i = 0; i < places.size(); i++) {   //вычленяем конкретное место
        row = places.value(i).row() + 1;
        place = places.value(i).column() + 1;
        local_query.prepare("insert into cinema.tickets values (default,:worker_id,:seance_id,:row,:place)");
        local_query.bindValue(":worker_id",worker_id);
        local_query.bindValue(":seance_id",seance_id);
        local_query.bindValue(":row",row);
        local_query.bindValue(":place",place);
        if(!local_query.exec()) {
            QMessageBox::warning(this,"ОшИбОчКа, гражданин",local_query.lastError().text());
            return;
        }
        sold_tickets += QString::number(row) + " ряд " + QString::number(place) + " место\n";
    }
    getOccupiedPlaces();
    QMessageBox::about(this,"Успех",sold_tickets);
}

void Seances::on_pushButtonReloadTb_2_clicked()
{
    getOccupiedPlaces();
}


void Seances::on_pushButtonReturnTicket_clicked()
{
    QModelIndexList places = ui->tableWidget->selectionModel()->selectedIndexes();
    QSqlQuery local_query = QSqlQuery(db);
    if(places.size() == 0) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Не выбрано ни одного места\n");
        return;
    }
    int row,place;

    if(query.size() > 0) {
        for (int i = 0; i < places.size(); i++) {   //вычленяем конкретное место
            row = places.value(i).row() + 1;
            place = places.value(i).column() + 1;
            query.first();
            qDebug() << places.value(i);
            do { //проверяем, все ли выбранные места действительно проданы
                qDebug() << query.record();
                if(((row == query.value("row").toInt()) && (query.value("place").toInt() == place))) {
                    break;
                }
            }
            while (query.next());
            if(!query.isValid()){
                QMessageBox::warning(this,"ОшИбОчКа, гражданин","Ошибка с провекой занятых мест \nВыбрано одно или более не проданных мест");
                return;
            }
        }
    }
    else{
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Ошибка с провекой занятых мест \nНа сеанс не продано ни одного билета");
        return;
    }
    for (int i = 0; i < places.size(); i++) {   //вычленяем конкретное место
        row = places.value(i).row() + 1;
        place = places.value(i).column() + 1;
        local_query.prepare("delete from cinema.tickets where seance_id_seance=:seance_id and row=:row and place=:place");
        local_query.bindValue(":seance_id",seance_id);
        local_query.bindValue(":row",row);
        local_query.bindValue(":place",place);
        if(!local_query.exec()) {
            QMessageBox::warning(this,"ОшИбОчКа, гражданин",local_query.lastError().text());
            return;
        }
    }
    getOccupiedPlaces();
}

void Seances::on_pushButton_clicked()
{
    QDialog::close();
}
