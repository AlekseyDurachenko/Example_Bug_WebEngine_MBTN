#ifndef EXAMPLEMAINWINDOW_H
#define EXAMPLEMAINWINDOW_H


#include "examplewebpage.h"
#include <QMainWindow>


namespace Ui {
class MainWindow;
}


class ExampleMainWindow final : public QMainWindow
{
    Q_OBJECT
public:
    ExampleMainWindow(QWidget *parent = nullptr);
    ~ExampleMainWindow() override final;
private slots:
    void on_url1_pushButton_clicked();
    void on_url2_pushButton_clicked();
    void on_clear_pushButton_clicked();
    void on_copy_pushButton_clicked();
private:
    Ui::MainWindow *ui;
    ExampleWebPage *webPage;
};


#endif // EXAMPLEMAINWINDOW_H
