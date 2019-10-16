#include "hi_opencv20.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	hi_opencv20 w;
	w.show();
	QFile styleFile("./Resources/stylesheet.qss");
	styleFile.open(QIODevice::ReadOnly);
	QString setStyleSheet(styleFile.readAll());;
	a.setStyleSheet(setStyleSheet);
	return a.exec();
}
