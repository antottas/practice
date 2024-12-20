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

void MainWindow::on_pushButton_clicked()
{
    QString todoList = ui->lineEdit->text();
    if (!todoList.isEmpty()) {
    ui->listWidget->addItem(todoList);
    }
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_2_clicked()
{
    auto clear = ui->listWidget->currentItem();
    if (clear) {
        ui->listWidget->takeItem(ui->listWidget->row(clear));
    }
}
