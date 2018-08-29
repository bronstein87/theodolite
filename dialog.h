#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>

struct StarThdData
{
    QString cirle;
    QString MeasureObj;
    QString HzAngle;
    QString VAngle;
};


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void getData();

private:
    Ui::Dialog *ui;
signals:
    void starThdDataReady(StarThdData starthd_data);
};

#endif // DIALOG_H
