/********************************************************************************
** Form generated from reading UI file 'adjacencymatrix.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJACENCYMATRIX_H
#define UI_ADJACENCYMATRIX_H

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

class Ui_AdjacencyMatrix
{
public:
    QGridLayout *gridLayout;
    QLabel *source;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLabel *destination;
    QLabel *cost;
    QLabel *label;

    void setupUi(QDialog *AdjacencyMatrix)
    {
        if (AdjacencyMatrix->objectName().isEmpty())
            AdjacencyMatrix->setObjectName(QStringLiteral("AdjacencyMatrix"));
        AdjacencyMatrix->resize(475, 383);
        gridLayout = new QGridLayout(AdjacencyMatrix);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        source = new QLabel(AdjacencyMatrix);
        source->setObjectName(QStringLiteral("source"));
        source->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(source, 0, 0, 1, 1);

        tableWidget = new QTableWidget(AdjacencyMatrix);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 7, 0, 1, 5);

        label_3 = new QLabel(AdjacencyMatrix);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        destination = new QLabel(AdjacencyMatrix);
        destination->setObjectName(QStringLiteral("destination"));
        destination->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(destination, 0, 2, 1, 1);

        cost = new QLabel(AdjacencyMatrix);
        cost->setObjectName(QStringLiteral("cost"));
        cost->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(cost, 0, 4, 1, 1);

        label = new QLabel(AdjacencyMatrix);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 3, 1, 1);


        retranslateUi(AdjacencyMatrix);

        QMetaObject::connectSlotsByName(AdjacencyMatrix);
    } // setupUi

    void retranslateUi(QDialog *AdjacencyMatrix)
    {
        AdjacencyMatrix->setWindowTitle(QApplication::translate("AdjacencyMatrix", "Dialog", nullptr));
        source->setText(QApplication::translate("AdjacencyMatrix", "source", nullptr));
        label_3->setText(QApplication::translate("AdjacencyMatrix", "->", nullptr));
        destination->setText(QApplication::translate("AdjacencyMatrix", "destination", nullptr));
        cost->setText(QApplication::translate("AdjacencyMatrix", "cost", nullptr));
        label->setText(QApplication::translate("AdjacencyMatrix", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdjacencyMatrix: public Ui_AdjacencyMatrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJACENCYMATRIX_H
