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
    connect(this,SIGNAL(finish_scan(QString)),this,SLOT(print_scancode(QString)));
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
        emit finish_scan(str);
       str.clear();
    }


}

void Widget::print_scancode(QString st)
{
    qDebug()<<st;
}
