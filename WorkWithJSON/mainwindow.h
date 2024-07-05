#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "json.hpp"
#include <QMainWindow>
#include <QPainter>
#include <QPaintEvent>
#include <QRect>
#include <QFileDialog>
#include <fstream>

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
    void on_openButton_clicked();

    void on_saveButton_clicked();

    void on_addButton_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<int> list;

    std::string GetJSONFromList();
    void GetListFromJSON(nlohmann::json& json);

    virtual void paintEvent(QPaintEvent*);

};
#endif // MAINWINDOW_H
