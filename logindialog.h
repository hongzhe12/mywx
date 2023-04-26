#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include <QFile>
#include "qdom.h"

namespace Ui
{
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget* parent = nullptr);
    ~LoginDialog();

private slots:
    void on_loginPushButton_clicked(); // 登录按钮的事件方法
    void showWeiChatWindow();          // 根据验证结果决定是否显示聊天窗口
private:
    Ui::LoginDialog* ui;
    MainWindow* weiChatWindow;  // 聊天窗口指针
    QDomDocument mydoc;         // xml中的DOM对象
};

#endif // LOGINDIALOG_H
