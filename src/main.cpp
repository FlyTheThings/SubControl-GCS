#include "inc/mainwindow.h"
#include <QApplication>

#include <gst/gst.h>

int main(int argc, char *argv[])
{
    gst_init (&argc, &argv);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setChartsSize();
    w.resizeWindowsManual();

    return a.exec();
}
