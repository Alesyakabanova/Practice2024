#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <stack.h>
#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::MainWindow *ui;
    Stack stack;
    void paintEvent(QPaintEvent*);

};
#endif // MAINWINDOW_H
