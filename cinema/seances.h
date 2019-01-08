#ifndef SEANCES_H
#define SEANCES_H

#include <QDialog>
#include <QtSql>

extern QSqlDatabase db;
extern QSqlQuery query;
extern QString worker_id;

namespace Ui {
class Seances;
}
class Seances : public QDialog
{
    Q_OBJECT

public:
    explicit Seances(QWidget *parent = 0);
    ~Seances();

private slots:

    void on_pushButtonChoosSeance_clicked();

    void on_pushButtonReloadTb_clicked();

    void on_pushButtonBackToSeaSel_clicked();

    void on_pushButtonBuyTickets_clicked();

    void on_pushButtonReloadTb_2_clicked();

    void on_pushButtonReturnTicket_clicked();

private:
    Ui::Seances *ui;
    void getActualSeances ();
    void getOccupiedPlaces();
    int seance_id;
};

#endif // SEANCES_H
