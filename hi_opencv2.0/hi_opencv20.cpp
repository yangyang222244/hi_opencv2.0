#include "hi_opencv20.h"

hi_opencv20::hi_opencv20(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.slider_1->hide();
	ui.slider_2->hide();
}

int hi_opencv20::image_fit(Mat a, double m, double n)
{
	double h = a.rows;
	double w = a.cols;
	double p = h / w;
	double q = m / n;
	if (p > q)
	{
		t = m / h;
	}
	else
	{
		t = n / w;
	}
	return t;
}

String qstr2str(QString qstr)
{
	QByteArray cdata = qstr.toLocal8Bit();
	return String(cdata);
}

void hi_opencv20::open()
{
	QString filename;
	filename = QFileDialog::getOpenFileName(this, tr("选择图像"), "", tr("Images(*.png *.bmp *.jpg *.tif *.GIF)"));

	if (filename.isEmpty())
	{
		return;
	}
	else
	{

		//String str  filename.toStdString();//QString字符串中有中文转化成String会有乱码
		String str = qstr2str(filename);//写了一个qstr2str函数用于转化
		image = imread(str);
		cvtColor(image, image, COLOR_BGR2RGB);

		double m = ui.input->height();
		double n = ui.input->width();
		image_fit(image, m, n);
		h1 = image.rows * t;
		w1 = image.cols* t;
		cv::resize(image, image, Size(w1, h1));
	}
	QImage img = QImage((const unsigned char*)(image.data), image.cols, image.rows, image.cols*image.channels(), QImage::Format_RGB888);
	label = new QLabel();
	label->setPixmap(QPixmap::fromImage(img));
	label->resize(QSize(img.width(), img.height()));
	ui.input->setWidget(label);

	ui.output->

	/*label_2->clear();
	ui.output->setWidget(label_2);*/



}


//图形平滑
void hi_opencv20::on_slider_1()
{
	switch (i)
	{
	case 1:
	{
		int j = ui.slider_1->value();
		int k = ui.slider_2->value();
		cv::blur(image, image1, Size(j, k));
		break;
	}
	case 2:
	{
		int j = ui.slider_1->value();
		cv::GaussianBlur(image, image1, Size(2*j+1, 2*j+1), 0, 0);
		break;
	}
	case 3:
	{
		int j = ui.slider_1->value();
		cv::medianBlur(image, image1, 2*j+1);
		break;
	}
	case 4:
	{
		int j = ui.slider_1->value();
		cv::bilateralFilter(image, image1, j, j * 2, j / 2);
		break;
	}
	default:
		break;
	}
		QImage img = QImage((const unsigned char*)(image1.data), image1.cols, image1.rows, image1.cols*image.channels(), QImage::Format_RGB888);
		label_2 = new QLabel();
		label_2->setPixmap(QPixmap::fromImage(img));
		label_2->resize(QSize(img.width(), img.height()));
		ui.output->setWidget(label_2);
}

void hi_opencv20::on_slider_2()
{
	switch (i)
	{
	case 1:
	{
		int j = ui.slider_1->value();
		int k = ui.slider_2->value();
		cv::blur(image, image1, Size(j, k));
		break;
	}
	case 2:
	{
		int j = ui.slider_1->value();
		cv::GaussianBlur(image, image1, Size(2 * j + 1, 2 * j + 1), 0, 0);
		break;
	}
	case 3:
	{
		int j = ui.slider_1->value();
		cv::medianBlur(image, image1, 2 * j + 1);
		break;
	}
	case 4:
	{
		int j = ui.slider_1->value();
		cv::bilateralFilter(image, image1, j, j * 2, j / 2);
		break;
	}
	default:
		break;
	}

	QImage img = QImage((const unsigned char*)(image1.data), image1.cols, image1.rows, image1.cols*image.channels(), QImage::Format_RGB888);
	label_2 = new QLabel();
	label_2->setPixmap(QPixmap::fromImage(img));
	label_2->resize(QSize(img.width(), img.height()));
	ui.output->setWidget(label_2);
}


void hi_opencv20::on_blur()
{
	i = 1;

	ui.slider_1->setValue(1);
	ui.slider_2->setValue(1);
	ui.slider_1->show();
	ui.slider_2->show();
	ui.slider_1->setMaximum(100);
}

void hi_opencv20::on_gaussian()
{
	i = 2;
	
	ui.slider_1->setValue(1);
	ui.slider_1->show();
	ui.slider_2->hide();
	ui.slider_1->setMaximum(50);
}

void hi_opencv20::on_median()
{
	i = 3;

	ui.slider_1->setValue(1);
	ui.slider_1->show();
	ui.slider_2->hide();
	ui.slider_1->setMaximum(50);
	
	
}

void hi_opencv20::on_Bilateral()
{
	i = 4;

	ui.slider_1->setValue(1);
	ui.slider_1->show();
	ui.slider_2->hide();
	ui.slider_1->setMaximum(50);
}
