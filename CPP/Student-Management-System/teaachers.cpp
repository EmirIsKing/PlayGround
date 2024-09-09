#include "teaachers.h"
#include "ui_teaachers.h"

teaachers::teaachers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::teaachers)
{
    ui->setupUi(this);
}

teaachers::~teaachers()
{
    delete ui;
}
