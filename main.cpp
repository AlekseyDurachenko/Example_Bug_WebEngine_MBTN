#include "examplemainwindow.h"
#include <QApplication>
#include <QtWebView/QtWebView>

int main(int argc, char *argv[])
{
    QtWebView::initialize();
    QApplication a(argc, argv);        
    ExampleMainWindow w;
    w.show();
    return a.exec();
}
