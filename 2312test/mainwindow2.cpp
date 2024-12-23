#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindow.h"

MainWindow2::MainWindow2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_clicked()
{
    MainWindow *f1 = new MainWindow;
    f1->show();

    QString text = ui->lineEdit->text();
    f1->setLineEditValue(text);
}

