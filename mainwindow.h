#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "tcpserver.h"
#include <QTcpServer>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    TcpServer *_server;
public:
    explicit MainWindow(QWidget *parent = 0);

public slots:
    void connectTest();
    void setDataFromClient(QString message);

private:
    Ui::MainWindow ui;


};

#endif // MAINWINDOW_H
