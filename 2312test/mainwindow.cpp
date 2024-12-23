#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"

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
    MainWindow2 *f2 = new MainWindow2;
    f2->show();
}

void MainWindow::setLineEditValue(const QString& text)
{
    ui->lineEdit->setText(text);
}


