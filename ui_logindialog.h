/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLineEdit *userLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *loginPushButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(283, 402);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 280, 400));
        label->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    font-size: 12px;\n"
"    padding: 5px;\n"
"    margin: 5px;\n"
"    alignment: left center;\n"
"    border-style: sunken;\n"
"}\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/login.jpg")));
        userLineEdit = new QLineEdit(LoginDialog);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setGeometry(QRect(100, 220, 113, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(10);
        userLineEdit->setFont(font);
        userLineEdit->setAlignment(Qt::AlignCenter);
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(100, 240, 113, 20));
        pwdLineEdit->setFont(font);
        pwdLineEdit->setAlignment(Qt::AlignCenter);
        loginPushButton = new QPushButton(LoginDialog);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(50, 260, 212, 43));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        font1.setBold(false);
        loginPushButton->setFont(font1);
        loginPushButton->setFlat(true);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\345\276\256\344\277\241\345\256\242\346\210\267\347\253\257", nullptr));
        label->setText(QString());
        loginPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
