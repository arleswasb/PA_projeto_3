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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditServidor;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDesconect;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderMin;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumberMin;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderMax;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLCDNumber *lcdNumberMax;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSlider *horizontalSliderTempo;
    QLCDNumber *lcdNumbertempo;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLineEdit *lineEditConexao;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::WindowModal);
        MainWindow->resize(597, 575);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        actionClose->setIcon(icon);
        actionClose->setMenuRole(QAction::MenuRole::QuitRole);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        lineEditServidor = new QLineEdit(centralWidget);
        lineEditServidor->setObjectName("lineEditServidor");

        verticalLayout_3->addWidget(lineEditServidor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDesconect = new QPushButton(centralWidget);
        pushButtonDesconect->setObjectName("pushButtonDesconect");
        pushButtonDesconect->setEnabled(false);

        horizontalLayout->addWidget(pushButtonDesconect);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 10, -1, -1);
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setEnabled(false);
        horizontalSliderMin->setMaximum(10);
        horizontalSliderMin->setOrientation(Qt::Orientation::Horizontal);
        horizontalSliderMin->setTickPosition(QSlider::TickPosition::NoTicks);

        horizontalLayout_3->addWidget(horizontalSliderMin);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName("lcdNumberMin");
        lcdNumberMin->setFrameShape(QFrame::Shape::Box);
        lcdNumberMin->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumberMin->setLineWidth(2);
        lcdNumberMin->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);

        verticalLayout->addWidget(lcdNumberMin);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 10, -1, -1);
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName("horizontalSliderMax");
        horizontalSliderMax->setEnabled(false);
        horizontalSliderMax->setMinimum(11);
        horizontalSliderMax->setMaximum(20);
        horizontalSliderMax->setOrientation(Qt::Orientation::Horizontal);
        horizontalSliderMax->setTickPosition(QSlider::TickPosition::NoTicks);

        horizontalLayout_2->addWidget(horizontalSliderMax);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setFrameShadow(QFrame::Shadow::Plain);

        verticalLayout_2->addWidget(label_3);

        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName("lcdNumberMax");
        lcdNumberMax->setFrameShape(QFrame::Shape::Box);
        lcdNumberMax->setFrameShadow(QFrame::Shadow::Raised);
        lcdNumberMax->setLineWidth(2);
        lcdNumberMax->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);

        verticalLayout_2->addWidget(lcdNumberMax);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);

        horizontalSliderTempo = new QSlider(centralWidget);
        horizontalSliderTempo->setObjectName("horizontalSliderTempo");
        horizontalSliderTempo->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSliderTempo->sizePolicy().hasHeightForWidth());
        horizontalSliderTempo->setSizePolicy(sizePolicy1);
        horizontalSliderTempo->setMinimum(1);
        horizontalSliderTempo->setMaximum(10);
        horizontalSliderTempo->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderTempo);

        lcdNumbertempo = new QLCDNumber(centralWidget);
        lcdNumbertempo->setObjectName("lcdNumbertempo");
        lcdNumbertempo->setFrameShape(QFrame::Shape::NoFrame);
        lcdNumbertempo->setMidLineWidth(0);
        lcdNumbertempo->setMode(QLCDNumber::Mode::Dec);
        lcdNumbertempo->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumbertempo->setProperty("value", QVariant(1.000000000000000));
        lcdNumbertempo->setProperty("intValue", QVariant(1));

        horizontalLayout_6->addWidget(lcdNumbertempo);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setEnabled(false);

        horizontalLayout_7->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");
        pushButtonStop->setEnabled(false);

        horizontalLayout_7->addWidget(pushButtonStop);


        verticalLayout_3->addLayout(horizontalLayout_7);

        lineEditConexao = new QLineEdit(centralWidget);
        lineEditConexao->setObjectName("lineEditConexao");
        lineEditConexao->setEnabled(true);
        lineEditConexao->setAutoFillBackground(true);
        lineEditConexao->setFrame(false);
        lineEditConexao->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEditConexao->setReadOnly(true);
        lineEditConexao->setClearButtonEnabled(false);

        verticalLayout_3->addWidget(lineEditConexao);


        horizontalLayout_4->addLayout(verticalLayout_3);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName("plainTextEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(50);
        sizePolicy2.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy2);
        plainTextEdit->setFrameShape(QFrame::Shape::Box);
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);

        horizontalLayout_4->addWidget(plainTextEdit);

        horizontalLayout_4->setStretch(0, 60);
        horizontalLayout_4->setStretch(1, 40);

        horizontalLayout_5->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 597, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setIconSize(QSize(15, 15));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionClose);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTempo, &QSlider::valueChanged, lcdNumbertempo, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderMax, &QSlider::valueChanged, lcdNumberMax, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderMin, &QSlider::valueChanged, lcdNumberMin, qOverload<int>(&QLCDNumber::display));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        lineEditServidor->setInputMask(QString());
        lineEditServidor->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDesconect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
