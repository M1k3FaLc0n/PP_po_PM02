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
    QTableView *tableView;
    QPushButton *pushButtonChoosSeance;
    QPushButton *pushButtonReloadTb;
    QWidget *page_2;

    void setupUi(QDialog *Seances)
    {
        if (Seances->objectName().isEmpty())
            Seances->setObjectName(QStringLiteral("Seances"));
        Seances->resize(1026, 575);
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

        tableView = new QTableView(pageSelectSeance);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        pushButtonChoosSeance = new QPushButton(pageSelectSeance);
        pushButtonChoosSeance->setObjectName(QStringLiteral("pushButtonChoosSeance"));

        verticalLayout->addWidget(pushButtonChoosSeance);

        pushButtonReloadTb = new QPushButton(pageSelectSeance);
        pushButtonReloadTb->setObjectName(QStringLiteral("pushButtonReloadTb"));

        verticalLayout->addWidget(pushButtonReloadTb);

        stackedWidget->addWidget(pageSelectSeance);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Seances);

        QMetaObject::connectSlotsByName(Seances);
    } // setupUi

    void retranslateUi(QDialog *Seances)
    {
        Seances->setWindowTitle(QApplication::translate("Seances", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Seances", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265 \321\201\320\265\320\260\320\275\321\201\321\213", Q_NULLPTR));
        pushButtonChoosSeance->setText(QApplication::translate("Seances", "Choose Seance", Q_NULLPTR));
        pushButtonReloadTb->setText(QApplication::translate("Seances", "Reload Table", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Seances: public Ui_Seances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANCES_H
