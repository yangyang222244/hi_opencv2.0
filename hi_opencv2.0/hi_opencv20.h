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

	//形态变换
	void on_erode();
	void on_dilate();
	void on_opening();
	void on_closing();
	void on_MG();
	void on_blackhat();
	void on_tophat();

	//图像变形
	void on_scale();
	void on_rotate();
	void on_L2R();
	void on_T2D();
	void on_pyr();

	//边缘检测
	void on_Sobel();
	void on_Laplace();
	void on_Canny();
	void on_HoughLines();
	void on_HoughCircles();
	void on_findContours();




private:
	Ui::hi_opencv20Class ui;
	Mat image,image1, image2;
	QLabel *label, *label_2;
};
