#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "当前Qt可用数据库驱动：" << QSqlDatabase::drivers();
    MainWindow w;
    w.show();
    return a.exec();
}
