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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
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
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonSnowSeances;
    QPushButton *pushButtonCloseDb;
    QSpacerItem *verticalSpacer;
    QWidget *pageAdmiMenu;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *filmMenu;
    QPushButton *pushButtonSelectFilms;
    QPushButton *pushButtonAddFilm;
    QPushButton *pushButtonDeleteFilms;
    QPushButton *pushButtonSelectSeance;
    QPushButton *pushButtonAddSeance;
    QPushButton *pushButtonDeleteSeance;
    QPushButton *pushButtonAddUser;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCloseDb_2;
    QWidget *pageAddUser;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *labelPersonnelNumber;
    QLineEdit *lineEditPersonnelNumber;
    QLabel *labelFIO;
    QLineEdit *lineEditFIO;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *labelEducation;
    QLineEdit *lineEditEducation;
    QLabel *labelTelephone;
    QLineEdit *lineEditTelephone;
    QLabel *labelBirthDate;
    QDateEdit *dateEdit;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonAddUser_2;
    QPushButton *Cancel;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(425, 359);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
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
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        pushButtonAuth = new QPushButton(pageAuth);
        pushButtonAuth->setObjectName(QStringLiteral("pushButtonAuth"));

        gridLayout_3->addWidget(pushButtonAuth, 1, 0, 1, 1);

        stackedWidget->addWidget(pageAuth);
        pageCashierMenu = new QWidget();
        pageCashierMenu->setObjectName(QStringLiteral("pageCashierMenu"));
        horizontalLayout_2 = new QHBoxLayout(pageCashierMenu);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);

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
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer);

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

        pushButtonSelectSeance = new QPushButton(pageAdmiMenu);
        pushButtonSelectSeance->setObjectName(QStringLiteral("pushButtonSelectSeance"));

        filmMenu->addWidget(pushButtonSelectSeance);

        pushButtonAddSeance = new QPushButton(pageAdmiMenu);
        pushButtonAddSeance->setObjectName(QStringLiteral("pushButtonAddSeance"));

        filmMenu->addWidget(pushButtonAddSeance);

        pushButtonDeleteSeance = new QPushButton(pageAdmiMenu);
        pushButtonDeleteSeance->setObjectName(QStringLiteral("pushButtonDeleteSeance"));

        filmMenu->addWidget(pushButtonDeleteSeance);

        pushButtonAddUser = new QPushButton(pageAdmiMenu);
        pushButtonAddUser->setObjectName(QStringLiteral("pushButtonAddUser"));

        filmMenu->addWidget(pushButtonAddUser);


        _2->addLayout(filmMenu);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(_2);

        pushButtonCloseDb_2 = new QPushButton(pageAdmiMenu);
        pushButtonCloseDb_2->setObjectName(QStringLiteral("pushButtonCloseDb_2"));

        verticalLayout_6->addWidget(pushButtonCloseDb_2);

        stackedWidget->addWidget(pageAdmiMenu);
        pageAddUser = new QWidget();
        pageAddUser->setObjectName(QStringLiteral("pageAddUser"));
        verticalLayout = new QVBoxLayout(pageAddUser);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        labelPersonnelNumber = new QLabel(pageAddUser);
        labelPersonnelNumber->setObjectName(QStringLiteral("labelPersonnelNumber"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelPersonnelNumber);

        lineEditPersonnelNumber = new QLineEdit(pageAddUser);
        lineEditPersonnelNumber->setObjectName(QStringLiteral("lineEditPersonnelNumber"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditPersonnelNumber);

        labelFIO = new QLabel(pageAddUser);
        labelFIO->setObjectName(QStringLiteral("labelFIO"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelFIO);

        lineEditFIO = new QLineEdit(pageAddUser);
        lineEditFIO->setObjectName(QStringLiteral("lineEditFIO"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditFIO);

        label = new QLabel(pageAddUser);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(pageAddUser);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox);

        labelEducation = new QLabel(pageAddUser);
        labelEducation->setObjectName(QStringLiteral("labelEducation"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, labelEducation);

        lineEditEducation = new QLineEdit(pageAddUser);
        lineEditEducation->setObjectName(QStringLiteral("lineEditEducation"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEditEducation);

        labelTelephone = new QLabel(pageAddUser);
        labelTelephone->setObjectName(QStringLiteral("labelTelephone"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelTelephone);

        lineEditTelephone = new QLineEdit(pageAddUser);
        lineEditTelephone->setObjectName(QStringLiteral("lineEditTelephone"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEditTelephone);

        labelBirthDate = new QLabel(pageAddUser);
        labelBirthDate->setObjectName(QStringLiteral("labelBirthDate"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, labelBirthDate);

        dateEdit = new QDateEdit(pageAddUser);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, dateEdit);

        labelPassword = new QLabel(pageAddUser);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(pageAddUser);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditPassword);


        verticalLayout->addLayout(formLayout_2);

        pushButtonAddUser_2 = new QPushButton(pageAddUser);
        pushButtonAddUser_2->setObjectName(QStringLiteral("pushButtonAddUser_2"));

        verticalLayout->addWidget(pushButtonAddUser_2);

        Cancel = new QPushButton(pageAddUser);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        verticalLayout->addWidget(Cancel);

        stackedWidget->addWidget(pageAddUser);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 425, 22));
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
        tab_numLabel->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\265\320\273\321\214\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        pushButtonAuth->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", Q_NULLPTR));
        pushButtonSnowSeances->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\200\320\265\320\264\321\201\321\202\320\276\321\217\321\211\320\270\320\265 \321\201\320\265\320\260\320\275\321\201\321\213 (\320\277\321\200\320\276\320\264\320\260\321\202\321\214/\320\262\320\265\321\200\320\275\321\203\321\202\321\214 \320\261\320\270\320\273\320\265\321\202)", Q_NULLPTR));
        pushButtonCloseDb->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\221\320\260\320\267\321\203 \320\224\320\260\320\275\320\275\321\213\321\205", Q_NULLPTR));
        pushButtonSelectFilms->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214/\320\276\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\320\274", Q_NULLPTR));
        pushButtonAddFilm->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\320\274", Q_NULLPTR));
        pushButtonDeleteFilms->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\320\274", Q_NULLPTR));
        pushButtonSelectSeance->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214/\320\276\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", Q_NULLPTR));
        pushButtonAddSeance->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", Q_NULLPTR));
        pushButtonDeleteSeance->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", Q_NULLPTR));
        pushButtonAddUser->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", Q_NULLPTR));
        pushButtonCloseDb_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\221\320\260\320\267\321\203 \320\224\320\260\320\275\320\275\321\213\321\205", Q_NULLPTR));
        labelPersonnelNumber->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\265\320\273\321\214\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200*", Q_NULLPTR));
        labelFIO->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236*", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214*", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "cashier", Q_NULLPTR)
         << QApplication::translate("MainWindow", "admin", Q_NULLPTR)
        );
        labelEducation->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        labelTelephone->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260*", Q_NULLPTR));
        labelBirthDate->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "dd.MM.yyyy", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214*", Q_NULLPTR));
        pushButtonAddUser_2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", Q_NULLPTR));
        Cancel->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
