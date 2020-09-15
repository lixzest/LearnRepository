#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TestLoaderLib *mTest = new TestLoaderLib;
    qDebug() << mTest->Test("hello");

    connect(mTest,SIGNAL(sendInfo(QString)),this,SLOT(getInfo(QString)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getInfo(QString info)
{
    qDebug() << "11111" << info;
}
