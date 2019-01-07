#include "seances.h"
#include "ui_seances.h"
#include <QtSql>


Seances::Seances(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Seances)
{
    ui->setupUi(this);
    query = QSqlQuery(db);
    getActualSeances();
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
    ui->tableView->setModel(model);
}

void Seances::on_pushButtonChoosSeance_clicked()
{
    int row = ui->tableView->selectionModel()->selectedIndexes().value(0).row();
    qDebug() << row;
    if(query.isSelect()) {
        query.seek(row);
        int seance_id = query.value("id_seance").toInt();
        qDebug() << seance_id;
    }
}

void Seances::on_pushButtonReloadTb_clicked()
{
    getActualSeances();
}
