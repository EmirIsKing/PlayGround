#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_Hover);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowOpacity(0.8);

    connect(ui->pushButton_1, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::onButtonClicked);

    xColor.setColor(QPalette::WindowText, Qt::yellow);
    oColor.setColor(QPalette::WindowText, Qt::red);

    ui->label->setText("Player X's Turn");
    ui->label->setPalette(xColor);

}

MainWindow::~MainWindow()
{
    delete ui;

}



QString playerTag = "X";
int count = 0;

void MainWindow::doWin(){
    if (playerTag == "X"){
         ui->label->setText("Player O Wins!!!");
    } else {
         ui->label->setText("Player X Wins!!!");
    }
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_1->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
}



void MainWindow::onButtonClicked()
{

    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button)
        return;


    if(playerTag == "X"){
        button->setText(playerTag);
        playerTag = "O";
        ui->label->setPalette(oColor);
        ui->label->setText("Player O's turn");

    } else {
        button->setText(playerTag);
        playerTag = "X";
        ui->label->setPalette(xColor);
        ui->label->setText("Player X's turn");
    }
    ++count;

    button->setEnabled(false);



    if(count == 9){
        ui->label->setText("Draw");
    }


    if(count > 4){

        QString b1 = ui->pushButton_1->text();
        QString b2 = ui->pushButton_2->text();
        QString b3 = ui->pushButton_3->text();
        QString b4 = ui->pushButton_4->text();
        QString b5 = ui->pushButton_5->text();
        QString b6 = ui->pushButton_6->text();
        QString b7 = ui->pushButton_7->text();
        QString b8 = ui->pushButton_8->text();
        QString b9 = ui->pushButton_9->text();




        if(b1 == b5 && b5 == b9 && !b1.isEmpty()){
            doWin();
        } else if(b3 == b5 && b5 == b7 && !b3.isEmpty()){
            doWin();
        } else if (b1 == b2 && b2 == b3 && !b1.isEmpty()){
            doWin();
        } else if (b4 == b5 && b5 == b6 && !b4.isEmpty()){
            doWin();
        } else if (b7 == b8 && b8 == b9 && !b7.isEmpty()){
            doWin();
        } else if (b1 == b4 && b4 == b7 && !b1.isEmpty()){
            doWin();
        } else if (b2 == b5 && b5 == b8 && !b2.isEmpty()){
            doWin();
        } else if (b3 == b6 && b6 == b9 && !b3.isEmpty()){
            doWin();
        }
    }
}



void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_6->setText("");
    ui->pushButton_1->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");

    ui->pushButton_6->setEnabled(true);
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);

    ui->label->setText("Player X's turn");
    count = 0;
    playerTag = "X";

}


