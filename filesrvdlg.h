#ifndef FILESRVDLG_H
#define FILESRVDLG_H

#include <QDialog>

namespace Ui
{
class FileSrvDlg;
}

class FileSrvDlg : public QDialog
{
    Q_OBJECT

public:
    explicit FileSrvDlg(QWidget* parent = nullptr);
    ~FileSrvDlg();
    void cntRefused();  // 被客户端拒绝后的处理方法

private:
    Ui::FileSrvDlg* ui;

signals:
    void sendFileName(QString name);
};

#endif // FILESRVDLG_H
