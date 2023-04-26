/********************************************************************************
** Form generated from reading UI file 'filesrvdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESRVDLG_H
#define UI_FILESRVDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FileSrvDlg
{
public:
    QLabel *label;
    QLineEdit *sfileNameLineEdit;
    QPushButton *openFilePushButton;
    QPushButton *pushButton;
    QLineEdit *sfileSizeLineEdit;
    QLineEdit *sendSizeLineEdit;
    QProgressBar *sendProgressBar;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *srvClosePushButton;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *FileSrvDlg)
    {
        if (FileSrvDlg->objectName().isEmpty())
            FileSrvDlg->setObjectName(QString::fromUtf8("FileSrvDlg"));
        FileSrvDlg->resize(412, 221);
        label = new QLabel(FileSrvDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 15, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        sfileNameLineEdit = new QLineEdit(FileSrvDlg);
        sfileNameLineEdit->setObjectName(QString::fromUtf8("sfileNameLineEdit"));
        sfileNameLineEdit->setEnabled(false);
        sfileNameLineEdit->setGeometry(QRect(100, 60, 201, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        sfileNameLineEdit->setFont(font1);
        sfileNameLineEdit->setAlignment(Qt::AlignCenter);
        sfileNameLineEdit->setReadOnly(true);
        openFilePushButton = new QPushButton(FileSrvDlg);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));
        openFilePushButton->setGeometry(QRect(300, 60, 31, 31));
        openFilePushButton->setFont(font1);
        pushButton = new QPushButton(FileSrvDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 60, 51, 31));
        QFont font2;
        font2.setPointSize(10);
        pushButton->setFont(font2);
        sfileSizeLineEdit = new QLineEdit(FileSrvDlg);
        sfileSizeLineEdit->setObjectName(QString::fromUtf8("sfileSizeLineEdit"));
        sfileSizeLineEdit->setGeometry(QRect(100, 110, 101, 31));
        sfileSizeLineEdit->setFont(font2);
        sfileSizeLineEdit->setAlignment(Qt::AlignCenter);
        sfileSizeLineEdit->setReadOnly(true);
        sendSizeLineEdit = new QLineEdit(FileSrvDlg);
        sendSizeLineEdit->setObjectName(QString::fromUtf8("sendSizeLineEdit"));
        sendSizeLineEdit->setEnabled(false);
        sendSizeLineEdit->setGeometry(QRect(260, 110, 71, 31));
        sendSizeLineEdit->setFont(font2);
        sendSizeLineEdit->setAlignment(Qt::AlignCenter);
        sendSizeLineEdit->setReadOnly(true);
        sendProgressBar = new QProgressBar(FileSrvDlg);
        sendProgressBar->setObjectName(QString::fromUtf8("sendProgressBar"));
        sendProgressBar->setGeometry(QRect(100, 170, 231, 31));
        sendProgressBar->setValue(0);
        label_2 = new QLabel(FileSrvDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 40, 12));
        label_2->setFont(font2);
        label_3 = new QLabel(FileSrvDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 120, 40, 12));
        label_3->setFont(font2);
        srvClosePushButton = new QPushButton(FileSrvDlg);
        srvClosePushButton->setObjectName(QString::fromUtf8("srvClosePushButton"));
        srvClosePushButton->setGeometry(QRect(340, 170, 51, 31));
        srvClosePushButton->setFont(font2);
        label_4 = new QLabel(FileSrvDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 180, 40, 12));
        label_4->setFont(font2);
        label_5 = new QLabel(FileSrvDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 70, 41, 16));
        label_5->setFont(font2);

        retranslateUi(FileSrvDlg);

        QMetaObject::connectSlotsByName(FileSrvDlg);
    } // setupUi

    void retranslateUi(QDialog *FileSrvDlg)
    {
        FileSrvDlg->setWindowTitle(QCoreApplication::translate("FileSrvDlg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FileSrvDlg", "\346\226\207\344\273\266\345\217\221\351\200\201", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("FileSrvDlg", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("FileSrvDlg", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("FileSrvDlg", "\345\244\247 \345\260\217\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("FileSrvDlg", "\345\267\262 \345\217\221 \351\200\201\357\274\232", nullptr));
        srvClosePushButton->setText(QCoreApplication::translate("FileSrvDlg", "\345\201\234\346\255\242", nullptr));
        label_4->setText(QCoreApplication::translate("FileSrvDlg", "\350\277\233 \345\272\246\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("FileSrvDlg", "\345\217\221\351\200\201\346\226\207\344\273\266\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileSrvDlg: public Ui_FileSrvDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESRVDLG_H
