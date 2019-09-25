#include "hi_opencv20.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	hi_opencv20 w;
	w.show();
	return a.exec();
}
