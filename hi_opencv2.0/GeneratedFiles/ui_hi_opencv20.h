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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QAction *action1;
    QAction *action1_2;
    QAction *action1_3;
    QAction *action1_4;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QToolBox *toolBox;
    QWidget *page1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_3;
    QPushButton *btnErode;
    QPushButton *btnDilate;
    QPushButton *btnOpening;
    QPushButton *btnClosing;
    QPushButton *btnMG;
    QPushButton *btnTopHat;
    QPushButton *btnBlackHat;
    QWidget *page_2;
    QPushButton *pushButton_zhi_1;
    QPushButton *pushButton_zhi_2;
    QPushButton *pushButton_zhi_3;
    QWidget *page;
    QPushButton *btnScale;
    QPushButton *btnRotate;
    QPushButton *btnL2R;
    QPushButton *btnT2D;
    QPushButton *btnpyr;
    QWidget *page_4;
    QPushButton *btnScale_2;
    QPushButton *btnScale_3;
    QPushButton *btnScale_4;
    QPushButton *btnScale_5;
    QPushButton *btnScale_7;
    QPushButton *btnScale_8;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *page_7;
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
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_1;
    QSlider *slider_1;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *spinBox_2;
    QSlider *slider_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *hi_opencv20Class)
    {
        if (hi_opencv20Class->objectName().isEmpty())
            hi_opencv20Class->setObjectName(QStringLiteral("hi_opencv20Class"));
        hi_opencv20Class->resize(1072, 621);
        actionopen = new QAction(hi_opencv20Class);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionsave = new QAction(hi_opencv20Class);
        actionsave->setObjectName(QStringLiteral("actionsave"));
        actionopen_2 = new QAction(hi_opencv20Class);
        actionopen_2->setObjectName(QStringLiteral("actionopen_2"));
        actionsave_2 = new QAction(hi_opencv20Class);
        actionsave_2->setObjectName(QStringLiteral("actionsave_2"));
        action1 = new QAction(hi_opencv20Class);
        action1->setObjectName(QStringLiteral("action1"));
        action1_2 = new QAction(hi_opencv20Class);
        action1_2->setObjectName(QStringLiteral("action1_2"));
        action1_3 = new QAction(hi_opencv20Class);
        action1_3->setObjectName(QStringLiteral("action1_3"));
        action1_4 = new QAction(hi_opencv20Class);
        action1_4->setObjectName(QStringLiteral("action1_4"));
        centralWidget = new QWidget(hi_opencv20Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(180, 450));
        toolBox->setMaximumSize(QSize(180, 450));
        toolBox->setFrameShape(QFrame::NoFrame);
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        page1->setGeometry(QRect(0, 0, 180, 210));
        layoutWidget = new QWidget(page1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 101, 171));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);

        toolBox->addItem(page1, QStringLiteral("Smooth"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 180, 210));
        btnErode = new QPushButton(page_3);
        btnErode->setObjectName(QStringLiteral("btnErode"));
        btnErode->setGeometry(QRect(0, 0, 181, 23));
        btnDilate = new QPushButton(page_3);
        btnDilate->setObjectName(QStringLiteral("btnDilate"));
        btnDilate->setGeometry(QRect(0, 30, 181, 23));
        btnOpening = new QPushButton(page_3);
        btnOpening->setObjectName(QStringLiteral("btnOpening"));
        btnOpening->setGeometry(QRect(0, 60, 181, 23));
        btnClosing = new QPushButton(page_3);
        btnClosing->setObjectName(QStringLiteral("btnClosing"));
        btnClosing->setGeometry(QRect(0, 90, 181, 23));
        btnMG = new QPushButton(page_3);
        btnMG->setObjectName(QStringLiteral("btnMG"));
        btnMG->setGeometry(QRect(0, 120, 181, 23));
        btnTopHat = new QPushButton(page_3);
        btnTopHat->setObjectName(QStringLiteral("btnTopHat"));
        btnTopHat->setGeometry(QRect(0, 150, 181, 23));
        btnBlackHat = new QPushButton(page_3);
        btnBlackHat->setObjectName(QStringLiteral("btnBlackHat"));
        btnBlackHat->setGeometry(QRect(0, 180, 181, 23));
        toolBox->addItem(page_3, QString::fromUtf8("\345\275\242\346\200\201\345\217\230\346\215\242"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 180, 210));
        pushButton_zhi_1 = new QPushButton(page_2);
        pushButton_zhi_1->setObjectName(QStringLiteral("pushButton_zhi_1"));
        pushButton_zhi_1->setGeometry(QRect(0, 20, 181, 28));
        pushButton_zhi_2 = new QPushButton(page_2);
        pushButton_zhi_2->setObjectName(QStringLiteral("pushButton_zhi_2"));
        pushButton_zhi_2->setGeometry(QRect(0, 60, 181, 28));
        pushButton_zhi_3 = new QPushButton(page_2);
        pushButton_zhi_3->setObjectName(QStringLiteral("pushButton_zhi_3"));
        pushButton_zhi_3->setGeometry(QRect(0, 100, 181, 28));
        toolBox->addItem(page_2, QString::fromUtf8("\347\233\264\346\226\271\345\233\276"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 180, 210));
        btnScale = new QPushButton(page);
        btnScale->setObjectName(QStringLiteral("btnScale"));
        btnScale->setGeometry(QRect(0, 0, 181, 23));
        btnRotate = new QPushButton(page);
        btnRotate->setObjectName(QStringLiteral("btnRotate"));
        btnRotate->setGeometry(QRect(0, 30, 181, 23));
        btnL2R = new QPushButton(page);
        btnL2R->setObjectName(QStringLiteral("btnL2R"));
        btnL2R->setGeometry(QRect(0, 60, 181, 23));
        btnT2D = new QPushButton(page);
        btnT2D->setObjectName(QStringLiteral("btnT2D"));
        btnT2D->setGeometry(QRect(0, 90, 181, 23));
        btnpyr = new QPushButton(page);
        btnpyr->setObjectName(QStringLiteral("btnpyr"));
        btnpyr->setGeometry(QRect(0, 120, 181, 23));
        toolBox->addItem(page, QString::fromUtf8("\345\233\276\345\203\217\345\217\230\345\275\242"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 180, 210));
        btnScale_2 = new QPushButton(page_4);
        btnScale_2->setObjectName(QStringLiteral("btnScale_2"));
        btnScale_2->setGeometry(QRect(0, 0, 181, 23));
        btnScale_3 = new QPushButton(page_4);
        btnScale_3->setObjectName(QStringLiteral("btnScale_3"));
        btnScale_3->setGeometry(QRect(0, 30, 181, 23));
        btnScale_4 = new QPushButton(page_4);
        btnScale_4->setObjectName(QStringLiteral("btnScale_4"));
        btnScale_4->setGeometry(QRect(0, 60, 181, 23));
        btnScale_5 = new QPushButton(page_4);
        btnScale_5->setObjectName(QStringLiteral("btnScale_5"));
        btnScale_5->setGeometry(QRect(0, 90, 181, 23));
        btnScale_7 = new QPushButton(page_4);
        btnScale_7->setObjectName(QStringLiteral("btnScale_7"));
        btnScale_7->setGeometry(QRect(0, 120, 181, 23));
        btnScale_8 = new QPushButton(page_4);
        btnScale_8->setObjectName(QStringLiteral("btnScale_8"));
        btnScale_8->setGeometry(QRect(0, 150, 181, 23));
        toolBox->addItem(page_4, QString::fromUtf8("\350\276\271\347\274\230\346\243\200\346\265\213"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 180, 210));
        toolBox->addItem(page_5, QStringLiteral("Target Location"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 180, 210));
        toolBox->addItem(page_6, QStringLiteral("Template Matching"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 180, 210));
        toolBox->addItem(page_7, QStringLiteral("others"));

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
        input->setMouseTracking(true);
        input->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        input->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        input->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 406, 382));
        input->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(input);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        output = new QScrollArea(horizontalWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setMouseTracking(true);
        output->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 405, 382));
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
        horizontalWidget1 = new QWidget(verticalWidget);
        horizontalWidget1->setObjectName(QStringLiteral("horizontalWidget1"));
        horizontalWidget1->setMaximumSize(QSize(600, 16777215));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        spinBox_1 = new QSpinBox(horizontalWidget1);
        spinBox_1->setObjectName(QStringLiteral("spinBox_1"));
        spinBox_1->setMinimumSize(QSize(60, 20));
        spinBox_1->setMaximumSize(QSize(60, 20));

        horizontalLayout_4->addWidget(spinBox_1);

        slider_1 = new QSlider(horizontalWidget1);
        slider_1->setObjectName(QStringLiteral("slider_1"));
        slider_1->setMinimumSize(QSize(300, 0));
        slider_1->setMaximumSize(QSize(300, 16777215));
        slider_1->setMinimum(1);
        slider_1->setValue(1);
        slider_1->setOrientation(Qt::Horizontal);
        slider_1->setTickPosition(QSlider::NoTicks);

        horizontalLayout_4->addWidget(slider_1);


        verticalLayout->addWidget(horizontalWidget1, 0, Qt::AlignHCenter);

        horizontalWidget_2 = new QWidget(verticalWidget);
        horizontalWidget_2->setObjectName(QStringLiteral("horizontalWidget_2"));
        horizontalWidget_2->setMaximumSize(QSize(600, 16777215));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        spinBox_2 = new QSpinBox(horizontalWidget_2);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(60, 20));
        spinBox_2->setMaximumSize(QSize(60, 20));

        horizontalLayout_5->addWidget(spinBox_2);

        slider_2 = new QSlider(horizontalWidget_2);
        slider_2->setObjectName(QStringLiteral("slider_2"));
        slider_2->setMinimumSize(QSize(300, 0));
        slider_2->setMaximumSize(QSize(300, 16777215));
        slider_2->setMinimum(1);
        slider_2->setValue(1);
        slider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(slider_2);


        verticalLayout->addWidget(horizontalWidget_2, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(verticalWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);

        hi_opencv20Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(hi_opencv20Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        hi_opencv20Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(hi_opencv20Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        hi_opencv20Class->setStatusBar(statusBar);

        mainToolBar->addAction(action1_4);
        mainToolBar->addAction(actionsave);

        retranslateUi(hi_opencv20Class);
        QObject::connect(pushButton, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_blur()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_gaussian()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_median()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_Bilateral()));
        QObject::connect(action1_4, SIGNAL(triggered()), hi_opencv20Class, SLOT(open()));
        QObject::connect(btnErode, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_erode()));
        QObject::connect(btnDilate, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_dilate()));
        QObject::connect(btnOpening, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_opening()));
        QObject::connect(btnClosing, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_closing()));
        QObject::connect(btnMG, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_MG()));
        QObject::connect(btnTopHat, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_tophat()));
        QObject::connect(btnBlackHat, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_blackhat()));
        QObject::connect(btnScale, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_scale()));
        QObject::connect(btnRotate, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_rotate()));
        QObject::connect(btnL2R, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_L2R()));
        QObject::connect(btnT2D, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_T2D()));
        QObject::connect(btnpyr, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_pyr()));
        QObject::connect(pushButton_zhi_1, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_zhione_show()));
        QObject::connect(pushButton_zhi_2, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_zhitwo_show()));
        QObject::connect(pushButton_zhi_3, SIGNAL(clicked()), hi_opencv20Class, SLOT(on_zhithree_show()));
        QObject::connect(slider_1, SIGNAL(actionTriggered(int)), hi_opencv20Class, SLOT(on_slider_1()));
        QObject::connect(slider_2, SIGNAL(actionTriggered(int)), hi_opencv20Class, SLOT(on_slider_2()));
        QObject::connect(actionsave, SIGNAL(triggered()), hi_opencv20Class, SLOT(save()));

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(hi_opencv20Class);
    } // setupUi

    void retranslateUi(QMainWindow *hi_opencv20Class)
    {
        hi_opencv20Class->setWindowTitle(QApplication::translate("hi_opencv20Class", "hi_opencv20", Q_NULLPTR));
        actionopen->setText(QApplication::translate("hi_opencv20Class", "open", Q_NULLPTR));
        actionsave->setText(QApplication::translate("hi_opencv20Class", "\344\277\235\345\255\230", Q_NULLPTR));
        actionopen_2->setText(QApplication::translate("hi_opencv20Class", "open", Q_NULLPTR));
        actionsave_2->setText(QApplication::translate("hi_opencv20Class", "save", Q_NULLPTR));
        action1->setText(QApplication::translate("hi_opencv20Class", "1", Q_NULLPTR));
        action1_2->setText(QApplication::translate("hi_opencv20Class", "1", Q_NULLPTR));
        action1_3->setText(QApplication::translate("hi_opencv20Class", "1", Q_NULLPTR));
        action1_4->setText(QApplication::translate("hi_opencv20Class", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        page1->setToolTip(QApplication::translate("hi_opencv20Class", "\346\261\237\345\215\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("hi_opencv20Class", "Blur", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("hi_opencv20Class", "Gaussian", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("hi_opencv20Class", "Median", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("hi_opencv20Class", "Bilateral", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page1), QApplication::translate("hi_opencv20Class", "Smooth", Q_NULLPTR));
        btnErode->setText(QApplication::translate("hi_opencv20Class", "\350\205\220\350\232\200\345\217\230\346\215\242", Q_NULLPTR));
        btnDilate->setText(QApplication::translate("hi_opencv20Class", "\350\206\250\350\203\200\345\217\230\346\215\242", Q_NULLPTR));
        btnOpening->setText(QApplication::translate("hi_opencv20Class", "\345\274\200\350\277\220\347\256\227", Q_NULLPTR));
        btnClosing->setText(QApplication::translate("hi_opencv20Class", "\351\227\255\350\277\220\347\256\227", Q_NULLPTR));
        btnMG->setText(QApplication::translate("hi_opencv20Class", "\345\275\242\346\200\201\346\242\257\345\272\246", Q_NULLPTR));
        btnTopHat->setText(QApplication::translate("hi_opencv20Class", "\351\241\266\345\270\275", Q_NULLPTR));
        btnBlackHat->setText(QApplication::translate("hi_opencv20Class", "\351\273\221\345\270\275", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("hi_opencv20Class", "\345\275\242\346\200\201\345\217\230\346\215\242", Q_NULLPTR));
        pushButton_zhi_1->setText(QApplication::translate("hi_opencv20Class", "\350\256\241\347\256\227\345\233\276\345\203\217\347\233\264\346\226\271\345\233\276", Q_NULLPTR));
        pushButton_zhi_2->setText(QApplication::translate("hi_opencv20Class", "\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241\345\214\226", Q_NULLPTR));
        pushButton_zhi_3->setText(QApplication::translate("hi_opencv20Class", "\345\217\215\345\220\221\346\212\225\345\275\261", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("hi_opencv20Class", "\347\233\264\346\226\271\345\233\276", Q_NULLPTR));
        btnScale->setText(QApplication::translate("hi_opencv20Class", "\346\224\276\347\274\251", Q_NULLPTR));
        btnRotate->setText(QApplication::translate("hi_opencv20Class", "\346\227\213\350\275\254", Q_NULLPTR));
        btnL2R->setText(QApplication::translate("hi_opencv20Class", "\346\260\264\345\271\263\347\275\256\346\215\242", Q_NULLPTR));
        btnT2D->setText(QApplication::translate("hi_opencv20Class", "\345\236\202\347\233\264\347\275\256\346\215\242", Q_NULLPTR));
        btnpyr->setText(QApplication::translate("hi_opencv20Class", "\345\233\276\345\203\217\351\207\221\345\255\227\345\241\224", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("hi_opencv20Class", "\345\233\276\345\203\217\345\217\230\345\275\242", Q_NULLPTR));
        btnScale_2->setText(QApplication::translate("hi_opencv20Class", "Sobel\345\257\274\346\225\260", Q_NULLPTR));
        btnScale_3->setText(QApplication::translate("hi_opencv20Class", "Laplace\347\256\227\345\255\220", Q_NULLPTR));
        btnScale_4->setText(QApplication::translate("hi_opencv20Class", "Canny\350\276\271\347\274\230\346\243\200\346\265\213", Q_NULLPTR));
        btnScale_5->setText(QApplication::translate("hi_opencv20Class", "\351\234\215\345\244\253\347\272\277\345\217\230\346\215\242", Q_NULLPTR));
        btnScale_7->setText(QApplication::translate("hi_opencv20Class", "\351\234\215\345\244\253\345\234\206\345\217\230\346\215\242", Q_NULLPTR));
        btnScale_8->setText(QApplication::translate("hi_opencv20Class", "\345\233\276\345\203\217\350\275\256\345\273\223", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("hi_opencv20Class", "\350\276\271\347\274\230\346\243\200\346\265\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("hi_opencv20Class", "Target Location", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("hi_opencv20Class", "Template Matching", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("hi_opencv20Class", "others", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hi_opencv20Class: public Ui_hi_opencv20Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HI_OPENCV20_H
