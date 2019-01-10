/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *pageAuth;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *tab_numLabel;
    QLineEdit *tab_numLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *pushButtonAuth;
    QWidget *pageCashierMenu;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonSnowSeances;
    QPushButton *pushButtonCloseDb;
    QWidget *pageAdmiMenu;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *_2;
    QVBoxLayout *filmMenu;
    QPushButton *pushButtonSelectFilms;
    QPushButton *pushButtonAddFilm;
    QPushButton *pushButtonDeleteFilms;
    QVBoxLayout *seanceMenu;
    QPushButton *pushButtonSelectSeance;
    QPushButton *pushButtonAddSeance;
    QPushButton *pushButtonDeleteSeance;
    QVBoxLayout *userMenu;
    QPushButton *pushButtonAddUser;
    QPushButton *pushButtonCloseDb_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(417, 281);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageAuth = new QWidget();
        pageAuth->setObjectName(QStringLiteral("pageAuth"));
        gridLayout_3 = new QGridLayout(pageAuth);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        tab_numLabel = new QLabel(pageAuth);
        tab_numLabel->setObjectName(QStringLiteral("tab_numLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, tab_numLabel);

        tab_numLineEdit = new QLineEdit(pageAuth);
        tab_numLineEdit->setObjectName(QStringLiteral("tab_numLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, tab_numLineEdit);

        passwordLabel = new QLabel(pageAuth);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(pageAuth);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        pushButtonAuth = new QPushButton(pageAuth);
        pushButtonAuth->setObjectName(QStringLiteral("pushButtonAuth"));

        gridLayout_3->addWidget(pushButtonAuth, 1, 0, 1, 1);

        stackedWidget->addWidget(pageAuth);
        pageCashierMenu = new QWidget();
        pageCashierMenu->setObjectName(QStringLiteral("pageCashierMenu"));
        verticalLayout_2 = new QVBoxLayout(pageCashierMenu);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButtonSnowSeances = new QPushButton(pageCashierMenu);
        pushButtonSnowSeances->setObjectName(QStringLiteral("pushButtonSnowSeances"));
        pushButtonSnowSeances->setMinimumSize(QSize(135, 25));
        pushButtonSnowSeances->setBaseSize(QSize(135, 25));

        verticalLayout_2->addWidget(pushButtonSnowSeances);

        pushButtonCloseDb = new QPushButton(pageCashierMenu);
        pushButtonCloseDb->setObjectName(QStringLiteral("pushButtonCloseDb"));
        pushButtonCloseDb->setMinimumSize(QSize(100, 25));
        pushButtonCloseDb->setMaximumSize(QSize(16777215, 16777215));
        pushButtonCloseDb->setBaseSize(QSize(100, 25));
        pushButtonCloseDb->setCheckable(false);
        pushButtonCloseDb->setFlat(false);

        verticalLayout_2->addWidget(pushButtonCloseDb);

        stackedWidget->addWidget(pageCashierMenu);
        pageAdmiMenu = new QWidget();
        pageAdmiMenu->setObjectName(QStringLiteral("pageAdmiMenu"));
        pageAdmiMenu->setContextMenuPolicy(Qt::CustomContextMenu);
        verticalLayout_6 = new QVBoxLayout(pageAdmiMenu);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        filmMenu = new QVBoxLayout();
        filmMenu->setSpacing(6);
        filmMenu->setObjectName(QStringLiteral("filmMenu"));
        pushButtonSelectFilms = new QPushButton(pageAdmiMenu);
        pushButtonSelectFilms->setObjectName(QStringLiteral("pushButtonSelectFilms"));

        filmMenu->addWidget(pushButtonSelectFilms);

        pushButtonAddFilm = new QPushButton(pageAdmiMenu);
        pushButtonAddFilm->setObjectName(QStringLiteral("pushButtonAddFilm"));

        filmMenu->addWidget(pushButtonAddFilm);

        pushButtonDeleteFilms = new QPushButton(pageAdmiMenu);
        pushButtonDeleteFilms->setObjectName(QStringLiteral("pushButtonDeleteFilms"));

        filmMenu->addWidget(pushButtonDeleteFilms);


        _2->addLayout(filmMenu);

        seanceMenu = new QVBoxLayout();
        seanceMenu->setSpacing(6);
        seanceMenu->setObjectName(QStringLiteral("seanceMenu"));
        pushButtonSelectSeance = new QPushButton(pageAdmiMenu);
        pushButtonSelectSeance->setObjectName(QStringLiteral("pushButtonSelectSeance"));

        seanceMenu->addWidget(pushButtonSelectSeance);

        pushButtonAddSeance = new QPushButton(pageAdmiMenu);
        pushButtonAddSeance->setObjectName(QStringLiteral("pushButtonAddSeance"));

        seanceMenu->addWidget(pushButtonAddSeance);

        pushButtonDeleteSeance = new QPushButton(pageAdmiMenu);
        pushButtonDeleteSeance->setObjectName(QStringLiteral("pushButtonDeleteSeance"));

        seanceMenu->addWidget(pushButtonDeleteSeance);


        _2->addLayout(seanceMenu);

        userMenu = new QVBoxLayout();
        userMenu->setSpacing(6);
        userMenu->setObjectName(QStringLiteral("userMenu"));
        pushButtonAddUser = new QPushButton(pageAdmiMenu);
        pushButtonAddUser->setObjectName(QStringLiteral("pushButtonAddUser"));

        userMenu->addWidget(pushButtonAddUser);


        _2->addLayout(userMenu);


        verticalLayout_6->addLayout(_2);

        pushButtonCloseDb_2 = new QPushButton(pageAdmiMenu);
        pushButtonCloseDb_2->setObjectName(QStringLiteral("pushButtonCloseDb_2"));

        verticalLayout_6->addWidget(pushButtonCloseDb_2);

        stackedWidget->addWidget(pageAdmiMenu);

        verticalLayout_5->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 417, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        pushButtonCloseDb->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        tab_numLabel->setText(QApplication::translate("MainWindow", "personnel number", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("MainWindow", "password", Q_NULLPTR));
        pushButtonAuth->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", Q_NULLPTR));
        pushButtonSnowSeances->setText(QApplication::translate("MainWindow", "Show Avaible Seances (Sell/Return Tickets)", Q_NULLPTR));
        pushButtonCloseDb->setText(QApplication::translate("MainWindow", "Close Database", Q_NULLPTR));
        pushButtonSelectFilms->setText(QApplication::translate("MainWindow", "Select/Update films", Q_NULLPTR));
        pushButtonAddFilm->setText(QApplication::translate("MainWindow", "Add film", Q_NULLPTR));
        pushButtonDeleteFilms->setText(QApplication::translate("MainWindow", "Delete film", Q_NULLPTR));
        pushButtonSelectSeance->setText(QApplication::translate("MainWindow", "Select/Update seances", Q_NULLPTR));
        pushButtonAddSeance->setText(QApplication::translate("MainWindow", "Add seance", Q_NULLPTR));
        pushButtonDeleteSeance->setText(QApplication::translate("MainWindow", "Delete seance", Q_NULLPTR));
        pushButtonAddUser->setText(QApplication::translate("MainWindow", "Add user", Q_NULLPTR));
        pushButtonCloseDb_2->setText(QApplication::translate("MainWindow", "Close Database", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
