#include "mainwindow.h"
#include "ui_mainwindow.h"

QSqlDatabase db;
QSqlQuery query;
QString worker_id;
QString tab_num;
QString password;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db = QSqlDatabase::addDatabase("QMYSQL");
    query = QSqlQuery(db);
    db.setHostName("localhost");
    positions << "cashier" << "admin";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAuth_clicked()
{
    tab_num = ui->tab_numLineEdit->text();
    password = ui->passwordLineEdit->text();
    db.setDatabaseName("mysql");
    db.setUserName("root");
    db.setPassword("shitdatabase");
    if(db.open()){
        query.prepare("select position,id_worker from cinema.worker where tab_num=:tab_num");
        query.bindValue(":tab_num",tab_num);
        if(!query.exec()){
            QMessageBox::warning(this,"Ошибочка, гражданин",query.lastError().text());
            db.close();
            return;
        }
        if(query.size() == 0) {
            QMessageBox::warning(this,"Ошибочка, гражданин",QString::fromUtf8("Нет такого табельного номера\n"));
            db.close();
            return;
        }
        if(query.size() > 1) {
            QMessageBox::warning(this,"Ошибочка, гражданин",QString::fromUtf8("БД сломалась, несите новую \n(Зовите разраба)"));
            db.close();
            return;
        }
        query.next();
        db.close();
        db.setDatabaseName("cinema");
        db.setUserName(tab_num);
        db.setPassword(password);
        if(!db.open()) {
            QMessageBox::warning(this,"Ошибочка, гражданин", QString::fromUtf8("Ошибка со входом \nПроверьте пароль\n") + db.lastError().text());
            db.close();
            return;
        }
        ui->tab_numLineEdit->setText("");
        ui->passwordLineEdit->setText("");
        worker_id = query.value("id_worker").toString();
        switch (positions.indexOf(query.record().value("position").toString())) {
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
        QMessageBox::warning(this,"Ошибочка, гражданин",QString::fromUtf8("Ошибка со входом \nРазраб дурак что-то сломал\n") + db.lastError().text());
}

void MainWindow::on_pushButtonCloseDb_clicked()
{
    db.close();
    query.clear();
    worker_id = "";
    tab_num = "";
    password = "";
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonSnowSeances_clicked()
{
    seances = new Seances(this);
    seances->show();
}

void MainWindow::on_pushButtonCloseDb_2_clicked()
{
    db.close();
    query.clear();
    worker_id = "";
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonSelectFilms_clicked()
{
    films = new Films(this,0);
    films->setModal(true);
    films->show();
}

void MainWindow::on_pushButtonAddFilm_clicked()
{
    films = new Films(this,1);
    films->setModal(true);
    films->show();
    qDebug() << "here";
}

void MainWindow::on_pushButtonDeleteFilms_clicked()
{
    films = new Films(this,2);
    films->setModal(true);
    films->show();
}

void MainWindow::on_pushButtonSelectSeance_clicked()
{
    seancesAdmin = new SeancesAdmin(this,0);
    seancesAdmin->setModal(true);
    seancesAdmin->show();
}

void MainWindow::on_pushButtonAddSeance_clicked()
{
    seancesAdmin = new SeancesAdmin(this,1);
    seancesAdmin->setModal(true);
    seancesAdmin->show();
}

void MainWindow::on_pushButtonAddUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::dropUser(QString droptab_num)
{
    query.exec("flush privileges");
    query.prepare("drop user :tab_num@'localhost'");
    query.bindValue(":tab_num",droptab_num);
    qDebug () << "drop user " << query.exec();
    qDebug () << "drop user errors " << query.lastError();
    query.exec("flush privileges");
}

void MainWindow::on_pushButtonAddUser_2_clicked()
{
    QString  new_tab_num = QString::number(ui->lineEditPersonnelNumber->text().toInt());
    if(new_tab_num == "0" || new_tab_num.size() != 6) {
        QMessageBox::warning(this,"Ошибочка, гражданин", "Некорректный табельный номер");
        return;
    }
    QString new_password = ui->lineEditPassword->text();
    if (new_password.isEmpty()){
        QMessageBox::warning(this,"Ошибочка, гражданин", "Не введен пароль");
        return;
    }
    QString fio = ui->lineEditFIO->text();
    if (fio.isEmpty()){
        QMessageBox::warning(this,"Ошибочка, гражданин", "Не введен ФИО");
        return;
    }
    QString position = ui->comboBox->currentText();
    QString education = ui->lineEditEducation->text();
    QString telephone = QString::number(ui->lineEditTelephone->text().toULong());
    if (telephone == "0" || telephone.size() != 11) {
        QMessageBox::warning(this,"Ошибочка, гражданин", "Некорректный номер телефона");
        return;
    }
    QDate b_date = ui->dateEdit->date();
    if(b_date > QDate::currentDate()){
        QMessageBox::warning(this,"Ошибочка, гражданин", "Некорректная дата");
        return;
    }

    db.close();
    db.setDatabaseName("mysql");
    db.setUserName("root");
    db.setPassword("shitdatabase");
    db.open();

    query.prepare("select * from mysql.user where user=:tab_num");
    query.bindValue(":tab_num",new_tab_num);
    query.exec();
    if (query.size() > 0) {
        if(QMessageBox::question(this,"Ошибочка, гражданин", "Пользователь с таким табельным номером уже существует. Перезаписать пользователя?") == QMessageBox::Yes) {
            dropUser(new_tab_num);
            query.prepare("delete from cinema.worker where tab_num=:tab_num");
            query.bindValue(":tab_num",new_tab_num);
            query.exec();
            qDebug() << "user dropped";
        }
        else{
            db.close();
            db.setDatabaseName("cinema");
            db.setUserName(tab_num);
            db.setPassword(password);
            db.open();
            qDebug() << "creation canceled";
            return;
        }
    }


    query.exec("flush privileges");
    query.prepare("create user :tab_num@'localhost' IDENTIFIED BY :password");
    query.bindValue(":tab_num",new_tab_num);
    query.bindValue(":password",new_password);
    qDebug() << "----------------------------------";
    if (!query.exec()) {
        QMessageBox::warning(this,"Ошибочка, гражданин", "Ошибка создания пользователя\n" + query.lastError().text().toUtf8());
        qDebug () << "create user error " << query.lastError();
        return;
    }
    query.exec("flush privileges");
    if (position == "admin") {
        query.prepare("GRANT ALL ON cinema.* TO :tab_num@'localhost'");
        query.bindValue(":tab_num",new_tab_num);
        if (!query.exec()) {
            QMessageBox::warning(this,"Ошибочка, гражданин", "Ошибка назначения прав пользователя\n" + query.lastError().text().toUtf8());
            dropUser(new_tab_num);
            return;
        }
    }
    else {
        query.prepare("GRANT INSERT, DELETE,select ON TABLE `cinema`.`tickets` TO :tab_num@'localhost'");
        query.bindValue(":tab_num",new_tab_num);
        if (!query.exec()) {
            QMessageBox::warning(this,"Ошибочка, гражданин", "Ошибка назначения прав пользователя\n" + query.lastError().text());
            dropUser(new_tab_num);
            return;
        }
        query.prepare("GRANT SELECT ON TABLE `cinema`.`seance_view` TO :tab_num@'localhost'");
        query.bindValue(":tab_num",new_tab_num);
        if (!query.exec()) {
            QMessageBox::warning(this,"Ошибочка, гражданин", "Ошибка назначения прав пользователя\n" + query.lastError().text());
            dropUser(new_tab_num);
            return;
        }
    }

    db.close();
    db.setDatabaseName("cinema");
    db.setUserName(tab_num);
    db.setPassword(password);
    db.open();

    query.prepare("insert into cinema.worker values (default,:tab_num,:fio,:position,:education,:telephone,:b_date)");
    query.bindValue(":tab_num",new_tab_num);
    query.bindValue(":fio",fio);
    query.bindValue(":position",position);
    query.bindValue(":education",education);
    query.bindValue(":telephone",telephone);
    query.bindValue(":b_date",b_date.toString("yyyy-M-d"));
    if(!query.exec()) {
        QMessageBox::warning(this,"Ошибочка, гражданин", "Ошибка запроса\n" + query.lastError().text());
        return;
    }

    QMessageBox::about(this,"Успех", "Успешное создание пользователя");

    ui->stackedWidget->setCurrentIndex(2);
}
