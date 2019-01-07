#include "seances.h"
#include "ui_seances.h"

Seances::Seances(QWidget *parent,QSqlDatabase *db) :
    QDialog(parent),
    ui(new Ui::Seances)
{
    this->db = db;
    ui->setupUi(this);
}

Seances::~Seances()
{
    delete ui;
}
