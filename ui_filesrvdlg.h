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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileSrvDlg
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *sfileNameLineEdit;
    QPushButton *openFilePushButton;
    QPushButton *sendFilePushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *sfileSizeLineEdit;
    QLabel *label_4;
    QLineEdit *sendSizeLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QProgressBar *sendProgressBar;
    QPushButton *srvClosePushButton;

    void setupUi(QDialog *FileSrvDlg)
    {
        if (FileSrvDlg->objectName().isEmpty())
            FileSrvDlg->setObjectName(QString::fromUtf8("FileSrvDlg"));
        FileSrvDlg->resize(440, 210);
        label = new QLabel(FileSrvDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 0, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(FileSrvDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 391, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        sfileNameLineEdit = new QLineEdit(widget);
        sfileNameLineEdit->setObjectName(QString::fromUtf8("sfileNameLineEdit"));
        sfileNameLineEdit->setEnabled(false);
        sfileNameLineEdit->setFont(font1);
        sfileNameLineEdit->setAlignment(Qt::AlignCenter);
        sfileNameLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(sfileNameLineEdit);

        openFilePushButton = new QPushButton(widget);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));
        openFilePushButton->setFont(font1);

        horizontalLayout_2->addWidget(openFilePushButton);

        sendFilePushButton = new QPushButton(widget);
        sendFilePushButton->setObjectName(QString::fromUtf8("sendFilePushButton"));
        sendFilePushButton->setFont(font1);

        horizontalLayout_2->addWidget(sendFilePushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        sfileSizeLineEdit = new QLineEdit(widget);
        sfileSizeLineEdit->setObjectName(QString::fromUtf8("sfileSizeLineEdit"));
        sfileSizeLineEdit->setEnabled(false);
        sfileSizeLineEdit->setFont(font1);
        sfileSizeLineEdit->setAlignment(Qt::AlignCenter);
        sfileSizeLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(sfileSizeLineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        sendSizeLineEdit = new QLineEdit(widget);
        sendSizeLineEdit->setObjectName(QString::fromUtf8("sendSizeLineEdit"));
        sendSizeLineEdit->setEnabled(false);
        sendSizeLineEdit->setFont(font1);
        sendSizeLineEdit->setAlignment(Qt::AlignCenter);
        sendSizeLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(sendSizeLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        sendProgressBar = new QProgressBar(widget);
        sendProgressBar->setObjectName(QString::fromUtf8("sendProgressBar"));
        sendProgressBar->setValue(0);

        horizontalLayout_3->addWidget(sendProgressBar);

        srvClosePushButton = new QPushButton(widget);
        srvClosePushButton->setObjectName(QString::fromUtf8("srvClosePushButton"));
        srvClosePushButton->setFont(font1);

        horizontalLayout_3->addWidget(srvClosePushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(FileSrvDlg);

        QMetaObject::connectSlotsByName(FileSrvDlg);
    } // setupUi

    void retranslateUi(QDialog *FileSrvDlg)
    {
        FileSrvDlg->setWindowTitle(QCoreApplication::translate("FileSrvDlg", "\345\217\221 \351\200\201 \346\226\207 \344\273\266", nullptr));
        label->setText(QCoreApplication::translate("FileSrvDlg", "\346\226\207 \344\273\266 \345\217\221 \351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("FileSrvDlg", "\345\217\221 \351\200\201 \346\226\207 \344\273\266", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("FileSrvDlg", "...", nullptr));
        sendFilePushButton->setText(QCoreApplication::translate("FileSrvDlg", "\345\217\221\351\200\201", nullptr));
        label_3->setText(QCoreApplication::translate("FileSrvDlg", "\345\244\247   \345\260\217\357\274\232", nullptr));
        sfileSizeLineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("FileSrvDlg", "\345\267\262 \345\217\221 \351\200\201\357\274\232", nullptr));
        sendSizeLineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("FileSrvDlg", "\350\277\233         \345\272\246", nullptr));
        srvClosePushButton->setText(QCoreApplication::translate("FileSrvDlg", "\345\201\234  \346\255\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileSrvDlg: public Ui_FileSrvDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESRVDLG_H
