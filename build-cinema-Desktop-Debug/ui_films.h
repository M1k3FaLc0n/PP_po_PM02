/********************************************************************************
** Form generated from reading UI file 'films.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMS_H
#define UI_FILMS_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Films
{
public:
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *pageSelect;
    QVBoxLayout *verticalLayout;
    QTableView *tableViewSelect;
    QPushButton *pushButtonReloadTbSelect;
    QWidget *pageAdd;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditGenres;
    QLineEdit *lineEditDirector;
    QLabel *label;
    QLabel *labelDirector;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayoutReceipDate;
    QLabel *labelReceiptDate;
    QGridLayout *gridLayout;
    QLineEdit *lineEditDay;
    QLineEdit *lineEditMonth;
    QLabel *labelDay;
    QLabel *labelMinutes;
    QLineEdit *lineEditYear;
    QLabel *labelHours;
    QLineEdit *lineEditHours;
    QLineEdit *lineEditMinutes;
    QLabel *labelMonth;
    QLabel *labelYear;
    QLabel *labelGenres;
    QLabel *labelTitle;
    QPushButton *pushButtonAddFilm;
    QWidget *pageDelete;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QPushButton *pushButtonReloadTbDelete;
    QPushButton *pushButtonDeleteFilm;
    QPushButton *pushButton;

    void setupUi(QDialog *Films)
    {
        if (Films->objectName().isEmpty())
            Films->setObjectName(QStringLiteral("Films"));
        Films->resize(620, 578);
        gridLayout_3 = new QGridLayout(Films);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        stackedWidget = new QStackedWidget(Films);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageSelect = new QWidget();
        pageSelect->setObjectName(QStringLiteral("pageSelect"));
        verticalLayout = new QVBoxLayout(pageSelect);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableViewSelect = new QTableView(pageSelect);
        tableViewSelect->setObjectName(QStringLiteral("tableViewSelect"));

        verticalLayout->addWidget(tableViewSelect);

        pushButtonReloadTbSelect = new QPushButton(pageSelect);
        pushButtonReloadTbSelect->setObjectName(QStringLiteral("pushButtonReloadTbSelect"));

        verticalLayout->addWidget(pushButtonReloadTbSelect);

        stackedWidget->addWidget(pageSelect);
        pageAdd = new QWidget();
        pageAdd->setObjectName(QStringLiteral("pageAdd"));
        verticalLayout_2 = new QVBoxLayout(pageAdd);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEditTitle = new QLineEdit(pageAdd);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));

        gridLayout_2->addWidget(lineEditTitle, 0, 1, 1, 1);

        lineEditGenres = new QLineEdit(pageAdd);
        lineEditGenres->setObjectName(QStringLiteral("lineEditGenres"));

        gridLayout_2->addWidget(lineEditGenres, 2, 1, 1, 1);

        lineEditDirector = new QLineEdit(pageAdd);
        lineEditDirector->setObjectName(QStringLiteral("lineEditDirector"));

        gridLayout_2->addWidget(lineEditDirector, 1, 1, 1, 1);

        label = new QLabel(pageAdd);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 2);

        labelDirector = new QLabel(pageAdd);
        labelDirector->setObjectName(QStringLiteral("labelDirector"));

        gridLayout_2->addWidget(labelDirector, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalLayoutReceipDate = new QVBoxLayout();
        verticalLayoutReceipDate->setObjectName(QStringLiteral("verticalLayoutReceipDate"));
        labelReceiptDate = new QLabel(pageAdd);
        labelReceiptDate->setObjectName(QStringLiteral("labelReceiptDate"));

        verticalLayoutReceipDate->addWidget(labelReceiptDate);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEditDay = new QLineEdit(pageAdd);
        lineEditDay->setObjectName(QStringLiteral("lineEditDay"));

        gridLayout->addWidget(lineEditDay, 2, 0, 1, 1);

        lineEditMonth = new QLineEdit(pageAdd);
        lineEditMonth->setObjectName(QStringLiteral("lineEditMonth"));

        gridLayout->addWidget(lineEditMonth, 2, 1, 1, 1);

        labelDay = new QLabel(pageAdd);
        labelDay->setObjectName(QStringLiteral("labelDay"));

        gridLayout->addWidget(labelDay, 1, 0, 1, 1);

        labelMinutes = new QLabel(pageAdd);
        labelMinutes->setObjectName(QStringLiteral("labelMinutes"));

        gridLayout->addWidget(labelMinutes, 1, 4, 1, 1);

        lineEditYear = new QLineEdit(pageAdd);
        lineEditYear->setObjectName(QStringLiteral("lineEditYear"));

        gridLayout->addWidget(lineEditYear, 2, 2, 1, 1);

        labelHours = new QLabel(pageAdd);
        labelHours->setObjectName(QStringLiteral("labelHours"));

        gridLayout->addWidget(labelHours, 1, 3, 1, 1);

        lineEditHours = new QLineEdit(pageAdd);
        lineEditHours->setObjectName(QStringLiteral("lineEditHours"));

        gridLayout->addWidget(lineEditHours, 2, 3, 1, 1);

        lineEditMinutes = new QLineEdit(pageAdd);
        lineEditMinutes->setObjectName(QStringLiteral("lineEditMinutes"));

        gridLayout->addWidget(lineEditMinutes, 2, 4, 1, 1);

        labelMonth = new QLabel(pageAdd);
        labelMonth->setObjectName(QStringLiteral("labelMonth"));

        gridLayout->addWidget(labelMonth, 1, 1, 1, 1);

        labelYear = new QLabel(pageAdd);
        labelYear->setObjectName(QStringLiteral("labelYear"));

        gridLayout->addWidget(labelYear, 1, 2, 1, 1);


        verticalLayoutReceipDate->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayoutReceipDate, 3, 0, 1, 2);

        labelGenres = new QLabel(pageAdd);
        labelGenres->setObjectName(QStringLiteral("labelGenres"));

        gridLayout_2->addWidget(labelGenres, 2, 0, 1, 1);

        labelTitle = new QLabel(pageAdd);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        gridLayout_2->addWidget(labelTitle, 0, 0, 1, 1);

        pushButtonAddFilm = new QPushButton(pageAdd);
        pushButtonAddFilm->setObjectName(QStringLiteral("pushButtonAddFilm"));

        gridLayout_2->addWidget(pushButtonAddFilm, 6, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout_2);

        stackedWidget->addWidget(pageAdd);
        pageDelete = new QWidget();
        pageDelete->setObjectName(QStringLiteral("pageDelete"));
        verticalLayout_3 = new QVBoxLayout(pageDelete);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView = new QTableView(pageDelete);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);

        pushButtonReloadTbDelete = new QPushButton(pageDelete);
        pushButtonReloadTbDelete->setObjectName(QStringLiteral("pushButtonReloadTbDelete"));

        verticalLayout_3->addWidget(pushButtonReloadTbDelete);

        pushButtonDeleteFilm = new QPushButton(pageDelete);
        pushButtonDeleteFilm->setObjectName(QStringLiteral("pushButtonDeleteFilm"));

        verticalLayout_3->addWidget(pushButtonDeleteFilm);

        stackedWidget->addWidget(pageDelete);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 2, 2);

        pushButton = new QPushButton(Films);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 2, 0, 1, 2);


        retranslateUi(Films);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Films);
    } // setupUi

    void retranslateUi(QDialog *Films)
    {
        Films->setWindowTitle(QApplication::translate("Films", "Dialog", Q_NULLPTR));
        pushButtonReloadTbSelect->setText(QApplication::translate("Films", "\320\237\320\265\321\200\320\265\320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", Q_NULLPTR));
        label->setText(QApplication::translate("Films", "* - important fields", Q_NULLPTR));
        labelDirector->setText(QApplication::translate("Films", "\320\240\320\265\320\266\320\270\321\201\321\201\321\201\320\265\321\200", Q_NULLPTR));
        labelReceiptDate->setText(QApplication::translate("Films", "\320\224\320\260\321\202\320\260 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\270\321\217*", Q_NULLPTR));
        labelDay->setText(QApplication::translate("Films", "\320\264\320\265\320\275\321\214", Q_NULLPTR));
        labelMinutes->setText(QApplication::translate("Films", "\320\274\320\270\320\275\321\203\321\202\321\213", Q_NULLPTR));
        labelHours->setText(QApplication::translate("Films", "\321\207\320\260\321\201\321\213", Q_NULLPTR));
        labelMonth->setText(QApplication::translate("Films", "\320\274\320\265\321\201\321\217\321\206", Q_NULLPTR));
        labelYear->setText(QApplication::translate("Films", "\320\263\320\276\320\264", Q_NULLPTR));
        labelGenres->setText(QApplication::translate("Films", "\320\226\320\260\320\275\321\200(\321\213)", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("Films", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265*", Q_NULLPTR));
        pushButtonAddFilm->setText(QApplication::translate("Films", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\320\274", Q_NULLPTR));
        pushButtonReloadTbDelete->setText(QApplication::translate("Films", "\320\237\320\265\321\200\320\265\320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", Q_NULLPTR));
        pushButtonDeleteFilm->setText(QApplication::translate("Films", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\204\320\270\320\273\321\214\320\274", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Films", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Films: public Ui_Films {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMS_H
