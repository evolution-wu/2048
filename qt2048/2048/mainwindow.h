#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PB_clicked();  //槽函数~开始游戏

    void on_PB1_clicked(); //槽函数~退出

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
