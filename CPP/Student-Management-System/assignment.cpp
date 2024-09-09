#include "assignment.h"
#include "ui_assignment.h"
#include <QPixmap>
#include <QSqlQuery>
#include "global.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>

assignment::assignment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::assignment)
{
    ui->setupUi(this);






}

//QByteArray assignmentFile;

void assignment::loadAssignmentDetails(const QString &startDate, const QString &dueDate, const QString &title, const QByteArray &file){
    ui->startDate_label_6->setText(startDate);
    ui->dueDate_label_7->setText(dueDate);
    ui->s_assTitle->setText(title);
    this->assignmentFile = file;





}

assignment::~assignment()
{
    delete ui;
}

void assignment::on_pushButton_2_clicked()
{
    QString filePath = QFileDialog::getSaveFileName(this, tr("Download Assignment"), "", tr("PDF Files (*.pdf)"));

    if (!filePath.isEmpty()) {
        savePdfFile(assignmentFile, filePath);
    }
}


void assignment::savePdfFile(const QByteArray &data, const QString &filePath)
{
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(data);
        file.close();
        QMessageBox::information(this, tr("Success"), tr("PDF file saved successfully"));
    } else {
        QMessageBox::critical(this, tr("File Error"), tr("Could not save PDF file"));
    }
}
