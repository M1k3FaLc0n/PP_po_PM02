#ifndef FILMS_H
#define FILMS_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

extern QSqlDatabase db;
extern QSqlQuery query;

namespace Ui {
class Films;
}

class Films : public QDialog
{
    Q_OBJECT

public:
    explicit Films(QWidget *parent = 0, int page = 0);
    ~Films();

private slots:
    void on_pushButtonReloadTbSelect_clicked();

    void on_pushButtonReloadTbDelete_clicked();

    void on_pushButtonDeleteFilm_clicked();

    void on_pushButtonAddFilm_clicked();

private:
    Ui::Films *ui;
    void fillSelectTableView ();
    void fillTableViewDelete();
};

#endif // FILMS_H
