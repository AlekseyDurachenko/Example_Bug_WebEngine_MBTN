#include "examplewebpage.h"
#include <QMetaEnum>


ExampleWebPage::ExampleWebPage(QObject *parent)
    : QWebEnginePage(parent)
{
}

bool ExampleWebPage::acceptNavigationRequest(const QUrl &url, QWebEnginePage::NavigationType type, bool isMainFrame)
{   
    QString text;
    text = "WebPage::acceptNavigationRequest(type = "
           + QLatin1String(QMetaEnum::fromType<QWebEnginePage::NavigationType>().valueToKey(type))
           + ", url = " + url.toString()
           + ", isMainFrame = " + (isMainFrame ? "true" : "false") + ")";
    emit log(text);

    return true;
}

QWebEnginePage *ExampleWebPage::createWindow(QWebEnginePage::WebWindowType type)
{
    QString text;
    text = "WebPage::createWindow(type = "
           + QLatin1String(QMetaEnum::fromType<QWebEnginePage::WebWindowType>().valueToKey(type))
           + ")";
    emit log(text);

    return nullptr;
}
