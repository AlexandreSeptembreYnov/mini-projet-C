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
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_A2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_A3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_A4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_A5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A5->setStyleSheet("background-color: white;");
    }
}
void MainWindow::on_A6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_A7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_A8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H8->setStyleSheet("background-color:orange;");
    }else  {
        etat=0;
        ui->H8->setStyleSheet("background-color: white;");
    }
}
