#include "films.h"
#include "ui_films.h"

Films::Films(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Films)
{
    ui->setupUi(this);
}

Films::~Films()
{
    delete ui;
}
