#include "seancesadmin.h"
#include "ui_seancesadmin.h"

#include <QDateTime>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QModelIndex>

extern QSqlDatabase db;
extern QSqlQuery query;

SeancesAdmin::SeancesAdmin(QWidget *parent,int page) :
    QDialog(parent),
    ui(new Ui::SeancesAdmin)
{
    ui->setupUi(this);

    switch (page) {
    case 0:
        fillSelectTableView ();
        break;
    case 1:
        fillTableViewFilm();
        break;
    case 2:
        fillTableViewDelete();
        break;
    default:
        ui->stackedWidget->setCurrentIndex(-1);
        return;
        break;
    }

    ui->stackedWidget->setCurrentIndex(page);
}

SeancesAdmin::~SeancesAdmin()
{
    delete ui;
}

void SeancesAdmin::on_pushButtonAddSeance_clicked()
{
    QString day = QString::number(ui->lineEditDay->text().toInt());
    QString month = QString::number(ui->lineEditMonth->text().toInt());
    QString year = QString::number(ui->lineEditYear->text().toInt());
    QString hours = QString::number(ui->lineEditHours->text().toInt());
    QString minutes = QString::number(ui->labelMinutes->text().toInt());

    QDateTime insertedDate = QDateTime::fromString(day + "-" + month + "-" + year + " " + hours + ":" + minutes,"d-M-yyyy h:m");
    qDebug() << insertedDate;
    if (insertedDate < QDateTime::currentDateTime() || !insertedDate.isValid()) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Некорректное значение даты.");
        return;
    }

    QModelIndexList film;
    film = ui->tableViewFilmSelect->selectionModel()->selectedIndexes();
    if (film.size() != 1) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Не выбран или выбрано больше одного фильма.");
        return;
    }
    query.seek(film.value(0).row());                                                            //переходим по номеру к записи в выдаче, чтобы получить id
    int film_id = query.value("id_film").toInt();

    int price = ui->lineEditPrice->text().toInt();
    if (price <= 0){
        if(QMessageBox::No == QMessageBox::question(this,"ОшИбОчКа, гражданин","Установить цену 0?")){
           return;
        }
        else{
            price = 0;
        }
    }
    qDebug() << price;

    int hall = ui->lineEditHall->text().toInt();
    if(hall > 10 || hall < 1){
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Некорректное значение для зала.");
        return;
    }

    query.prepare("insert into seance values (default,:film_id,:date_time,:price,:hall)");
    query.bindValue(":film_id",film_id);
    query.bindValue(":date_time",insertedDate);
    query.bindValue(":price",price);
    query.bindValue(":hall",hall);
    if (!query.exec()){
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Ошибка выполнения запроса.");
        return;
    }

    QMessageBox::about(this,"Успех","Сеанс успешно добавлен.");
    QDialog::close();
}

void SeancesAdmin::on_pushButtonReloadTb_clicked()
{
    fillSelectTableView();
}

void SeancesAdmin::fillSelectTableView ()
{
    QSqlTableModel *model = new QSqlTableModel(this,db);
    model->setTable("seance");
    model->select();
    ui->tableViewSeances->setModel(model);
    ui->tableViewSeances->resizeColumnsToContents();
}

void SeancesAdmin::fillTableViewFilm()
{
    query.exec("select * from films");
    QSqlQueryModel *model =  new QSqlQueryModel();
    model->setQuery(query);
    ui->tableViewFilmSelect->setModel(model);
    ui->tableViewFilmSelect->resizeColumnsToContents();

}

void SeancesAdmin::fillTableViewDelete()
{
    query.exec("select * from seance");
    QSqlQueryModel *model =  new QSqlQueryModel();
    model->setQuery(query);
    ui->tableViewSeanceDelete->setModel(model);
    ui->tableViewSeanceDelete->resizeColumnsToContents();

}

void SeancesAdmin::on_pushButtonDeleteSeance_clicked()
{
    QModelIndexList seance;
    seance = ui->tableViewSeanceDelete->selectionModel()->selectedIndexes();
    if (seance.size() != 1) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Не выбран или выбрано больше одного сеанса.");
        return;
    }

    query.seek(seance.value(0).row());                                                            //переходим по номеру к записи в выдаче, чтобы получить id
    int seance_id = query.value("id_seance").toInt();

    query.prepare("delete from cinema.seance where id_seance=:seance_id");
    query.bindValue("seance_id",seance_id);

    if (!query.exec()){
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Ошибка выполнения запроса.");
        return;
    }

    QMessageBox::about(this,"Успех","Сеанс успешно удален.");
    QDialog::close();
}
