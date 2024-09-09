#include "nwid.h"
#include "ui_nwid.h"
#include "global.h"

nwid::nwid(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::nwid)
{
    ui->setupUi(this);
    ui->NM_label_26->hide();
}

void nwid::setDetails(const QString &name, const QString &id, const bool &messageRead){
    ui->name_label_25->setText(name);
    ui->id_label_2->setText(id);
    if(messageRead == false){
        ui->backLabel->setStyleSheet("background-color: rgb(255, 255, 255);");
        ui->NM_label_26->show();
    }

}

void nwid::setPic(QPixmap &pic){
    ui->img_label_24->setPixmap(pic);
}


void nwid::mouseDoubleClickEvent(QMouseEvent *event){
    chatPage = new chatpage;
    chatPage->show();

    ChatID = ui->id_label_2->text();
    ChatName = ui->name_label_25->text();
}






nwid::~nwid()
{
    delete ui;
}
