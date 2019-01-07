#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    positions << "cashier" << "admin";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAuth_clicked()
{
    QString tab_num = ui->tab_numLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    db.setDatabaseName("mysql");
    db.setUserName("root");
    db.setPassword("shitdatabase");
    if(db.open()){
        QSqlQuery query = QSqlQuery(db);
        query.prepare("select position from cinema.worker where tab_num=:tab_num");
        query.bindValue(":tab_num",tab_num);
        if(!query.exec()){
            QMessageBox::warning(this,"Ошибочка, гражданин",query.lastError().text());
            db.close();
            return;
        }
        if(query.size() == 0) {
            QMessageBox::warning(this,"Ошибочка, гражданин","Нет такого табельного номера");
            db.close();
            return;
        }
        query.next();
        db.close();
        db.setDatabaseName("cinema");
        db.setUserName(tab_num);
        db.setPassword(password);
        if(!db.open()) {
            QMessageBox::warning(this,"Ошибочка, гражданин", QString::fromUtf8("Ошибка со входом \nПроверьте пароль\n") += db.lastError().text());
            db.close();
            return;
        }
        switch (positions.indexOf(query.record().value(0).toString())) {
        case 0:
            ui->stackedWidget->setCurrentIndex(1);
            break;
        case 1:
            ui->stackedWidget->setCurrentIndex(2);
            break;
        default:
            break;
        }
    }
    else
        QMessageBox::warning(this,"Ошибочка, гражданин",QString::fromUtf8("Ошибка со входом \nРазраб дурак что-то сломал\n") += db.lastError().text());
}

void MainWindow::on_pushButtonCloseDb_clicked()
{
    db.close();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonSnowSeances_clicked()
{
    seances = new Seances(this);
    seances->show();
}
