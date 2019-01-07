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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Seances
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QDialog *Seances)
    {
        if (Seances->objectName().isEmpty())
            Seances->setObjectName(QStringLiteral("Seances"));
        Seances->resize(532, 400);
        gridLayout = new QGridLayout(Seances);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(Seances);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(Seances);

        QMetaObject::connectSlotsByName(Seances);
    } // setupUi

    void retranslateUi(QDialog *Seances)
    {
        Seances->setWindowTitle(QApplication::translate("Seances", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Seances: public Ui_Seances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANCES_H
