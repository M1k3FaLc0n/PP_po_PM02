/********************************************************************************
** Form generated from reading UI file 'seancesadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEANCESADMIN_H
#define UI_SEANCESADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeancesAdmin
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *pageSelectSeance;
    QVBoxLayout *verticalLayout;
    QTableView *tableViewSeances;
    QPushButton *pushButtonReloadTb;
    QWidget *pageInsertSeance;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelFilm;
    QTableView *tableViewFilmSelect;
    QLabel *labelDateTime;
    QGridLayout *gridLayout;
    QLineEdit *lineEditHours;
    QLineEdit *lineEditDay;
    QLabel *labelDay;
    QLineEdit *lineEditYear;
    QLineEdit *lineEditMonth;
    QLineEdit *lineEditMinutes;
    QLabel *labelMonth;
    QLabel *labelYear;
    QLabel *labelHours;
    QLabel *labelMinutes;
    QGridLayout *gridLayout_2;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;
    QLabel *labelHall;
    QLineEdit *lineEditHall;
    QPushButton *pushButtonAddSeance;
    QWidget *pageDeleteSeance;
    QVBoxLayout *verticalLayout_5;
    QTableView *tableViewSeanceDelete;
    QPushButton *pushButtonDeleteSeance;

    void setupUi(QDialog *SeancesAdmin)
    {
        if (SeancesAdmin->objectName().isEmpty())
            SeancesAdmin->setObjectName(QStringLiteral("SeancesAdmin"));
        SeancesAdmin->resize(619, 702);
        verticalLayout_2 = new QVBoxLayout(SeancesAdmin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(SeancesAdmin);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageSelectSeance = new QWidget();
        pageSelectSeance->setObjectName(QStringLiteral("pageSelectSeance"));
        verticalLayout = new QVBoxLayout(pageSelectSeance);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableViewSeances = new QTableView(pageSelectSeance);
        tableViewSeances->setObjectName(QStringLiteral("tableViewSeances"));

        verticalLayout->addWidget(tableViewSeances);

        pushButtonReloadTb = new QPushButton(pageSelectSeance);
        pushButtonReloadTb->setObjectName(QStringLiteral("pushButtonReloadTb"));

        verticalLayout->addWidget(pushButtonReloadTb);

        stackedWidget->addWidget(pageSelectSeance);
        pageInsertSeance = new QWidget();
        pageInsertSeance->setObjectName(QStringLiteral("pageInsertSeance"));
        verticalLayout_4 = new QVBoxLayout(pageInsertSeance);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelFilm = new QLabel(pageInsertSeance);
        labelFilm->setObjectName(QStringLiteral("labelFilm"));

        verticalLayout_3->addWidget(labelFilm);

        tableViewFilmSelect = new QTableView(pageInsertSeance);
        tableViewFilmSelect->setObjectName(QStringLiteral("tableViewFilmSelect"));

        verticalLayout_3->addWidget(tableViewFilmSelect);

        labelDateTime = new QLabel(pageInsertSeance);
        labelDateTime->setObjectName(QStringLiteral("labelDateTime"));

        verticalLayout_3->addWidget(labelDateTime);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEditHours = new QLineEdit(pageInsertSeance);
        lineEditHours->setObjectName(QStringLiteral("lineEditHours"));

        gridLayout->addWidget(lineEditHours, 1, 3, 1, 1);

        lineEditDay = new QLineEdit(pageInsertSeance);
        lineEditDay->setObjectName(QStringLiteral("lineEditDay"));

        gridLayout->addWidget(lineEditDay, 1, 0, 1, 1, Qt::AlignLeft);

        labelDay = new QLabel(pageInsertSeance);
        labelDay->setObjectName(QStringLiteral("labelDay"));

        gridLayout->addWidget(labelDay, 0, 0, 1, 1);

        lineEditYear = new QLineEdit(pageInsertSeance);
        lineEditYear->setObjectName(QStringLiteral("lineEditYear"));

        gridLayout->addWidget(lineEditYear, 1, 2, 1, 1);

        lineEditMonth = new QLineEdit(pageInsertSeance);
        lineEditMonth->setObjectName(QStringLiteral("lineEditMonth"));

        gridLayout->addWidget(lineEditMonth, 1, 1, 1, 1);

        lineEditMinutes = new QLineEdit(pageInsertSeance);
        lineEditMinutes->setObjectName(QStringLiteral("lineEditMinutes"));

        gridLayout->addWidget(lineEditMinutes, 1, 4, 1, 1);

        labelMonth = new QLabel(pageInsertSeance);
        labelMonth->setObjectName(QStringLiteral("labelMonth"));

        gridLayout->addWidget(labelMonth, 0, 1, 1, 1);

        labelYear = new QLabel(pageInsertSeance);
        labelYear->setObjectName(QStringLiteral("labelYear"));

        gridLayout->addWidget(labelYear, 0, 2, 1, 1);

        labelHours = new QLabel(pageInsertSeance);
        labelHours->setObjectName(QStringLiteral("labelHours"));

        gridLayout->addWidget(labelHours, 0, 3, 1, 1);

        labelMinutes = new QLabel(pageInsertSeance);
        labelMinutes->setObjectName(QStringLiteral("labelMinutes"));

        gridLayout->addWidget(labelMinutes, 0, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelPrice = new QLabel(pageInsertSeance);
        labelPrice->setObjectName(QStringLiteral("labelPrice"));

        gridLayout_2->addWidget(labelPrice, 0, 0, 1, 1);

        lineEditPrice = new QLineEdit(pageInsertSeance);
        lineEditPrice->setObjectName(QStringLiteral("lineEditPrice"));

        gridLayout_2->addWidget(lineEditPrice, 1, 0, 1, 1);

        labelHall = new QLabel(pageInsertSeance);
        labelHall->setObjectName(QStringLiteral("labelHall"));

        gridLayout_2->addWidget(labelHall, 0, 1, 1, 1);

        lineEditHall = new QLineEdit(pageInsertSeance);
        lineEditHall->setObjectName(QStringLiteral("lineEditHall"));

        gridLayout_2->addWidget(lineEditHall, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        pushButtonAddSeance = new QPushButton(pageInsertSeance);
        pushButtonAddSeance->setObjectName(QStringLiteral("pushButtonAddSeance"));

        verticalLayout_3->addWidget(pushButtonAddSeance);


        verticalLayout_4->addLayout(verticalLayout_3);

        stackedWidget->addWidget(pageInsertSeance);
        pageDeleteSeance = new QWidget();
        pageDeleteSeance->setObjectName(QStringLiteral("pageDeleteSeance"));
        verticalLayout_5 = new QVBoxLayout(pageDeleteSeance);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tableViewSeanceDelete = new QTableView(pageDeleteSeance);
        tableViewSeanceDelete->setObjectName(QStringLiteral("tableViewSeanceDelete"));

        verticalLayout_5->addWidget(tableViewSeanceDelete);

        pushButtonDeleteSeance = new QPushButton(pageDeleteSeance);
        pushButtonDeleteSeance->setObjectName(QStringLiteral("pushButtonDeleteSeance"));

        verticalLayout_5->addWidget(pushButtonDeleteSeance);

        stackedWidget->addWidget(pageDeleteSeance);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(SeancesAdmin);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SeancesAdmin);
    } // setupUi

    void retranslateUi(QDialog *SeancesAdmin)
    {
        SeancesAdmin->setWindowTitle(QApplication::translate("SeancesAdmin", "Dialog", Q_NULLPTR));
        pushButtonReloadTb->setText(QApplication::translate("SeancesAdmin", "Reload Table", Q_NULLPTR));
        labelFilm->setText(QApplication::translate("SeancesAdmin", "Choose Film", Q_NULLPTR));
        labelDateTime->setText(QApplication::translate("SeancesAdmin", "Date and Time", Q_NULLPTR));
        labelDay->setText(QApplication::translate("SeancesAdmin", "day", Q_NULLPTR));
        labelMonth->setText(QApplication::translate("SeancesAdmin", "month", Q_NULLPTR));
        labelYear->setText(QApplication::translate("SeancesAdmin", "year", Q_NULLPTR));
        labelHours->setText(QApplication::translate("SeancesAdmin", "hours", Q_NULLPTR));
        labelMinutes->setText(QApplication::translate("SeancesAdmin", "minutes", Q_NULLPTR));
        labelPrice->setText(QApplication::translate("SeancesAdmin", "Price", Q_NULLPTR));
        labelHall->setText(QApplication::translate("SeancesAdmin", "Hall", Q_NULLPTR));
        pushButtonAddSeance->setText(QApplication::translate("SeancesAdmin", "Add Seance", Q_NULLPTR));
        pushButtonDeleteSeance->setText(QApplication::translate("SeancesAdmin", "Delete Seance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SeancesAdmin: public Ui_SeancesAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANCESADMIN_H
