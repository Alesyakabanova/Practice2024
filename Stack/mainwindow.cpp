#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    stack.Push(5);
    stack.Push(4);
    stack.Push(16);
    stack.Push(12);
    stack.Push(9);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent* event)
{
    int h = this->height();
    int w = this->width();
    int max = 0;
    QPainter painter(this);
    painter.begin(this);
    for (int i=0; i<stack.Size(); i++) {
        if(stack[i] > max) {
            max = stack[i];
        }
    }
    for(int i=0; i<stack.Size(); i++)
    {
        QRect *rect=new QRect;
        painter.drawRect(10,40+(h/10)*i,(w/((max+1)*10))*stack[i]*10, h/10);
    }

    painter.end();
}

void MainWindow::on_AddButton_clicked()
{
   int n = ui->lineEdit->text().toInt();
   stack.Push(5);
   repaint();
}


void MainWindow::on_DeleteButton_clicked()
{
    stack.Pop();
    repaint();
}

