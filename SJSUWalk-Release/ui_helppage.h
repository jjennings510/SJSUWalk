/********************************************************************************
** Form generated from reading UI file 'helppage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPPAGE_H
#define UI_HELPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpPage
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *HelpPage)
    {
        if (HelpPage->objectName().isEmpty())
            HelpPage->setObjectName(QStringLiteral("HelpPage"));
        HelpPage->resize(354, 484);
        HelpPage->setStyleSheet(QLatin1String("background: \"#0055A2\";\n"
"QScrollBar::vertical {\n"
"	boder: 1px solid #999999;\n"
"	background: white;\n"
"	width: 10px;\n"
"	margin: 0px 0px 0px 0px;\n"
"}"));
        gridLayout = new QGridLayout(HelpPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(HelpPage);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(330, 0));
        tableWidget->setMaximumSize(QSize(330, 16777215));
        tableWidget->setStyleSheet(QLatin1String("background: \"white\";\n"
"font: \"Rockwell\";"));
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 1, 1, 1, 1);

        label = new QLabel(HelpPage);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: \"Rockwell\";"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(HelpPage);

        QMetaObject::connectSlotsByName(HelpPage);
    } // setupUi

    void retranslateUi(QDialog *HelpPage)
    {
        HelpPage->setWindowTitle(QApplication::translate("HelpPage", "Dialog", nullptr));
        label->setText(QApplication::translate("HelpPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;font:Rockwell; color:#ffffff;\">Map Legend</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpPage: public Ui_HelpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPPAGE_H
