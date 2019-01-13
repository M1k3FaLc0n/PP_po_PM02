#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>

#include "seances.h"
#include "films.h"
#include <seancesadmin.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonAuth_clicked();

    void on_pushButtonCloseDb_clicked();

    void on_pushButtonSnowSeances_clicked();

    void on_pushButtonCloseDb_2_clicked();

    void on_pushButtonSelectFilms_clicked();

    void on_pushButtonAddFilm_clicked();

    void on_pushButtonDeleteFilms_clicked();

    void on_pushButtonSelectSeance_clicked();

    void on_pushButtonAddSeance_clicked();

    void on_pushButtonAddUser_clicked();

    void on_pushButtonAddUser_2_clicked();

private:
    Ui::MainWindow *ui;
    QStringList positions;
    Seances *seances;
    Films *films;
    SeancesAdmin *seancesAdmin;

    void dropUser(QString droptab_num);
};

#endif // MAINWINDOW_H
