#ifndef FILMS_H
#define FILMS_H

#include <QDialog>

namespace Ui {
class Films;
}

class Films : public QDialog
{
    Q_OBJECT

public:
    explicit Films(QWidget *parent = 0);
    ~Films();

private:
    Ui::Films *ui;
};

#endif // FILMS_H
