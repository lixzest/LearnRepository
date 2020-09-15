#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "TestLoaderLib.h"
#include "testloaderlib_global.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void getInfo(QString info);
private:
    Ui::MainWindow *ui;
    TestLoaderLib *mTest;
};

#endif // MAINWINDOW_H
