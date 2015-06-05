#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);

    _server = new TcpServer(3434, this);
    connect(_server, SIGNAL(newConnection(QTcpSocket*)),
            this   , SLOT(connectTest())
            );
    connect(_server, SIGNAL(dataRecieved(QString)),
            this   , SLOT(setDataFromClient(QString))
            );
}

void MainWindow::connectTest()
{
    ui.plainTextEdit->appendPlainText( "New connection" );
}

void MainWindow::setDataFromClient(QString message)
{
    ui.plainTextEdit->appendPlainText(message);
}
