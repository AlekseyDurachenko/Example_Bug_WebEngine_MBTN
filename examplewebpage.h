#ifndef EXAMPLEWEBPAGE_H
#define EXAMPLEWEBPAGE_H

#include <QWebEnginePage>


class ExampleWebPage : public QWebEnginePage
{
    Q_OBJECT
public:
    ExampleWebPage(QObject *parent = nullptr);
signals:
    void log(QString text);
protected:
    bool acceptNavigationRequest(const QUrl &url, QWebEnginePage::NavigationType type, bool isMainFrame) override;
    QWebEnginePage *createWindow(WebWindowType type) override;
};


#endif // EXAMPLEWEBPAGE_H
