#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "caradebalon.h"
#include "caraovalada.h"
#include "cararedonda.h"
#include "avatar.h"

#include "ojosenojados.h"
#include "ojosfelises.h"
#include "ojospro.h"

#include "bocafeliz.h"
#include "bocaserio.h"
#include "bocatriste.h"
#include "blanco.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    pixmap=new QPixmap(400,300);
    pixmap->fill();


    QColor color("black");
    lapiz=new QPen(color);


    ui->l_area->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    q->setPen(*lapiz);
    avatar = new Avatar();
}

MainWindow::~MainWindow()
{
    delete ui;
}


Boca* Boca::crearBoca(int i)
{
    if (i == 1)
        return new bocafeliz(115,170);
    else if (i == 2)
        return new bocaserio(10,100);
    else if (i==3)
        return new bocatriste(115,180);
}

Cara* Cara::crearCara(int i)
{
    if (i == 1)
        return new caradebalon(70,50);
    else if (i == 2)
        return new caraovalada(50,50);
    else if (i==3)
        return new cararedonda(50,50);

}

Ojos* Ojos::crearOjos(int i)
{
    if (i == 1)
        return new ojosenojados(100,120);
    else if (i == 2)
        return new ojosfelises(115,120);
    else if (i==3)
        return new ojospro(115,120);
}





void MainWindow::on_caritas_activated(int index)
{
    switch(ui->caritas->currentIndex())
    {
            case 1: cara=Cara::crearCara(1);
            avatar->crearCara(cara);
            case 2: cara=Cara::crearCara(2);
            avatar->crearCara(cara);
            case 3: cara=Cara::crearCara(3);
            avatar->crearCara(cara);

     }

}

void MainWindow::on_ojitos_activated(int index)
{
    switch(ui->ojitos->currentIndex())
        {
            case 1: ojos=Ojos::crearOjos(1);
            avatar->crearOjos(ojos);
            case 2: ojos=Ojos::crearOjos(2);
            avatar->crearOjos(ojos);
            case 3: ojos=Ojos::crearOjos(3);
            avatar->crearOjos(ojos);

        }

}

void MainWindow::on_boquitas_activated(int index)
{
    switch(ui->boquitas->currentIndex())
        {
            case 1: boca=Boca::crearBoca(1);
            avatar->crearBoca(boca);
            case 2: boca=Boca::crearBoca(2);
            avatar->crearBoca(boca);
            case 3: boca=Boca::crearBoca(3);
            avatar->crearBoca(boca);

        }
}



void MainWindow::on_pushButton_clicked()
{



    switch(ui->caritas->currentIndex())
    {
            case 1: cara=Cara::crearCara(1);
            avatar->crearCara(cara);
            break;
            case 2: cara=Cara::crearCara(2);
            avatar->crearCara(cara);
            break;
            case 3: cara=Cara::crearCara(3);
            avatar->crearCara(cara);
            break;
     }



    switch(ui->ojitos->currentIndex())
        {
            case 1: ojos=Ojos::crearOjos(1);
            avatar->crearOjos(ojos);
            break;
            case 2: ojos=Ojos::crearOjos(2);
            avatar->crearOjos(ojos);
            break;
            case 3: ojos=Ojos::crearOjos(3);
            avatar->crearOjos(ojos);
            break;
        }

    switch(ui->boquitas->currentIndex())
        {
            case 1: boca=Boca::crearBoca(1);
            avatar->crearBoca(boca);
            break;
            case 2: boca=Boca::crearBoca(2);
            avatar->crearBoca(boca);
            break;
            case 3: boca=Boca::crearBoca(3);
            avatar->crearBoca(boca);
            break;
        }




        pixmap->fill(QColor(255,255,255));
        avatar->drawMe(q);

        ui->l_area->setPixmap(*pixmap);


}
