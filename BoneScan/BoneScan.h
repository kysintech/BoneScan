#pragma once

#include <QtWidgets/QWidget>
#include "ui_BoneScan.h"
#include <qdebug.h>
#include <qmessagebox.h>

class BoneScan : public QWidget
{
	Q_OBJECT

public:
	BoneScan(QWidget *parent = Q_NULLPTR);

protected slots:
	void show_messagebox();

private:
	Ui::BoneScanClass ui;
};
