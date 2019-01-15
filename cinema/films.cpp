#include "films.h"
#include "ui_films.h"

Films::Films(QWidget *parent, int page) :
    QDialog(parent),
    ui(new Ui::Films)
{
    ui->setupUi(this);
    switch (page) {
    case 0:
        fillSelectTableView ();
        break;
    case 1:

        break;
    case 2:

        break;
    default:
        ui->stackedWidget->setCurrentIndex(-1);
        return;
        break;
    }

    ui->stackedWidget->setCurrentIndex(page);
}

Films::~Films()
{
    delete ui;
}

void Films::fillSelectTableView ()
{
    QSqlTableModel *model = new QSqlTableModel(this,db);
    model->setTable("films");
    model->select();
    ui->tableViewSelect->setModel(model);
    ui->tableViewSelect->resizeColumnsToContents();
}


void Films::on_pushButtonReloadTbSelect_clicked()
{
    fillSelectTableView();
}

void Films::fillTableViewDelete()
{
    query.exec("select * from films");
    QSqlQueryModel *model =  new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void Films::on_pushButtonReloadTbDelete_clicked()
{
    fillTableViewDelete();
}

void Films::on_pushButtonDeleteFilm_clicked()
{
    QModelIndexList film;
    film = ui->tableView->selectionModel()->selectedIndexes();
    if (film.size() != 1) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Не выбран или выбрано больше одного фильма.");
        return;
    }

    query.seek(film.value(0).row());                                                            //переходим по номеру к записи в выдаче, чтобы получить id
    int film_id = query.value("id_film").toInt();

    query.prepare("delete from cinema.films where id_film=:film_id");
    query.bindValue("film_id",film_id);

    if (!query.exec()){
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Ошибка выполнения запроса.");
        return;
    }

    QMessageBox::about(this,"Успех","Фильм успешно удален.");
    QDialog::close();
}

void Films::on_pushButtonAddFilm_clicked()
{
    QString title = ui->lineEditTitle->text();
    if (title.isEmpty()){
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Не введено название.");
        return;
    }
    QString director = ui->lineEditDirector->text();
    QString genres = ui->lineEditGenres->text();

    QString day = ui->lineEditDay->text();
    QString month = ui->lineEditMonth->text();
    QString year = ui->lineEditYear->text();
    QString hours = ui->lineEditHours->text();
    QString minutes = ui->labelMinutes->text();

    QDateTime insertedDate = QDateTime::fromString(day + "-" + month + "-" + year + " " + hours + ":" + minutes,"d-M-yyyy h:m");
    qDebug() << insertedDate;
    if (insertedDate < QDateTime::currentDateTime() || !insertedDate.isValid()) {
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Некорректное значение даты.");
        return;
    }

    query.prepare("insert into films values (default,:title,:receipt_date,:director,:genres)");
    query.bindValue(":title",title);
    query.bindValue(":receipt_date",insertedDate);
    query.bindValue(":director",director);
    query.bindValue(":genres",genres);

    if (!query.exec()){
        QMessageBox::warning(this,"ОшИбОчКа, гражданин","Ошибка выполнения запроса.");
        return;
    }

    QMessageBox::about(this,"Успех","Фильм успешно добавлен.");
    QDialog::close();
}

void Films::on_pushButton_clicked()
{
    QDialog::close();
}
