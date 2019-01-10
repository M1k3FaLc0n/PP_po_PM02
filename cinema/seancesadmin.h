#ifndef SEANCESADMIN_H
#define SEANCESADMIN_H

#include <QDialog>

namespace Ui {
class SeancesAdmin;
}

class SeancesAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit SeancesAdmin(QWidget *parent = 0,int page=0);
    ~SeancesAdmin();

private slots:
    void on_pushButtonAddSeance_clicked();

    void on_pushButtonReloadTb_clicked();

    void on_pushButtonDeleteSeance_clicked();

private:
    Ui::SeancesAdmin *ui;
    void fillSelectTableView ();
    void fillTableViewFilm ();
    void fillTableViewDelete();
};

#endif // SEANCESADMIN_H
