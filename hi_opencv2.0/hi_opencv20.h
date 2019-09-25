#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hi_opencv20.h"
#include <QtWidgets/QMainWindow>
#include <qlineedit.h>
#include<QGraphicsScene>  
#include<QGraphicsView>                 //graphicsview类
#include<opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>  //opencv申明
#include <qfiledialog.h>                //getopenfilename 类申明
#include <qlabel.h>  //label类
#include <opencv2/highgui/highgui_c.h>
#include<vector>
#include <iostream>

using namespace cv;
using namespace std;


class hi_opencv20 : public QMainWindow
{
	Q_OBJECT

public:
	hi_opencv20(QWidget *parent = Q_NULLPTR);
	double t, h1, w1;
	int i = -1;
	//QLabel label;

	int image_fit(Mat a, double m, double n);

private slots:
	void open();
	void on_blur();
	void on_gaussian();
	void on_median();
	void on_Bilateral();

	void on_slider_1();
	void on_slider_2();
private:
	Ui::hi_opencv20Class ui;
	Mat image,image1, iamge2;
	QLabel *label, *label_2;
};
