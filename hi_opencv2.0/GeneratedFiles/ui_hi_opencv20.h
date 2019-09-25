/********************************************************************************
** Form generated from reading UI file 'hi_opencv20.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HI_OPENCV20_H
#define UI_HI_OPENCV20_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hi_opencv20Class
{
public:
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionopen_2;
    QAction *actionsave_2;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QToolBox *toolBox;
    QWidget *toolBoxPage1;
    QPushButton *pushButton_2;
    QWidget *toolBoxPage2;
    QPushButton *pushButton;
    QWidget *toolBoxPage3;
    QVBoxLayout *verticalLayout_2;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *input;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *horizontalSpacer;
    QScrollArea *output;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *verticalSpacer;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QSlider *slider_1;
    QSlider *slider_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menufile;
    QMenu *menusave;
    QMenu *menuexit;

    void setupUi(QMainWindow *hi_opencv20Class)
    {
        if (hi_opencv20Class->objectName().isEmpty())
            hi_opencv20Class->setObjectName(QStringLiteral("hi_opencv20Class"));
        hi_opencv20Class->resize(1009, 498);
        actionopen = new QAction(hi_opencv20Class);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionsave = new QAction(hi_opencv20Class);
        actionsave->setObjectName(QStringLiteral("actionsave"));
        actionopen_2 = new QAction(hi_opencv20Class);
        actionopen_2->setObjectName(QStringLiteral("actionopen_2"));
        actionsave_2 = new QAction(hi_opencv20Class);
        actionsave_2->setObjectName(QStringLiteral("actionsave_2"));
        centralWidget = new QWidget(hi_opencv20Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(200, 400));
        toolBox->setMaximumSize(QSize(200, 400));
        toolBox->setFrameShape(QFrame::HLine);
        toolBoxPage1 = new QWidget();
        toolBoxPage1->setObjectName(QStringLiteral("toolBoxPage1"));
        pushButton_2 = new QPushButton(toolBoxPage1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 93, 28));
        pushButton_2->setAutoFillBackground(false);
        toolBox->addItem(toolBoxPage1, QStringLiteral(""));
        toolBoxPage2 = new QWidget();
        toolBoxPage2->setObjectName(QStringLiteral("toolBoxPage2"));
        pushButton = new QPushButton(toolBoxPage2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 93, 28));
        toolBox->addItem(toolBoxPage2, QStringLiteral(""));
        toolBoxPage3 = new QWidget();
        toolBoxPage3->setObjectName(QStringLiteral("toolBoxPage3"));
        toolBox->addItem(toolBoxPage3, QStringLiteral(""));

        horizontalLayout_2->addWidget(toolBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalWidget = new QWidget(centralWidget);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        input = new QScrollArea(horizontalWidget);
        input->setObjectName(QStringLiteral("input"));
        input->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 364, 288));
        input->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(input);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        output = new QScrollArea(horizontalWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 364, 288));
        output->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout->addWidget(output);


        verticalLayout_2->addWidget(horizontalWidget);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        verticalWidget = new QWidget(centralWidget);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        slider_1 = new QSlider(verticalWidget);
        slider_1->setObjectName(QStringLiteral("slider_1"));
        slider_1->setMinimumSize(QSize(300, 0));
        slider_1->setMaximumSize(QSize(300, 16777215));
        slider_1->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_1, 0, Qt::AlignHCenter);

        slider_2 = new QSlider(verticalWidget);
        slider_2->setObjectName(QStringLiteral("slider_2"));
        slider_2->setMinimumSize(QSize(300, 0));
        slider_2->setMaximumSize(QSize(300, 16777215));
        slider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_2, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(verticalWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);

        hi_opencv20Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(hi_opencv20Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        hi_opencv20Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(hi_opencv20Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        hi_opencv20Class->setStatusBar(statusBar);
        menuBar = new QMenuBar(hi_opencv20Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1009, 26));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QStringLiteral("menufile"));
        menufile->setLayoutDirection(Qt::RightToLeft);
        menusave = new QMenu(menuBar);
        menusave->setObjectName(QStringLiteral("menusave"));
        menusave->setLayoutDirection(Qt::RightToLeft);
        menuexit = new QMenu(menuBar);
        menuexit->setObjectName(QStringLiteral("menuexit"));
        menuexit->setLayoutDirection(Qt::RightToLeft);
        hi_opencv20Class->setMenuBar(menuBar);

        menuBar->addAction(menufile->menuAction());
        menuBar->addAction(menusave->menuAction());
        menuBar->addAction(menuexit->menuAction());

        retranslateUi(hi_opencv20Class);

        QMetaObject::connectSlotsByName(hi_opencv20Class);
    } // setupUi

    void retranslateUi(QMainWindow *hi_opencv20Class)
    {
        hi_opencv20Class->setWindowTitle(QApplication::translate("hi_opencv20Class", "hi_opencv20", Q_NULLPTR));
        actionopen->setText(QApplication::translate("hi_opencv20Class", "open", Q_NULLPTR));
        actionsave->setText(QApplication::translate("hi_opencv20Class", "save", Q_NULLPTR));
        actionopen_2->setText(QApplication::translate("hi_opencv20Class", "open", Q_NULLPTR));
        actionsave_2->setText(QApplication::translate("hi_opencv20Class", "save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QApplication::translate("hi_opencv20Class", "<html><head/><body><p>123</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        toolBox->setWhatsThis(QApplication::translate("hi_opencv20Class", "<html><head/><body><p>123</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_2->setText(QApplication::translate("hi_opencv20Class", "PushButton", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(toolBoxPage1), QString());
        pushButton->setText(QApplication::translate("hi_opencv20Class", "PushButton", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(toolBoxPage2), QString());
        toolBox->setItemText(toolBox->indexOf(toolBoxPage3), QString());
        menufile->setTitle(QApplication::translate("hi_opencv20Class", "open", Q_NULLPTR));
        menusave->setTitle(QApplication::translate("hi_opencv20Class", "save", Q_NULLPTR));
        menuexit->setTitle(QApplication::translate("hi_opencv20Class", "exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hi_opencv20Class: public Ui_hi_opencv20Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HI_OPENCV20_H
