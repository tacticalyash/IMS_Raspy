#include "homepgg.h"
#include "ui_homepgg.h"

homepgg::homepgg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::homepgg)
{
    ui->setupUi(this);
}

homepgg::~homepgg()
{
    delete ui;
}

