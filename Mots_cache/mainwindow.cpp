#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_A1_clicked()
{
    bool couleurA1 = 0;
    if (couleurA1 == 0) {
        ui->A1->setStyleSheet("background-color: orange;");
        ui->A1->setText("trouve");
        couleurA1 = 1;
    }
    else {
        ui->A1->setStyleSheet("background-color: black;");
        couleurA1 = 0;
    }

}

void MainWindow::on_A2_clicked()
{
    bool colore = 0;
    if (colore == 0) {
        ui->A2->setStyleSheet("background-color: orange;");
        colore = 1;
    }
    else {
        ui->A2->setStyleSheet("background-color: white;");
        colore = 0;
    }
}

void MainWindow::on_A3_clicked()
{
    ui->A3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_A4_clicked()
{
    ui->A4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_A5_clicked()
{
    ui->A5->setStyleSheet("background-color: orange;");
}
void MainWindow::on_A6_clicked()
{
    ui->A6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_A7_clicked()
{
    ui->A7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_A8_clicked()
{
    ui->A8->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B1_clicked()
{
    ui->B1->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B2_clicked()
{
    ui->B2->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B3_clicked()
{
    ui->B3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B4_clicked()
{
    ui->B4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B5_clicked()
{
    ui->B5->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B6_clicked()
{
    ui->B6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B7_clicked()
{
    ui->B7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_B8_clicked()
{
    ui->B8->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C1_clicked()
{
    ui->C1->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C2_clicked()
{
    ui->C2->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C3_clicked()
{
    ui->C3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C4_clicked()
{
    ui->C4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C5_clicked()
{
    ui->C5->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C6_clicked()
{
    ui->C6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C7_clicked()
{
    ui->C7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_C8_clicked()
{
    ui->C8->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D1_clicked()
{
    ui->D1->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D2_clicked()
{
    ui->D2->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D3_clicked()
{
    ui->D3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D4_clicked()
{
    ui->D4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D5_clicked()
{
    ui->D5->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D6_clicked()
{
    ui->D6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D7_clicked()
{
    ui->D7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_D8_clicked()
{
    ui->D8->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E1_clicked()
{
    ui->E1->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E2_clicked()
{
    ui->E2->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E3_clicked()
{
    ui->E3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E4_clicked()
{
    ui->E4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E5_clicked()
{
    ui->E5->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E6_clicked()
{
    ui->E6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E7_clicked()
{
    ui->E7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_E8_clicked()
{
    ui->E8->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F1_clicked()
{
    ui->F1->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F2_clicked()
{
    ui->F2->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F3_clicked()
{
    ui->F3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F4_clicked()
{
    ui->F4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F5_clicked()
{
    ui->F5->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F6_clicked()
{
    ui->F6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F7_clicked()
{
    ui->F7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_F8_clicked()
{
    ui->F8->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G1_clicked()
{
    ui->G1->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G2_clicked()
{
    ui->G2->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G3_clicked()
{
    ui->G3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G4_clicked()
{
    ui->G4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G5_clicked()
{
    ui->G5->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G6_clicked()
{
    ui->G6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G7_clicked()
{
    ui->G7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_G8_clicked()
{
    ui->G8->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H1_clicked()
{
    ui->H1->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H2_clicked()
{
    ui->H2->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H3_clicked()
{
    ui->H3->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H4_clicked()
{
    ui->H4->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H5_clicked()
{
    ui->H5->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H6_clicked()
{
    ui->H6->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H7_clicked()
{
    ui->H7->setStyleSheet("background-color: orange;");
}

void MainWindow::on_H8_clicked()
{
    ui->H8->setStyleSheet("background-color: orange;");
}
