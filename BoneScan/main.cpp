#include "stdafx.h"
#include "BoneScan.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BoneScan w;
	w.show();
	return a.exec();
}
