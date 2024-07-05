#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::string MainWindow::GetJSONFromList()
{
    nlohmann::json json;
    json = list;
    return json.dump();
}

void MainWindow::GetListFromJSON(nlohmann::json& json)
{
    json.get_to(list);
}



void MainWindow::paintEvent(QPaintEvent *)
{
    //ui->label->text().clear();
    int h = this->height();
    int w = this->width();
    int max = 0;
    QPainter painter(this);
    painter.begin(this);
    std::string str;
    for (int i=0; i<list.size(); i++) {
        if(list[i] > max) {
            max = list[i];
        }
    }
    for(int i=0; i<list.size(); i++)
    {
        painter.drawRect(10,90+(h/10)*i,(w/((max+1)*10))*list[i]*10, h/10);
        str+=std::to_string(list[i]) + " ";
    }
    QString s;
    s = s.fromStdString(str);
    ui->label->setText(s);

    painter.end();
}


void MainWindow::on_openButton_clicked()
{
    QString name = QFileDialog::getOpenFileName(this,"Open");
    std::ifstream stream(name.toStdString());
    nlohmann::json json = nlohmann::json::parse(stream);
    GetListFromJSON(json);

    repaint();

}


void MainWindow::on_saveButton_clicked()
{
    QString name = QFileDialog::getSaveFileName(this,"Save");
    std::ofstream stream(name.toStdString());
    stream << GetJSONFromList();
}


void MainWindow::on_addButton_clicked()
{
    int n = ui->elementEdit->text().toInt();
    list.push_back(n);

    repaint();
}



