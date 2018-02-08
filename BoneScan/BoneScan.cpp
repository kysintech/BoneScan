#include "stdafx.h"
#include "BoneScan.h"
#include <qdebug.h>

BoneScan::BoneScan(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QMessageBox m_box();
}


void BoneScan::show_messagebox()
{
	QMessageBox box;
	box.show();
	qDebug() << "hello this is a messagebox";
}