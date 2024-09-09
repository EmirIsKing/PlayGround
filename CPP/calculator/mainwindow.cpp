#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDoubleValidator"
#include "QString"
#include "QFile"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setAttribute(Qt::WA_Hover);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowOpacity(0.8);

    ui->setupUi(this);
    QDoubleValidator *validator = new QDoubleValidator(this);
    ui->lineEdit->setValidator(validator);


    ui->add->setFocusPolicy(Qt::NoFocus);
    ui->nine->setFocusPolicy(Qt::NoFocus);
    ui->clear->setFocusPolicy(Qt::NoFocus);
    ui->divide->setFocusPolicy(Qt::NoFocus);
    ui->eight->setFocusPolicy(Qt::NoFocus);
    ui->seven->setFocusPolicy(Qt::NoFocus);
    ui->six->setFocusPolicy(Qt::NoFocus);
    ui->five->setFocusPolicy(Qt::NoFocus);
    ui->four->setFocusPolicy(Qt::NoFocus);
    ui->three->setFocusPolicy(Qt::NoFocus);
    ui->two->setFocusPolicy(Qt::NoFocus);
    ui->one->setFocusPolicy(Qt::NoFocus);
    ui->zero->setFocusPolicy(Qt::NoFocus);
    ui->subt->setFocusPolicy(Qt::NoFocus);
    ui->equalTo->setFocusPolicy(Qt::NoFocus);
    ui->divide->setFocusPolicy(Qt::NoFocus);
    ui->multiply->setFocusPolicy(Qt::NoFocus);


}



void MainWindow::on_seven_clicked()
{
    ui->lineEdit->insert("7");
}

void MainWindow::on_five_clicked()
{
    ui->lineEdit->insert("5");
}


void MainWindow::on_eight_clicked()
{
    ui->lineEdit->insert("8");
}


void MainWindow::on_nine_clicked()
{
    ui->lineEdit->insert("9");
}



void MainWindow::on_four_clicked()
{
    ui->lineEdit->insert("4");
}


void MainWindow::on_six_clicked()
{
    ui->lineEdit->insert("6");
}


void MainWindow::on_one_clicked()
{
    ui->lineEdit->insert("1");
}


void MainWindow::on_two_clicked()
{
    ui->lineEdit->insert("2");
}


void MainWindow::on_three_clicked()
{
    ui->lineEdit->insert("3");
}


void MainWindow::on_zero_clicked()
{
    ui->lineEdit->insert("0");
}




void MainWindow::on_dot_clicked()
{
    ui->lineEdit->insert(".");
}

QString op;
float num1;
float num2;

void MainWindow::on_subt_clicked()
{
    op = "-";
    num1 = ui->lineEdit->text().toFloat();
    ui->lineEdit->clear();
}

void MainWindow::on_divide_clicked()
{
    op = "/";
    num1 = ui->lineEdit->text().toFloat();
    ui->lineEdit->clear();
}


void MainWindow::on_multiply_clicked()
{
    op = "*";
    num1 = ui->lineEdit->text().toFloat();
    ui->lineEdit->clear();
}


void MainWindow::on_add_clicked()
{
    op = "+";
    num1 = ui->lineEdit->text().toFloat();
    ui->lineEdit->clear();
}

void MainWindow::on_mod_clicked()
{
    op = "%";
    num1 = ui->lineEdit->text().toFloat();
    ui->lineEdit->clear();
}


void MainWindow::on_equalTo_clicked()
{
    num2 = ui->lineEdit->text().toFloat();

    float results;

    if (op == "-"){
        results = num1 - num2;
    } else if (op == "+"){
        results = num1 + num2;
    } else if (op == "/"){
        if (num2 != 0){
            results = num1 / num2;
        } else {
            results = 0;
        }

    } else if (op == "*"){
        results = num1 * num2;
    } else if (op == "%"){
        results = static_cast<int>(num1) % static_cast<int>(num2);
    }

    ui->lineEdit->setText(QString::number(results));
}


void MainWindow::on_clear_clicked()
{
    ui->lineEdit->clear();
    num1 = 0;
}




MainWindow::~MainWindow()
{
    delete ui;
}




