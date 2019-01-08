/********************************************************************************
** Form generated from reading UI file 'seances.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEANCES_H
#define UI_SEANCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seances
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageSelectSeance;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableViewSeances;
    QPushButton *pushButtonChoosSeance;
    QPushButton *pushButtonReloadTb;
    QWidget *pageSelectPlaces;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QPushButton *pushButtonBuyTickets;
    QPushButton *pushButtonReturnTicket;
    QPushButton *pushButtonReloadTb_2;
    QPushButton *pushButtonBackToSeaSel;

    void setupUi(QDialog *Seances)
    {
        if (Seances->objectName().isEmpty())
            Seances->setObjectName(QStringLiteral("Seances"));
        Seances->resize(997, 610);
        gridLayout = new QGridLayout(Seances);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Seances);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageSelectSeance = new QWidget();
        pageSelectSeance->setObjectName(QStringLiteral("pageSelectSeance"));
        verticalLayout = new QVBoxLayout(pageSelectSeance);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(pageSelectSeance);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableViewSeances = new QTableView(pageSelectSeance);
        tableViewSeances->setObjectName(QStringLiteral("tableViewSeances"));

        verticalLayout->addWidget(tableViewSeances);

        pushButtonChoosSeance = new QPushButton(pageSelectSeance);
        pushButtonChoosSeance->setObjectName(QStringLiteral("pushButtonChoosSeance"));

        verticalLayout->addWidget(pushButtonChoosSeance);

        pushButtonReloadTb = new QPushButton(pageSelectSeance);
        pushButtonReloadTb->setObjectName(QStringLiteral("pushButtonReloadTb"));

        verticalLayout->addWidget(pushButtonReloadTb);

        stackedWidget->addWidget(pageSelectSeance);
        pageSelectPlaces = new QWidget();
        pageSelectPlaces->setObjectName(QStringLiteral("pageSelectPlaces"));
        verticalLayout_2 = new QVBoxLayout(pageSelectPlaces);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget = new QTableWidget(pageSelectPlaces);
        if (tableWidget->columnCount() < 20)
            tableWidget->setColumnCount(20);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem29);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAutoFillBackground(false);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(46);
        tableWidget->horizontalHeader()->setMinimumSectionSize(48);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(40);

        verticalLayout_2->addWidget(tableWidget);

        pushButtonBuyTickets = new QPushButton(pageSelectPlaces);
        pushButtonBuyTickets->setObjectName(QStringLiteral("pushButtonBuyTickets"));

        verticalLayout_2->addWidget(pushButtonBuyTickets);

        pushButtonReturnTicket = new QPushButton(pageSelectPlaces);
        pushButtonReturnTicket->setObjectName(QStringLiteral("pushButtonReturnTicket"));

        verticalLayout_2->addWidget(pushButtonReturnTicket);

        pushButtonReloadTb_2 = new QPushButton(pageSelectPlaces);
        pushButtonReloadTb_2->setObjectName(QStringLiteral("pushButtonReloadTb_2"));

        verticalLayout_2->addWidget(pushButtonReloadTb_2);

        pushButtonBackToSeaSel = new QPushButton(pageSelectPlaces);
        pushButtonBackToSeaSel->setObjectName(QStringLiteral("pushButtonBackToSeaSel"));

        verticalLayout_2->addWidget(pushButtonBackToSeaSel);

        stackedWidget->addWidget(pageSelectPlaces);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Seances);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Seances);
    } // setupUi

    void retranslateUi(QDialog *Seances)
    {
        Seances->setWindowTitle(QApplication::translate("Seances", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Seances", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265 \321\201\320\265\320\260\320\275\321\201\321\213", Q_NULLPTR));
        pushButtonChoosSeance->setText(QApplication::translate("Seances", "Choose Seance", Q_NULLPTR));
        pushButtonReloadTb->setText(QApplication::translate("Seances", "Reload Table", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Seances", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Seances", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Seances", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Seances", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Seances", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Seances", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Seances", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Seances", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Seances", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Seances", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Seances", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Seances", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Seances", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("Seances", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("Seances", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("Seances", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QApplication::translate("Seances", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QApplication::translate("Seances", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QApplication::translate("Seances", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QApplication::translate("Seances", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("Seances", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("Seances", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("Seances", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("Seances", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem24->setText(QApplication::translate("Seances", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem25->setText(QApplication::translate("Seances", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem26->setText(QApplication::translate("Seances", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem27->setText(QApplication::translate("Seances", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem28->setText(QApplication::translate("Seances", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem29->setText(QApplication::translate("Seances", "10", Q_NULLPTR));
        pushButtonBuyTickets->setText(QApplication::translate("Seances", "Buy Ticket(s)", Q_NULLPTR));
        pushButtonReturnTicket->setText(QApplication::translate("Seances", "Return Ticket(s)", Q_NULLPTR));
        pushButtonReloadTb_2->setText(QApplication::translate("Seances", "Reload Table", Q_NULLPTR));
        pushButtonBackToSeaSel->setText(QApplication::translate("Seances", "Back to Seance Selection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Seances: public Ui_Seances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANCES_H
