#include "examplemainwindow.h"
#include "ui_mainwindow.h"


ExampleMainWindow::ExampleMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , webPage(new ExampleWebPage(this))
{
    ui->setupUi(this);
    ui->webView->setPage(webPage);
    connect(webPage, &ExampleWebPage::log, this, [this](const QString &text) {
        ui->plainTextEdit->insertPlainText(text + "\n");
    });
}

ExampleMainWindow::~ExampleMainWindow()
{
    delete ui;
}

void ExampleMainWindow::on_url1_pushButton_clicked()
{
    webPage->setUrl(ui->url1_lineEdit->text());
}


void ExampleMainWindow::on_url2_pushButton_clicked()
{
    webPage->setUrl(ui->url2_lineEdit->text());
}


void ExampleMainWindow::on_clear_pushButton_clicked()
{
    ui->plainTextEdit->clear();
}


void ExampleMainWindow::on_copy_pushButton_clicked()
{
    ui->plainTextEdit->selectAll();
    ui->plainTextEdit->copy();
}

