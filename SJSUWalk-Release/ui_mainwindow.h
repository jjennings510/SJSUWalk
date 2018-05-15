/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdjacency_Matrix;
    QAction *actionGraph;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *header;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *pictureLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *destination;
    QComboBox *startPoint;
    QLabel *label_2;
    QToolButton *helpButton;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QLabel *pathTime;
    QLabel *label_5;
    QPushButton *goAgain;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_6;
    QLabel *v1;
    QMenuBar *menuBar;
    QMenu *menuDebug;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(420, 675);
        MainWindow->setMinimumSize(QSize(343, 568));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow {background: white}\n"
"font: 14pt \"Rockwell\";"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setAnimated(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionAdjacency_Matrix = new QAction(MainWindow);
        actionAdjacency_Matrix->setObjectName(QStringLiteral("actionAdjacency_Matrix"));
        actionGraph = new QAction(MainWindow);
        actionGraph->setObjectName(QStringLiteral("actionGraph"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(-1);
        header = new QLabel(centralWidget);
        header->setObjectName(QStringLiteral("header"));
        header->setMinimumSize(QSize(271, 71));
        header->setMaximumSize(QSize(271, 71));
        header->setLayoutDirection(Qt::LeftToRight);
        header->setScaledContents(true);
        header->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(header, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(396, 543));
        stackedWidget->setStyleSheet(QStringLiteral("font: \"Rockwell\""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pictureLabel = new QLabel(page);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pictureLabel->sizePolicy().hasHeightForWidth());
        pictureLabel->setSizePolicy(sizePolicy);
        pictureLabel->setMinimumSize(QSize(256, 365));
        pictureLabel->setMaximumSize(QSize(713, 730));
        pictureLabel->setSizeIncrement(QSize(0, 0));
        pictureLabel->setBaseSize(QSize(286, 293));
        pictureLabel->setScaledContents(true);

        gridLayout_2->addWidget(pictureLabel, 0, 2, 1, 1);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("\n"
"font: 14pt \"Rockwell\";"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        destination = new QComboBox(groupBox);
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->addItem(QString());
        destination->setObjectName(QStringLiteral("destination"));
        destination->setMinimumSize(QSize(162, 26));
        destination->setMaximumSize(QSize(162, 26));

        gridLayout_3->addWidget(destination, 2, 2, 1, 2);

        startPoint = new QComboBox(groupBox);
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->addItem(QString());
        startPoint->setObjectName(QStringLiteral("startPoint"));
        startPoint->setMinimumSize(QSize(162, 26));
        startPoint->setMaximumSize(QSize(162, 26));

        gridLayout_3->addWidget(startPoint, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAutoFillBackground(false);
        label_2->setFrameShadow(QFrame::Plain);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 2);

        helpButton = new QToolButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));

        gridLayout_3->addWidget(helpButton, 4, 3, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 4, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 36));
        label_6->setStyleSheet(QStringLiteral("font: 24pt, \"Rockwell\";"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(372, 150));
        groupBox_2->setStyleSheet(QStringLiteral("font: 24pt, \"Rockwell\";"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 2);

        pathTime = new QLabel(groupBox_2);
        pathTime->setObjectName(QStringLiteral("pathTime"));
        pathTime->setStyleSheet(QStringLiteral("font: 72pt"));
        pathTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(pathTime, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 2);

        goAgain = new QPushButton(page_2);
        goAgain->setObjectName(QStringLiteral("goAgain"));

        gridLayout_4->addWidget(goAgain, 3, 1, 1, 1);

        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 370, 274));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        v1 = new QLabel(scrollAreaWidgetContents);
        v1->setObjectName(QStringLiteral("v1"));
        v1->setStyleSheet(QStringLiteral("font: 30pt, \"Rockwell\";"));
        v1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(v1, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 2, 0, 1, 2);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 420, 22));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QStringLiteral("menuDebug"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDebug->menuAction());
        menuDebug->addAction(actionAdjacency_Matrix);
        menuDebug->addAction(actionGraph);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SJSU Walk", nullptr));
        actionAdjacency_Matrix->setText(QApplication::translate("MainWindow", "Adjacency Matrix", nullptr));
        actionGraph->setText(QApplication::translate("MainWindow", "Graph", nullptr));
        header->setText(QString());
        pictureLabel->setText(QString());
        groupBox->setTitle(QString());
        destination->setItemText(0, QApplication::translate("MainWindow", "Administration", nullptr));
        destination->setItemText(1, QApplication::translate("MainWindow", "Art Building", nullptr));
        destination->setItemText(2, QApplication::translate("MainWindow", "Associated Students House", nullptr));
        destination->setItemText(3, QApplication::translate("MainWindow", "Associated Students Print Shop", nullptr));
        destination->setItemText(4, QApplication::translate("MainWindow", "Atms", nullptr));
        destination->setItemText(5, QApplication::translate("MainWindow", "Bicardo Business Center", nullptr));
        destination->setItemText(6, QApplication::translate("MainWindow", "Bookstore", nullptr));
        destination->setItemText(7, QApplication::translate("MainWindow", "Business Tower", nullptr));
        destination->setItemText(8, QApplication::translate("MainWindow", "Campus Village 2", nullptr));
        destination->setItemText(9, QApplication::translate("MainWindow", "Campus Village A", nullptr));
        destination->setItemText(10, QApplication::translate("MainWindow", "Campus Village B", nullptr));
        destination->setItemText(11, QApplication::translate("MainWindow", "Campus Village C", nullptr));
        destination->setItemText(12, QApplication::translate("MainWindow", "Career Center", nullptr));
        destination->setItemText(13, QApplication::translate("MainWindow", "Computer Center", nullptr));
        destination->setItemText(14, QApplication::translate("MainWindow", "Central Classroom Building", nullptr));
        destination->setItemText(15, QApplication::translate("MainWindow", "Clark Hall", nullptr));
        destination->setItemText(16, QApplication::translate("MainWindow", "Concert Hall", nullptr));
        destination->setItemText(17, QApplication::translate("MainWindow", "Dining Commons", nullptr));
        destination->setItemText(18, QApplication::translate("MainWindow", "Dudley Moorhead Hall", nullptr));
        destination->setItemText(19, QApplication::translate("MainWindow", "Duncan Hall", nullptr));
        destination->setItemText(20, QApplication::translate("MainWindow", "Dwight Bentel Hall", nullptr));
        destination->setItemText(21, QApplication::translate("MainWindow", "Engineering Building", nullptr));
        destination->setItemText(22, QApplication::translate("MainWindow", "Event Center", nullptr));
        destination->setItemText(23, QApplication::translate("MainWindow", "Faculty Offices", nullptr));
        destination->setItemText(24, QApplication::translate("MainWindow", "Health Building", nullptr));
        destination->setItemText(25, QApplication::translate("MainWindow", "Hugh Gillis Hall", nullptr));
        destination->setItemText(26, QApplication::translate("MainWindow", "Industrial Studies", nullptr));
        destination->setItemText(27, QApplication::translate("MainWindow", "Instructional Resources Center", nullptr));
        destination->setItemText(28, QApplication::translate("MainWindow", "Joe West Hall", nullptr));
        destination->setItemText(29, QApplication::translate("MainWindow", "MLK Library", nullptr));
        destination->setItemText(30, QApplication::translate("MainWindow", "MacQuarrie Hall", nullptr));
        destination->setItemText(31, QApplication::translate("MainWindow", "Morris Dailey Auditorium", nullptr));
        destination->setItemText(32, QApplication::translate("MainWindow", "Music Building", nullptr));
        destination->setItemText(33, QApplication::translate("MainWindow", "North Parking Garage", nullptr));
        destination->setItemText(34, QApplication::translate("MainWindow", "Science Builing", nullptr));
        destination->setItemText(35, QApplication::translate("MainWindow", "South Parking Garage", nullptr));
        destination->setItemText(36, QApplication::translate("MainWindow", "Spartan Complex Central", nullptr));
        destination->setItemText(37, QApplication::translate("MainWindow", "Spartan Complex East", nullptr));
        destination->setItemText(38, QApplication::translate("MainWindow", "Spartan Memorial", nullptr));
        destination->setItemText(39, QApplication::translate("MainWindow", "Student Recreation and Aquatic Center", nullptr));
        destination->setItemText(40, QApplication::translate("MainWindow", "Student Wellness Center", nullptr));
        destination->setItemText(41, QApplication::translate("MainWindow", "Student Services Center", nullptr));
        destination->setItemText(42, QApplication::translate("MainWindow", "Student Union", nullptr));
        destination->setItemText(43, QApplication::translate("MainWindow", "Sweeney Hall", nullptr));
        destination->setItemText(44, QApplication::translate("MainWindow", "Tower Hall", nullptr));
        destination->setItemText(45, QApplication::translate("MainWindow", "University Police Department", nullptr));
        destination->setItemText(46, QApplication::translate("MainWindow", "University Theatre", nullptr));
        destination->setItemText(47, QApplication::translate("MainWindow", "Washburn Hall", nullptr));
        destination->setItemText(48, QApplication::translate("MainWindow", "Washington Square Hall", nullptr));
        destination->setItemText(49, QApplication::translate("MainWindow", "West Parking Garage", nullptr));
        destination->setItemText(50, QApplication::translate("MainWindow", "Yoshihiro Uchida Hall", nullptr));

        startPoint->setItemText(0, QApplication::translate("MainWindow", "Administration", nullptr));
        startPoint->setItemText(1, QApplication::translate("MainWindow", "Art Building", nullptr));
        startPoint->setItemText(2, QApplication::translate("MainWindow", "Associated Students House", nullptr));
        startPoint->setItemText(3, QApplication::translate("MainWindow", "Associated Students Print Shop", nullptr));
        startPoint->setItemText(4, QApplication::translate("MainWindow", "Atms", nullptr));
        startPoint->setItemText(5, QApplication::translate("MainWindow", "Bicardo Business Center", nullptr));
        startPoint->setItemText(6, QApplication::translate("MainWindow", "Bookstore", nullptr));
        startPoint->setItemText(7, QApplication::translate("MainWindow", "Business Tower", nullptr));
        startPoint->setItemText(8, QApplication::translate("MainWindow", "Campus Village 2", nullptr));
        startPoint->setItemText(9, QApplication::translate("MainWindow", "Campus Village A", nullptr));
        startPoint->setItemText(10, QApplication::translate("MainWindow", "Campus Village B", nullptr));
        startPoint->setItemText(11, QApplication::translate("MainWindow", "Campus Village C", nullptr));
        startPoint->setItemText(12, QApplication::translate("MainWindow", "Career Center", nullptr));
        startPoint->setItemText(13, QApplication::translate("MainWindow", "Computer Center", nullptr));
        startPoint->setItemText(14, QApplication::translate("MainWindow", "Central Classroom Building", nullptr));
        startPoint->setItemText(15, QApplication::translate("MainWindow", "Clark Hall", nullptr));
        startPoint->setItemText(16, QApplication::translate("MainWindow", "Concert Hall", nullptr));
        startPoint->setItemText(17, QApplication::translate("MainWindow", "Dining Commons", nullptr));
        startPoint->setItemText(18, QApplication::translate("MainWindow", "Dudley Moorhead Hall", nullptr));
        startPoint->setItemText(19, QApplication::translate("MainWindow", "Duncan Hall", nullptr));
        startPoint->setItemText(20, QApplication::translate("MainWindow", "Dwight Bentel Hall", nullptr));
        startPoint->setItemText(21, QApplication::translate("MainWindow", "Engineering Building", nullptr));
        startPoint->setItemText(22, QApplication::translate("MainWindow", "Event Center", nullptr));
        startPoint->setItemText(23, QApplication::translate("MainWindow", "Faculty Offices", nullptr));
        startPoint->setItemText(24, QApplication::translate("MainWindow", "Health Building", nullptr));
        startPoint->setItemText(25, QApplication::translate("MainWindow", "Hugh Gillis Hall", nullptr));
        startPoint->setItemText(26, QApplication::translate("MainWindow", "Industrial Studies", nullptr));
        startPoint->setItemText(27, QApplication::translate("MainWindow", "Instructional Resources Center", nullptr));
        startPoint->setItemText(28, QApplication::translate("MainWindow", "Joe West Hall", nullptr));
        startPoint->setItemText(29, QApplication::translate("MainWindow", "MLK Library", nullptr));
        startPoint->setItemText(30, QApplication::translate("MainWindow", "MacQuarrie Hall", nullptr));
        startPoint->setItemText(31, QApplication::translate("MainWindow", "Morris Dailey Auditorium", nullptr));
        startPoint->setItemText(32, QApplication::translate("MainWindow", "Music Building", nullptr));
        startPoint->setItemText(33, QApplication::translate("MainWindow", "North Parking Garage", nullptr));
        startPoint->setItemText(34, QApplication::translate("MainWindow", "Science Builing", nullptr));
        startPoint->setItemText(35, QApplication::translate("MainWindow", "South Parking Garage", nullptr));
        startPoint->setItemText(36, QApplication::translate("MainWindow", "Spartan Complex Central", nullptr));
        startPoint->setItemText(37, QApplication::translate("MainWindow", "Spartan Complex East", nullptr));
        startPoint->setItemText(38, QApplication::translate("MainWindow", "Spartan Memorial", nullptr));
        startPoint->setItemText(39, QApplication::translate("MainWindow", "Student Recreation and Aquatic Center", nullptr));
        startPoint->setItemText(40, QApplication::translate("MainWindow", "Student Wellness Center", nullptr));
        startPoint->setItemText(41, QApplication::translate("MainWindow", "Student Services Center", nullptr));
        startPoint->setItemText(42, QApplication::translate("MainWindow", "Student Union", nullptr));
        startPoint->setItemText(43, QApplication::translate("MainWindow", "Sweeney Hall", nullptr));
        startPoint->setItemText(44, QApplication::translate("MainWindow", "Tower Hall", nullptr));
        startPoint->setItemText(45, QApplication::translate("MainWindow", "University Police Department", nullptr));
        startPoint->setItemText(46, QApplication::translate("MainWindow", "University Theatre", nullptr));
        startPoint->setItemText(47, QApplication::translate("MainWindow", "Washburn Hall", nullptr));
        startPoint->setItemText(48, QApplication::translate("MainWindow", "Washington Square Hall", nullptr));
        startPoint->setItemText(49, QApplication::translate("MainWindow", "West Parking Garage", nullptr));
        startPoint->setItemText(50, QApplication::translate("MainWindow", "Yoshihiro Uchida Hall", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Starting Point", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Go!", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Destination", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "If you take this path:", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "Your trip will take:", nullptr));
        pathTime->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "minutes", nullptr));
        goAgain->setText(QApplication::translate("MainWindow", "Go Again", nullptr));
        v1->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menuDebug->setTitle(QApplication::translate("MainWindow", "Debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
