#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


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

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->lineEdit->text();
    if (ui->checkBox->isChecked()) {
        if (text.size() == 0) {
            qDebug() << "Пустая строка";
            return;
        }
    }
    qDebug() << text;
}


void MainWindow::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{

}
