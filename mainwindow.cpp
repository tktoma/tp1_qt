#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     clickTension = false;
      ui->EtatTension->setText("Hors Tension");
       ui->DemarrageDrone->setDisabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MiseSousTension_clicked()
{


    if ( clickTension== false)
    {
          // modification du texte

          ui->EtatTension->setText("Mise sous tension");

          // on met le texte à l'état inactif et on positionne la variable
          ui->DemarrageDrone->setDisabled(false);
          ui->EtatDemarrage->setText("En tension");
          ui->EtatTension->setDisabled(true);
            clickTension = true;
    }

    else
    {
       ui->EtatTension->setDisabled(false);
       clickTension = false;
    }
}


void MainWindow::on_DemarrageDrone_clicked()
{
     ui->EtatDemarrage->setText("Drone démarré");
}

