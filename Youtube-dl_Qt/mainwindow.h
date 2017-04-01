#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "linkhandler.h"
#include "options.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_dwnBtn_clicked();

private:
    Ui::MainWindow *ui;
    LinkHandler *linkInputs;
    Options *options;

};

#endif // MAINWINDOW_H
