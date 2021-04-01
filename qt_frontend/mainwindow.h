#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include<istream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnGetAllPersons_clicked();
    void allPersonsSlot(QNetworkReply *reply);
    void onePersonSlot(QNetworkReply *reply);
    void fullnameSlot(QNetworkReply *reply);
    void raiseSlot(QNetworkReply *reply);
    void on_btnGetOnePerson_clicked();

    void on_btnGetFullName_clicked();

    void on_btnRaise_clicked();

    void on_lineEditid_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditid_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *allPersonsManager;
    QNetworkReply *allPersonsReply;
    QNetworkAccessManager *onePersonManager;
    QNetworkReply *onePersonReply;
    QNetworkAccessManager *fullnameManager;
    QNetworkReply *fullnameReply;
    QNetworkAccessManager *raiseManager;
    QNetworkReply *raiseReply;

};
#endif // MAINWINDOW_H
