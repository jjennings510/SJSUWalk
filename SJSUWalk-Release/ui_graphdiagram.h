/********************************************************************************
** Form generated from reading UI file 'graphdiagram.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHDIAGRAM_H
#define UI_GRAPHDIAGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphDiagram
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QDialog *GraphDiagram)
    {
        if (GraphDiagram->objectName().isEmpty())
            GraphDiagram->setObjectName(QStringLiteral("GraphDiagram"));
        GraphDiagram->resize(658, 507);
        GraphDiagram->setSizeIncrement(QSize(1, 1));
        gridLayout = new QGridLayout(GraphDiagram);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(GraphDiagram);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 632, 481));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(GraphDiagram);

        QMetaObject::connectSlotsByName(GraphDiagram);
    } // setupUi

    void retranslateUi(QDialog *GraphDiagram)
    {
        GraphDiagram->setWindowTitle(QApplication::translate("GraphDiagram", "Dialog", nullptr));
        label->setText(QApplication::translate("GraphDiagram", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphDiagram: public Ui_GraphDiagram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHDIAGRAM_H
