#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hi_opencv20.h"

class hi_opencv20 : public QMainWindow
{
	Q_OBJECT

public:
	hi_opencv20(QWidget *parent = Q_NULLPTR);

private:
	Ui::hi_opencv20Class ui;
};
