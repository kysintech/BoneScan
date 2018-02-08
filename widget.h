#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QDebug>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
  void keyPressEvent(QKeyEvent *);

public slots:
  void print_scancode(QString );

signals:
  void finish_scan(QString );

private:
    Ui::Widget *ui;
    QString str;
};

#endif // WIDGET_H
