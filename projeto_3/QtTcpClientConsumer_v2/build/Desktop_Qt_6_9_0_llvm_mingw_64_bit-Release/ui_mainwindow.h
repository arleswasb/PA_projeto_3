/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConfig;
    QAction *actionClose;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditServidor;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QLabel *label_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUpdate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTime;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSliderTempo;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLineEdit *lineEditConexao;
    Plotter *widgetPlotter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(850, 620);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(200, 200));
        MainWindow->setSizeIncrement(QSize(70, 30));
        MainWindow->setAcceptDrops(false);
        actionConfig = new QAction(MainWindow);
        actionConfig->setObjectName("actionConfig");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        actionConfig->setIcon(icon);
        actionConfig->setMenuRole(QAction::MenuRole::NoRole);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        actionClose->setIcon(icon1);
        actionClose->setMenuRole(QAction::MenuRole::NoRole);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        centralWidget->setBaseSize(QSize(70, 30));
        centralWidget->setAcceptDrops(false);
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditServidor = new QLineEdit(centralWidget);
        lineEditServidor->setObjectName("lineEditServidor");

        gridLayout->addWidget(lineEditServidor, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        horizontalLayout->addWidget(pushButtonDisconnect);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setEnabled(true);
        pushButtonUpdate->setCheckable(false);
        pushButtonUpdate->setAutoExclusive(false);

        horizontalLayout_2->addWidget(pushButtonUpdate);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelTime = new QLabel(centralWidget);
        labelTime->setObjectName("labelTime");

        horizontalLayout_3->addWidget(labelTime);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSliderTempo = new QSlider(centralWidget);
        horizontalSliderTempo->setObjectName("horizontalSliderTempo");
        horizontalSliderTempo->setEnabled(false);
        horizontalSliderTempo->setMaximum(30);
        horizontalSliderTempo->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderTempo);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setFrameShape(QFrame::Shape::NoFrame);
        lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);

        horizontalLayout_4->addWidget(lcdNumber);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setEnabled(false);

        horizontalLayout_5->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");
        pushButtonStop->setEnabled(false);

        horizontalLayout_5->addWidget(pushButtonStop);


        gridLayout->addLayout(horizontalLayout_5, 8, 0, 1, 1);

        lineEditConexao = new QLineEdit(centralWidget);
        lineEditConexao->setObjectName("lineEditConexao");
        lineEditConexao->setEnabled(false);

        gridLayout->addWidget(lineEditConexao, 9, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName("widgetPlotter");

        horizontalLayout_6->addWidget(widgetPlotter);

        horizontalLayout_6->setStretch(0, 40);
        horizontalLayout_6->setStretch(1, 60);

        horizontalLayout_7->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 850, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setIconSize(QSize(15, 15));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionConfig);
        mainToolBar->addAction(actionClose);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTempo, &QSlider::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConfig->setText(QCoreApplication::translate("MainWindow", "Config", nullptr));
#if QT_CONFIG(shortcut)
        actionConfig->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "IP do Servidor", nullptr));
        lineEditServidor->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "IP das Maquinas Produtoras", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        labelTime->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
