#ifndef SEANCES_H
#define SEANCES_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class Seances;
}
class Seances : public QDialog
{
    Q_OBJECT

public:
    explicit Seances(QWidget *parent = 0,QSqlDatabase *db = NULL);
    ~Seances();

private:
    Ui::Seances *ui;
    QSqlDatabase *db;
};

#endif // SEANCES_H
