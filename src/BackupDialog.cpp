#include "BackupDialog.h"

#include <QtCore>
#include <QtGui>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BackupDialog)
{
    ui->setupUi(this);
   // ui->label->setText("<b >Hello </b> Everyone");
}

BackupDialog::~BackupDialog()
{
    delete ui;
}

void BackupDialog::on_copyButton_clicked()
{
    ui->copyLine->setText("Copy Line");
}

void BackupDialog::on_backupButton_clicked()
{
    ui->backupLine->setText("Backup Line");
}
