/********************************************************************************
** Form generated from reading UI file 'filecntdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECNTDLG_H
#define UI_FILECNTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileCntDlg
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *rfileNameLineEdit;
    QPushButton *cntClosePushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *rfileSizeLineEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *recvSizeLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QProgressBar *recvProgressBar;
    QLabel *rateLabel;

    void setupUi(QDialog *FileCntDlg)
    {
        if (FileCntDlg->objectName().isEmpty())
            FileCntDlg->setObjectName(QString::fromUtf8("FileCntDlg"));
        FileCntDlg->resize(440, 210);
        label = new QLabel(FileCntDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(FileCntDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 391, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        rfileNameLineEdit = new QLineEdit(widget);
        rfileNameLineEdit->setObjectName(QString::fromUtf8("rfileNameLineEdit"));
        rfileNameLineEdit->setEnabled(false);
        rfileNameLineEdit->setFont(font1);
        rfileNameLineEdit->setAlignment(Qt::AlignCenter);
        rfileNameLineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(rfileNameLineEdit);

        cntClosePushButton = new QPushButton(widget);
        cntClosePushButton->setObjectName(QString::fromUtf8("cntClosePushButton"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(10);
        font2.setBold(true);
        cntClosePushButton->setFont(font2);

        horizontalLayout_3->addWidget(cntClosePushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        rfileSizeLineEdit = new QLineEdit(widget);
        rfileSizeLineEdit->setObjectName(QString::fromUtf8("rfileSizeLineEdit"));
        rfileSizeLineEdit->setEnabled(false);
        rfileSizeLineEdit->setFont(font1);
        rfileSizeLineEdit->setAlignment(Qt::AlignCenter);
        rfileSizeLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(rfileSizeLineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        recvSizeLineEdit = new QLineEdit(widget);
        recvSizeLineEdit->setObjectName(QString::fromUtf8("recvSizeLineEdit"));
        recvSizeLineEdit->setEnabled(false);
        recvSizeLineEdit->setFont(font1);
        recvSizeLineEdit->setAlignment(Qt::AlignCenter);
        recvSizeLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(recvSizeLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout->addWidget(label_5);

        recvProgressBar = new QProgressBar(widget);
        recvProgressBar->setObjectName(QString::fromUtf8("recvProgressBar"));
        recvProgressBar->setValue(0);

        horizontalLayout->addWidget(recvProgressBar);

        rateLabel = new QLabel(widget);
        rateLabel->setObjectName(QString::fromUtf8("rateLabel"));
        rateLabel->setFont(font1);
        rateLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(rateLabel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FileCntDlg);

        QMetaObject::connectSlotsByName(FileCntDlg);
    } // setupUi

    void retranslateUi(QDialog *FileCntDlg)
    {
        FileCntDlg->setWindowTitle(QCoreApplication::translate("FileCntDlg", "\346\216\245 \346\224\266 \346\226\207 \344\273\266", nullptr));
        label->setText(QCoreApplication::translate("FileCntDlg", "\346\226\207 \344\273\266 \346\216\245 \346\224\266", nullptr));
        label_2->setText(QCoreApplication::translate("FileCntDlg", "\346\216\245 \346\224\266 \346\226\207 \344\273\266", nullptr));
        cntClosePushButton->setText(QCoreApplication::translate("FileCntDlg", "\345\201\234  \346\255\242", nullptr));
        label_3->setText(QCoreApplication::translate("FileCntDlg", "\345\244\247   \345\260\217", nullptr));
        rfileSizeLineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("FileCntDlg", "\345\267\262 \346\216\245 \346\224\266\357\274\232", nullptr));
        recvSizeLineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("FileCntDlg", "\350\277\233         \345\272\246", nullptr));
        rateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileCntDlg: public Ui_FileCntDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECNTDLG_H
