#include "widget.h"
#include "ui_widget.h"
#include <QDialog>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    qDebug()<<"the class init successfully!";
}

Widget::~Widget()
{
    delete ui;
}


void Widget::keyPressEvent(QKeyEvent *k_event)
{
    if(k_event->key()!=16777220)
    {
       str.append(k_event->text());
    }
    else
    {
        ui->label->setText(str);
       str.clear();
    }

}
