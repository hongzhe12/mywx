#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->userLineEdit->setText("若鸿雪");
    ui->pwdLineEdit->setFocus(); // 输入焦点初始置于用户框
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginPushButton_clicked()
{
    showWeiChatWindow(); // 显示聊天窗口
}

// 实现登录验证功能
void LoginDialog::showWeiChatWindow()
{
    QFile file("C:/Users/hongz/Documents/mywx/userlog.xml"); // 创建xml对象

    file.open(QIODevice::ReadOnly);
    mydoc.setContent(&file); // 将xml对象赋给Qt文档句柄
    file.close();
    QDomElement root = mydoc.documentElement(); // 获取xml文档的根元素
    if(root.hasChildNodes()) // 判断是否有子节点
    {
        QDomNodeList userList = root.childNodes(); // 获取全部子节点
        bool exist = false; // 标识用户是否存在
        for(int i = 0; i < userList.count(); i++)
        {
            QDomNode user = userList.at(i);
            QDomNodeList record = user.childNodes(); // 该用户的所有属性元素
            // 解析用户名和密码
            QString uname = record.at(0).toElement().text();
            QString pword = record.at(1).toElement().text();
            qDebug() << uname <<  i;
            // 输出用户名与xml中相同的情况，需要进一步判断密码
            if(uname == ui->userLineEdit->text())
            {
                exist = true;
                // 密码不正确的情况
                if(!(pword == ui->pwdLineEdit->text()))
                {
                    QMessageBox::warning(0, QObject::tr("提示"), "密码错误！请重新输入。");
                    ui->pwdLineEdit->clear();
                    ui->pwdLineEdit->setFocus();
                    return;
                }
            }
        }
        // 用户不存在的情况
        if(!exist)
        {
            QMessageBox::warning(0, QObject::tr("提示"), "用户不存在！请重新输入。");
            ui->userLineEdit->clear();
            ui->pwdLineEdit->clear();
            ui->userLineEdit->setFocus();
            return;
        }
        // 用户存在并且密码通过
        weiChatWindow = new MainWindow(0);
        weiChatWindow->setWindowTitle(ui->userLineEdit->text());
        weiChatWindow->show();

    }
}
