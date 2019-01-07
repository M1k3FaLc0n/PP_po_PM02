#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>

#include "seances.h"

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

private:
    Ui::MainWindow *ui;
    QStringList positions;
    Seances *seances;
};

#endif // MAINWINDOW_H
