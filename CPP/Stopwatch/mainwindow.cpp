#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->setReadOnly(true);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::millicounter);

}

MainWindow::~MainWindow()
{
    delete ui;
}

int icount = 1;
static int millisecond = 0;
static int second = 0;
static int minute = 0;
static int hour = 0;
bool startIsClicked = false;



void MainWindow::on_pushButton_5_clicked() //lap clear button
{
    ui->plainTextEdit->clear();
    icount = 1;
}



void MainWindow::on_pushButton_3_clicked() //reset button
{
    startIsClicked = false;
    ui->label->setText("00");
    ui->label_2->setText("00");
    ui->label_3->setText("00");
    ui->label_7->setText("00");

    millisecond = 0;
    second = 0;
    minute = 0;
    hour = 0;
}



void MainWindow::on_pushButton_4_clicked() //lap button
{

    QString lap = QString::number(icount) + "." + " " + ui->label->text() + ":" + ui->label_2->text() + ":" + ui->label_3->text() + ":" + ui->label_7->text();

    ui->plainTextEdit->appendPlainText(lap);
    ++icount;
}


int MainWindow::millicounter()
{
    timer->start(1);
    if(millisecond < 1000 && startIsClicked == true){
        QString split = QString::number(millisecond / 100) + QString::number((millisecond / 10) % 10);
            ui->label_7->setText(split);
            if(millisecond == 999){
                millisecond = 0;
            }
            ++millisecond;
    }

    if(millisecond == 999){
        secondCounter();
    }
    if(second == 60){
        second = 0;
        ui->label_3->setText("00");
        minuteCounter();
    }
    if(minute == 60){
        minute = 0;
        ui->label_2->setText("00");
        hourCounter();
    }

    return millisecond;
}

int MainWindow::secondCounter()
{
    ++second;
    if(second < 10){
    ui->label_3->setText("0" + QString::number(second));
    } else {
        ui->label_3->setText(QString::number(second));
    }
    return second;
}

int MainWindow::minuteCounter()
{
    ++minute;
    if(minute < 10){
    ui->label_2->setText("0" + QString::number(minute));
    } else {
        ui->label_3->setText(QString::number(minute));
    }
    return minute;
}

int MainWindow::hourCounter()
{
    ++hour;
    if(hour < 10){
    ui->label->setText("0" + QString::number(hour));
    } else {
        ui->label_3->setText(QString::number(hour));
    }
    return hour;
}


void MainWindow::on_pushButton_clicked() //start button
{
    startIsClicked = true;
    millicounter();
}



void MainWindow::on_pushButton_2_clicked()
{
    startIsClicked = false;
}

