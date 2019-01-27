#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtPrintSupport/QPrinter>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->erreur->hide();
    ui->GG->hide();
    ui->A1->hide();
    ui->A2->hide();
    ui->A3->hide();
    ui->A4->hide();
    ui->A5->hide();
    ui->A6->hide();
    ui->A7->hide();
    ui->A8->hide();
    ui->A9->hide();
    ui->A10->hide();
    ui->B1->hide();
    ui->B2->hide();
    ui->B3->hide();
    ui->B4->hide();
    ui->B5->hide();
    ui->B6->hide();
    ui->B7->hide();
    ui->B8->hide();
    ui->B9->hide();
    ui->B10->hide();
    ui->C1->hide();
    ui->C2->hide();
    ui->C3->hide();
    ui->C4->hide();
    ui->C5->hide();
    ui->C6->hide();
    ui->C7->hide();
    ui->C8->hide();
    ui->C9->hide();
    ui->C10->hide();
    ui->D1->hide();
    ui->D2->hide();
    ui->D3->hide();
    ui->D4->hide();
    ui->D5->hide();
    ui->D6->hide();
    ui->D7->hide();
    ui->D8->hide();
    ui->D9->hide();
    ui->D10->hide();
    ui->E1->hide();
    ui->E2->hide();
    ui->E3->hide();
    ui->E4->hide();
    ui->E5->hide();
    ui->E6->hide();
    ui->E7->hide();
    ui->E8->hide();
    ui->E9->hide();
    ui->E10->hide();
    ui->F1->hide();
    ui->F2->hide();
    ui->F3->hide();
    ui->F4->hide();
    ui->F5->hide();
    ui->F6->hide();
    ui->F7->hide();
    ui->F8->hide();
    ui->F9->hide();
    ui->F10->hide();
    ui->G1->hide();
    ui->G2->hide();
    ui->G3->hide();
    ui->G4->hide();
    ui->G5->hide();
    ui->G6->hide();
    ui->G7->hide();
    ui->G8->hide();
    ui->G9->hide();
    ui->G10->hide();
    ui->H1->hide();
    ui->H2->hide();
    ui->H3->hide();
    ui->H4->hide();
    ui->H5->hide();
    ui->H6->hide();
    ui->H7->hide();
    ui->H8->hide();
    ui->H9->hide();
    ui->H10->hide();
    ui->I1->hide();
    ui->I2->hide();
    ui->I3->hide();
    ui->I4->hide();
    ui->I5->hide();
    ui->I6->hide();
    ui->I7->hide();
    ui->I8->hide();
    ui->I9->hide();
    ui->I10->hide();
    ui->J1->hide();
    ui->J2->hide();
    ui->J3->hide();
    ui->J4->hide();
    ui->J5->hide();
    ui->J6->hide();
    ui->J7->hide();
    ui->J8->hide();
    ui->J9->hide();
    ui->J10->hide();
    ui->motFinal->hide();
    ui->valider->hide();
    ui->taille->setPlaceholderText("Rentrez la taille souhaitée :");
    ui->motFinal->setPlaceholderText("Rentrez le mot final :");
}

MainWindow::~MainWindow()
{
    FILE* fichier;
    fichier = fopen("listeDebug.txt", "w");
    fclose(fichier);
    delete ui;
}

void MainWindow::on_validerTaille_clicked()
{
    srand(time(NULL));
    char** tab;
    QString listeMot;
    char motfinalVar[10];

    QString str = ui->taille->text();
    double taille = str.toDouble();
    if (ui->taille->text() == '5') {
        ui->erreur->hide();
        ui->A1->show();
        ui->A2->show();
        ui->A3->show();
        ui->A4->show();
        ui->A5->show();
        ui->B1->show();
        ui->B2->show();
        ui->B3->show();
        ui->B4->show();
        ui->B5->show();
        ui->C1->show();
        ui->C2->show();
        ui->C3->show();
        ui->C4->show();
        ui->C5->show();
        ui->D1->show();
        ui->D2->show();
        ui->D3->show();
        ui->D4->show();
        ui->D5->show();
        ui->E1->show();
        ui->E2->show();
        ui->E3->show();
        ui->E4->show();
        ui->E5->show();
        ui->motFinal->show();
        ui->valider->show();
        ui->taille->hide();
        ui->validerTaille->hide();
        tab = creationTableau(taille, motfinalVar);
        ui->motfinal->setText(motfinalVar);

        QFile fichier("listeDebug.txt");
        if(!fichier.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"ER REUR",fichier.errorString()); // ouverture d'un Qmsgbox si mon fichier est null
        QTextStream in(&fichier);
        ui->listeDeMot->setText(in.readAll());

        ui->A1->setText((QString)tab[0][0]);
        ui->A2->setText((QString)tab[1][0]);
        ui->A3->setText((QString)tab[2][0]);
        ui->A4->setText((QString)tab[3][0]);
        ui->A5->setText((QString)tab[4][0]);
        ui->B1->setText((QString)tab[0][1]);
        ui->B2->setText((QString)tab[1][1]);
        ui->B3->setText((QString)tab[2][1]);
        ui->B4->setText((QString)tab[3][1]);
        ui->B5->setText((QString)tab[4][1]);
        ui->C1->setText((QString)tab[0][2]);
        ui->C2->setText((QString)tab[1][2]);
        ui->C3->setText((QString)tab[2][2]);
        ui->C4->setText((QString)tab[3][2]);
        ui->C5->setText((QString)tab[4][2]);
        ui->D1->setText((QString)tab[0][3]);
        ui->D2->setText((QString)tab[1][3]);
        ui->D3->setText((QString)tab[2][3]);
        ui->D4->setText((QString)tab[3][3]);
        ui->D5->setText((QString)tab[4][3]);
        ui->E1->setText((QString)tab[0][4]);
        ui->E2->setText((QString)tab[1][4]);
        ui->E3->setText((QString)tab[2][4]);
        ui->E4->setText((QString)tab[3][4]);
        ui->E5->setText((QString)tab[4][4]);
    }
    if (ui->taille->text() == '6') {
        ui->erreur->hide();
        ui->A1->show();
        ui->A2->show();
        ui->A3->show();
        ui->A4->show();
        ui->A5->show();
        ui->A6->show();
        ui->B1->show();
        ui->B2->show();
        ui->B3->show();
        ui->B4->show();
        ui->B5->show();
        ui->B6->show();
        ui->C1->show();
        ui->C2->show();
        ui->C3->show();
        ui->C4->show();
        ui->C5->show();
        ui->C6->show();
        ui->D1->show();
        ui->D2->show();
        ui->D3->show();
        ui->D4->show();
        ui->D5->show();
        ui->D6->show();
        ui->E1->show();
        ui->E2->show();
        ui->E3->show();
        ui->E4->show();
        ui->E5->show();
        ui->E6->show();
        ui->F1->show();
        ui->F2->show();
        ui->F3->show();
        ui->F4->show();
        ui->F5->show();
        ui->F6->show();
        ui->motFinal->show();
        ui->valider->show();
        ui->taille->hide();
        ui->validerTaille->hide();
        tab = creationTableau(taille, motfinalVar);
        ui->motfinal->setText(motfinalVar);

        QFile fichier2("listeDebug.txt");
        if(!fichier2.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"ER REUR",fichier2.errorString()); // ouverture d'un Qmsgbox si mon fichier est null
        QTextStream in(&fichier2);
        ui->listeDeMot->setText(in.readAll());

        ui->A1->setText((QString)tab[0][0]);
        ui->A2->setText((QString)tab[1][0]);
        ui->A3->setText((QString)tab[2][0]);
        ui->A4->setText((QString)tab[3][0]);
        ui->A5->setText((QString)tab[4][0]);
        ui->A6->setText((QString)tab[5][0]);
        ui->B1->setText((QString)tab[0][1]);
        ui->B2->setText((QString)tab[1][1]);
        ui->B3->setText((QString)tab[2][1]);
        ui->B4->setText((QString)tab[3][1]);
        ui->B5->setText((QString)tab[4][1]);
        ui->B6->setText((QString)tab[5][1]);
        ui->C1->setText((QString)tab[0][2]);
        ui->C2->setText((QString)tab[1][2]);
        ui->C3->setText((QString)tab[2][2]);
        ui->C4->setText((QString)tab[3][2]);
        ui->C5->setText((QString)tab[4][2]);
        ui->C6->setText((QString)tab[5][2]);
        ui->D1->setText((QString)tab[0][3]);
        ui->D2->setText((QString)tab[1][3]);
        ui->D3->setText((QString)tab[2][3]);
        ui->D4->setText((QString)tab[3][3]);
        ui->D5->setText((QString)tab[4][3]);
        ui->D6->setText((QString)tab[5][3]);
        ui->E1->setText((QString)tab[0][4]);
        ui->E2->setText((QString)tab[1][4]);
        ui->E3->setText((QString)tab[2][4]);
        ui->E4->setText((QString)tab[3][4]);
        ui->E5->setText((QString)tab[4][4]);
        ui->E6->setText((QString)tab[5][4]);
        ui->F1->setText((QString)tab[0][4]);
        ui->F2->setText((QString)tab[1][5]);
        ui->F3->setText((QString)tab[2][5]);
        ui->F4->setText((QString)tab[3][5]);
        ui->F5->setText((QString)tab[4][5]);
        ui->F6->setText((QString)tab[5][5]);

    }
    if (ui->taille->text() == '7') {
        ui->erreur->hide();
        ui->A1->show();
        ui->A2->show();
        ui->A3->show();
        ui->A4->show();
        ui->A5->show();
        ui->A6->show();
        ui->A7->show();
        ui->B1->show();
        ui->B2->show();
        ui->B3->show();
        ui->B4->show();
        ui->B5->show();
        ui->B6->show();
        ui->B7->show();
        ui->C1->show();
        ui->C2->show();
        ui->C3->show();
        ui->C4->show();
        ui->C5->show();
        ui->C6->show();
        ui->C7->show();
        ui->D1->show();
        ui->D2->show();
        ui->D3->show();
        ui->D4->show();
        ui->D5->show();
        ui->D6->show();
        ui->D7->show();
        ui->E1->show();
        ui->E2->show();
        ui->E3->show();
        ui->E4->show();
        ui->E5->show();
        ui->E6->show();
        ui->E7->show();
        ui->F1->show();
        ui->F2->show();
        ui->F3->show();
        ui->F4->show();
        ui->F5->show();
        ui->F6->show();
        ui->F7->show();
        ui->G1->show();
        ui->G2->show();
        ui->G3->show();
        ui->G4->show();
        ui->G5->show();
        ui->G6->show();
        ui->G7->show();
        ui->motFinal->show();
        ui->valider->show();
        ui->taille->hide();
        ui->validerTaille->hide();
        tab = creationTableau(taille, motfinalVar);
        ui->motfinal->setText(motfinalVar);

        QFile fichier3("listeDebug.txt");
        if(!fichier3.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"ER REUR",fichier3.errorString()); // ouverture d'un Qmsgbox si mon fichier est null
        QTextStream in(&fichier3);
        ui->listeDeMot->setText(in.readAll());

        ui->A1->setText((QString)tab[0][0]);
        ui->A2->setText((QString)tab[1][0]);
        ui->A3->setText((QString)tab[2][0]);
        ui->A4->setText((QString)tab[3][0]);
        ui->A5->setText((QString)tab[4][0]);
        ui->A6->setText((QString)tab[5][0]);
        ui->A7->setText((QString)tab[6][0]);
        ui->B1->setText((QString)tab[0][1]);
        ui->B2->setText((QString)tab[1][1]);
        ui->B3->setText((QString)tab[2][1]);
        ui->B4->setText((QString)tab[3][1]);
        ui->B5->setText((QString)tab[4][1]);
        ui->B6->setText((QString)tab[5][1]);
        ui->B7->setText((QString)tab[6][1]);
        ui->C1->setText((QString)tab[0][2]);
        ui->C2->setText((QString)tab[1][2]);
        ui->C3->setText((QString)tab[2][2]);
        ui->C4->setText((QString)tab[3][2]);
        ui->C5->setText((QString)tab[4][2]);
        ui->C6->setText((QString)tab[5][2]);
        ui->C7->setText((QString)tab[6][2]);
        ui->D1->setText((QString)tab[0][3]);
        ui->D2->setText((QString)tab[1][3]);
        ui->D3->setText((QString)tab[2][3]);
        ui->D4->setText((QString)tab[3][3]);
        ui->D5->setText((QString)tab[4][3]);
        ui->D6->setText((QString)tab[5][3]);
        ui->D7->setText((QString)tab[6][3]);
        ui->E1->setText((QString)tab[0][4]);
        ui->E2->setText((QString)tab[1][4]);
        ui->E3->setText((QString)tab[2][4]);
        ui->E4->setText((QString)tab[3][4]);
        ui->E5->setText((QString)tab[4][4]);
        ui->E6->setText((QString)tab[5][4]);
        ui->E7->setText((QString)tab[6][4]);
        ui->F1->setText((QString)tab[0][5]);
        ui->F2->setText((QString)tab[1][5]);
        ui->F3->setText((QString)tab[2][5]);
        ui->F4->setText((QString)tab[3][5]);
        ui->F5->setText((QString)tab[4][5]);
        ui->F6->setText((QString)tab[5][5]);
        ui->F7->setText((QString)tab[6][5]);
        ui->G1->setText((QString)tab[0][6]);
        ui->G2->setText((QString)tab[1][6]);
        ui->G3->setText((QString)tab[2][6]);
        ui->G4->setText((QString)tab[3][6]);
        ui->G5->setText((QString)tab[4][6]);
        ui->G6->setText((QString)tab[5][6]);
        ui->G7->setText((QString)tab[6][6]);

    }
    if (ui->taille->text() == '8') {
        ui->erreur->hide();
        ui->A1->show();
        ui->A2->show();
        ui->A3->show();
        ui->A4->show();
        ui->A5->show();
        ui->A6->show();
        ui->A7->show();
        ui->A8->show();
        ui->B1->show();
        ui->B2->show();
        ui->B3->show();
        ui->B4->show();
        ui->B5->show();
        ui->B6->show();
        ui->B7->show();
        ui->B8->show();
        ui->C1->show();
        ui->C2->show();
        ui->C3->show();
        ui->C4->show();
        ui->C5->show();
        ui->C6->show();
        ui->C7->show();
        ui->C8->show();
        ui->D1->show();
        ui->D2->show();
        ui->D3->show();
        ui->D4->show();
        ui->D5->show();
        ui->D6->show();
        ui->D7->show();
        ui->D8->show();
        ui->E1->show();
        ui->E2->show();
        ui->E3->show();
        ui->E4->show();
        ui->E5->show();
        ui->E6->show();
        ui->E7->show();
        ui->E8->show();
        ui->F1->show();
        ui->F2->show();
        ui->F3->show();
        ui->F4->show();
        ui->F5->show();
        ui->F6->show();
        ui->F7->show();
        ui->F8->show();
        ui->G1->show();
        ui->G2->show();
        ui->G3->show();
        ui->G4->show();
        ui->G5->show();
        ui->G6->show();
        ui->G7->show();
        ui->G8->show();
        ui->H1->show();
        ui->H2->show();
        ui->H3->show();
        ui->H4->show();
        ui->H5->show();
        ui->H6->show();
        ui->H7->show();
        ui->H8->show();
        ui->motFinal->show();
        ui->valider->show();
        ui->taille->hide();
        ui->validerTaille->hide();
        tab = creationTableau(taille, motfinalVar);
        ui->motfinal->setText(motfinalVar);

        QFile fichier4("listeDebug.txt");
        if(!fichier4.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"ER REUR",fichier4.errorString()); // ouverture d'un Qmsgbox si mon fichier est null
        QTextStream in(&fichier4);
        ui->listeDeMot->setText(in.readAll());

        ui->A1->setText((QString)tab[0][0]);
        ui->A2->setText((QString)tab[1][0]);
        ui->A3->setText((QString)tab[2][0]);
        ui->A4->setText((QString)tab[3][0]);
        ui->A5->setText((QString)tab[4][0]);
        ui->A6->setText((QString)tab[5][0]);
        ui->A7->setText((QString)tab[6][0]);
        ui->A8->setText((QString)tab[7][0]);
        ui->B1->setText((QString)tab[0][1]);
        ui->B2->setText((QString)tab[1][1]);
        ui->B3->setText((QString)tab[2][1]);
        ui->B4->setText((QString)tab[3][1]);
        ui->B5->setText((QString)tab[4][1]);
        ui->B6->setText((QString)tab[5][1]);
        ui->B7->setText((QString)tab[6][1]);
        ui->B8->setText((QString)tab[7][1]);
        ui->C1->setText((QString)tab[0][2]);
        ui->C2->setText((QString)tab[1][2]);
        ui->C3->setText((QString)tab[2][2]);
        ui->C4->setText((QString)tab[3][2]);
        ui->C5->setText((QString)tab[4][2]);
        ui->C6->setText((QString)tab[5][2]);
        ui->C7->setText((QString)tab[6][2]);
        ui->C8->setText((QString)tab[7][2]);
        ui->D1->setText((QString)tab[0][3]);
        ui->D2->setText((QString)tab[1][3]);
        ui->D3->setText((QString)tab[2][3]);
        ui->D4->setText((QString)tab[3][3]);
        ui->D5->setText((QString)tab[4][3]);
        ui->D6->setText((QString)tab[5][3]);
        ui->D7->setText((QString)tab[6][3]);
        ui->D8->setText((QString)tab[7][3]);
        ui->E1->setText((QString)tab[0][4]);
        ui->E2->setText((QString)tab[1][4]);
        ui->E3->setText((QString)tab[2][4]);
        ui->E4->setText((QString)tab[3][4]);
        ui->E5->setText((QString)tab[4][4]);
        ui->E6->setText((QString)tab[5][4]);
        ui->E7->setText((QString)tab[6][4]);
        ui->E8->setText((QString)tab[7][4]);
        ui->F1->setText((QString)tab[0][5]);
        ui->F2->setText((QString)tab[1][5]);
        ui->F3->setText((QString)tab[2][5]);
        ui->F4->setText((QString)tab[3][5]);
        ui->F5->setText((QString)tab[4][5]);
        ui->F6->setText((QString)tab[5][5]);
        ui->F7->setText((QString)tab[6][5]);
        ui->F8->setText((QString)tab[7][5]);
        ui->G1->setText((QString)tab[0][6]);
        ui->G2->setText((QString)tab[1][6]);
        ui->G3->setText((QString)tab[2][6]);
        ui->G4->setText((QString)tab[3][6]);
        ui->G5->setText((QString)tab[4][6]);
        ui->G6->setText((QString)tab[5][6]);
        ui->G7->setText((QString)tab[6][6]);
        ui->G8->setText((QString)tab[7][6]);
        ui->H1->setText((QString)tab[0][7]);
        ui->H2->setText((QString)tab[1][7]);
        ui->H3->setText((QString)tab[2][7]);
        ui->H4->setText((QString)tab[3][7]);
        ui->H5->setText((QString)tab[4][7]);
        ui->H6->setText((QString)tab[5][7]);
        ui->H7->setText((QString)tab[6][7]);
        ui->H8->setText((QString)tab[7][7]);

    }
    if (ui->taille->text() == '9') {
        ui->erreur->hide();
        ui->A1->show();
        ui->A2->show();
        ui->A3->show();
        ui->A4->show();
        ui->A5->show();
        ui->A6->show();
        ui->A7->show();
        ui->A8->show();
        ui->A9->show();
        ui->B1->show();
        ui->B2->show();
        ui->B3->show();
        ui->B4->show();
        ui->B5->show();
        ui->B6->show();
        ui->B7->show();
        ui->B8->show();
        ui->B9->show();
        ui->C1->show();
        ui->C2->show();
        ui->C3->show();
        ui->C4->show();
        ui->C5->show();
        ui->C6->show();
        ui->C7->show();
        ui->C8->show();
        ui->C9->show();
        ui->D1->show();
        ui->D2->show();
        ui->D3->show();
        ui->D4->show();
        ui->D5->show();
        ui->D6->show();
        ui->D7->show();
        ui->D8->show();
        ui->D9->show();
        ui->E1->show();
        ui->E2->show();
        ui->E3->show();
        ui->E4->show();
        ui->E5->show();
        ui->E6->show();
        ui->E7->show();
        ui->E8->show();
        ui->E9->show();
        ui->F1->show();
        ui->F2->show();
        ui->F3->show();
        ui->F4->show();
        ui->F5->show();
        ui->F6->show();
        ui->F7->show();
        ui->F8->show();
        ui->F9->show();
        ui->G1->show();
        ui->G2->show();
        ui->G3->show();
        ui->G4->show();
        ui->G5->show();
        ui->G6->show();
        ui->G7->show();
        ui->G8->show();
        ui->G9->show();
        ui->H1->show();
        ui->H2->show();
        ui->H3->show();
        ui->H4->show();
        ui->H5->show();
        ui->H6->show();
        ui->H7->show();
        ui->H8->show();
        ui->H9->show();
        ui->I1->show();
        ui->I2->show();
        ui->I3->show();
        ui->I4->show();
        ui->I5->show();
        ui->I6->show();
        ui->I7->show();
        ui->I8->show();
        ui->I9->show();
        ui->motFinal->show();
        ui->valider->show();
        ui->taille->hide();
        ui->validerTaille->hide();
        tab = creationTableau(taille, motfinalVar);
        ui->motfinal->setText(motfinalVar);

        QFile fichier5("listeDebug.txt");
        if(!fichier5.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"ER REUR",fichier5.errorString()); // ouverture d'un Qmsgbox si mon fichier est null
        QTextStream in(&fichier5);
        ui->listeDeMot->setText(in.readAll());

        ui->A1->setText((QString)tab[0][0]);
        ui->A2->setText((QString)tab[1][0]);
        ui->A3->setText((QString)tab[2][0]);
        ui->A4->setText((QString)tab[3][0]);
        ui->A5->setText((QString)tab[4][0]);
        ui->A6->setText((QString)tab[5][0]);
        ui->A7->setText((QString)tab[6][0]);
        ui->A8->setText((QString)tab[7][0]);
        ui->A9->setText((QString)tab[8][0]);
        ui->B1->setText((QString)tab[0][1]);
        ui->B2->setText((QString)tab[1][1]);
        ui->B3->setText((QString)tab[2][1]);
        ui->B4->setText((QString)tab[3][1]);
        ui->B5->setText((QString)tab[4][1]);
        ui->B6->setText((QString)tab[5][1]);
        ui->B7->setText((QString)tab[6][1]);
        ui->B8->setText((QString)tab[7][1]);
        ui->B9->setText((QString)tab[8][1]);
        ui->C1->setText((QString)tab[0][2]);
        ui->C2->setText((QString)tab[1][2]);
        ui->C3->setText((QString)tab[2][2]);
        ui->C4->setText((QString)tab[3][2]);
        ui->C5->setText((QString)tab[4][2]);
        ui->C6->setText((QString)tab[5][2]);
        ui->C7->setText((QString)tab[6][2]);
        ui->C8->setText((QString)tab[7][2]);
        ui->C9->setText((QString)tab[8][2]);
        ui->D1->setText((QString)tab[0][3]);
        ui->D2->setText((QString)tab[1][3]);
        ui->D3->setText((QString)tab[2][3]);
        ui->D4->setText((QString)tab[3][3]);
        ui->D5->setText((QString)tab[4][3]);
        ui->D6->setText((QString)tab[5][3]);
        ui->D7->setText((QString)tab[6][3]);
        ui->D8->setText((QString)tab[7][3]);
        ui->D9->setText((QString)tab[8][3]);
        ui->E1->setText((QString)tab[0][4]);
        ui->E2->setText((QString)tab[1][4]);
        ui->E3->setText((QString)tab[2][4]);
        ui->E4->setText((QString)tab[3][4]);
        ui->E5->setText((QString)tab[4][4]);
        ui->E6->setText((QString)tab[5][4]);
        ui->E7->setText((QString)tab[6][4]);
        ui->E8->setText((QString)tab[7][4]);
        ui->E9->setText((QString)tab[8][4]);
        ui->F1->setText((QString)tab[0][5]);
        ui->F2->setText((QString)tab[1][5]);
        ui->F3->setText((QString)tab[2][5]);
        ui->F4->setText((QString)tab[3][5]);
        ui->F5->setText((QString)tab[4][5]);
        ui->F6->setText((QString)tab[5][5]);
        ui->F7->setText((QString)tab[6][5]);
        ui->F8->setText((QString)tab[7][5]);
        ui->F9->setText((QString)tab[8][5]);
        ui->G1->setText((QString)tab[0][6]);
        ui->G2->setText((QString)tab[1][6]);
        ui->G3->setText((QString)tab[2][6]);
        ui->G4->setText((QString)tab[3][6]);
        ui->G5->setText((QString)tab[4][6]);
        ui->G6->setText((QString)tab[5][6]);
        ui->G7->setText((QString)tab[6][6]);
        ui->G8->setText((QString)tab[7][6]);
        ui->G9->setText((QString)tab[8][6]);
        ui->H1->setText((QString)tab[0][7]);
        ui->H2->setText((QString)tab[1][7]);
        ui->H3->setText((QString)tab[2][7]);
        ui->H4->setText((QString)tab[3][7]);
        ui->H5->setText((QString)tab[4][7]);
        ui->H6->setText((QString)tab[5][7]);
        ui->H7->setText((QString)tab[6][7]);
        ui->H8->setText((QString)tab[7][7]);
        ui->H9->setText((QString)tab[8][7]);
        ui->I1->setText((QString)tab[0][8]);
        ui->I2->setText((QString)tab[1][8]);
        ui->I3->setText((QString)tab[2][8]);
        ui->I4->setText((QString)tab[3][8]);
        ui->I5->setText((QString)tab[4][8]);
        ui->I6->setText((QString)tab[5][8]);
        ui->I7->setText((QString)tab[6][8]);
        ui->I8->setText((QString)tab[7][8]);
        ui->I9->setText((QString)tab[8][8]);

    }
    if (ui->taille->text() == "10") {
        ui->erreur->hide();
        ui->A1->show();
        ui->A2->show();
        ui->A3->show();
        ui->A4->show();
        ui->A5->show();
        ui->A6->show();
        ui->A7->show();
        ui->A8->show();
        ui->A9->show();
        ui->A10->show();
        ui->B1->show();
        ui->B2->show();
        ui->B3->show();
        ui->B4->show();
        ui->B5->show();
        ui->B6->show();
        ui->B7->show();
        ui->B8->show();
        ui->B9->show();
        ui->B10->show();
        ui->C1->show();
        ui->C2->show();
        ui->C3->show();
        ui->C4->show();
        ui->C5->show();
        ui->C6->show();
        ui->C7->show();
        ui->C8->show();
        ui->C9->show();
        ui->C10->show();
        ui->D1->show();
        ui->D2->show();
        ui->D3->show();
        ui->D4->show();
        ui->D5->show();
        ui->D6->show();
        ui->D7->show();
        ui->D8->show();
        ui->D9->show();
        ui->D10->show();
        ui->E1->show();
        ui->E2->show();
        ui->E3->show();
        ui->E4->show();
        ui->E5->show();
        ui->E6->show();
        ui->E7->show();
        ui->E8->show();
        ui->E9->show();
        ui->E10->show();
        ui->F1->show();
        ui->F2->show();
        ui->F3->show();
        ui->F4->show();
        ui->F5->show();
        ui->F6->show();
        ui->F7->show();
        ui->F8->show();
        ui->F9->show();
        ui->F10->show();
        ui->G1->show();
        ui->G2->show();
        ui->G3->show();
        ui->G4->show();
        ui->G5->show();
        ui->G6->show();
        ui->G7->show();
        ui->G8->show();
        ui->G9->show();
        ui->G10->show();
        ui->H1->show();
        ui->H2->show();
        ui->H3->show();
        ui->H4->show();
        ui->H5->show();
        ui->H6->show();
        ui->H7->show();
        ui->H8->show();
        ui->H9->show();
        ui->H10->show();
        ui->I1->show();
        ui->I2->show();
        ui->I3->show();
        ui->I4->show();
        ui->I5->show();
        ui->I6->show();
        ui->I7->show();
        ui->I8->show();
        ui->I9->show();
        ui->I10->show();
        ui->J1->show();
        ui->J2->show();
        ui->J3->show();
        ui->J4->show();
        ui->J5->show();
        ui->J6->show();
        ui->J7->show();
        ui->J8->show();
        ui->J9->show();
        ui->J10->show();
        ui->motFinal->show();
        ui->valider->show();
        ui->taille->hide();
        ui->validerTaille->hide();
        tab = creationTableau(taille, motfinalVar);
        ui->motfinal->setText(motfinalVar);

        QFile fichier6("listeDebug.txt");
        if(!fichier6.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"ER REUR",fichier6.errorString()); // ouverture d'un Qmsgbox si mon fichier est null
        QTextStream in(&fichier6);
        ui->listeDeMot->setText(in.readAll());

        ui->A1->setText((QString)tab[0][0]);
        ui->A2->setText((QString)tab[1][0]);
        ui->A3->setText((QString)tab[2][0]);
        ui->A4->setText((QString)tab[3][0]);
        ui->A5->setText((QString)tab[4][0]);
        ui->A6->setText((QString)tab[5][0]);
        ui->A7->setText((QString)tab[6][0]);
        ui->A8->setText((QString)tab[7][0]);
        ui->A9->setText((QString)tab[8][0]);
        ui->A10->setText((QString)tab[9][0]);
        ui->B1->setText((QString)tab[0][1]);
        ui->B2->setText((QString)tab[1][1]);
        ui->B3->setText((QString)tab[2][1]);
        ui->B4->setText((QString)tab[3][1]);
        ui->B5->setText((QString)tab[4][1]);
        ui->B6->setText((QString)tab[5][1]);
        ui->B7->setText((QString)tab[6][1]);
        ui->B8->setText((QString)tab[7][1]);
        ui->B9->setText((QString)tab[8][1]);
        ui->B10->setText((QString)tab[9][1]);
        ui->C1->setText((QString)tab[0][2]);
        ui->C2->setText((QString)tab[1][2]);
        ui->C3->setText((QString)tab[2][2]);
        ui->C4->setText((QString)tab[3][2]);
        ui->C5->setText((QString)tab[4][2]);
        ui->C6->setText((QString)tab[5][2]);
        ui->C7->setText((QString)tab[6][2]);
        ui->C8->setText((QString)tab[7][2]);
        ui->C9->setText((QString)tab[8][2]);
        ui->C10->setText((QString)tab[9][2]);
        ui->D1->setText((QString)tab[0][3]);
        ui->D2->setText((QString)tab[1][3]);
        ui->D3->setText((QString)tab[2][3]);
        ui->D4->setText((QString)tab[3][3]);
        ui->D5->setText((QString)tab[4][3]);
        ui->D6->setText((QString)tab[5][3]);
        ui->D7->setText((QString)tab[6][3]);
        ui->D8->setText((QString)tab[7][3]);
        ui->D9->setText((QString)tab[8][3]);
        ui->D10->setText((QString)tab[9][3]);
        ui->E1->setText((QString)tab[0][4]);
        ui->E2->setText((QString)tab[1][4]);
        ui->E3->setText((QString)tab[2][4]);
        ui->E4->setText((QString)tab[3][4]);
        ui->E5->setText((QString)tab[4][4]);
        ui->E6->setText((QString)tab[5][4]);
        ui->E7->setText((QString)tab[6][4]);
        ui->E8->setText((QString)tab[7][4]);
        ui->E9->setText((QString)tab[8][4]);
        ui->E10->setText((QString)tab[9][4]);
        ui->F1->setText((QString)tab[0][5]);
        ui->F2->setText((QString)tab[1][5]);
        ui->F3->setText((QString)tab[2][5]);
        ui->F4->setText((QString)tab[3][5]);
        ui->F5->setText((QString)tab[4][5]);
        ui->F6->setText((QString)tab[5][5]);
        ui->F7->setText((QString)tab[6][5]);
        ui->F8->setText((QString)tab[7][5]);
        ui->F9->setText((QString)tab[8][5]);
        ui->F10->setText((QString)tab[8][5]);
        ui->G1->setText((QString)tab[0][6]);
        ui->G2->setText((QString)tab[1][6]);
        ui->G3->setText((QString)tab[2][6]);
        ui->G4->setText((QString)tab[3][6]);
        ui->G5->setText((QString)tab[4][6]);
        ui->G6->setText((QString)tab[5][6]);
        ui->G7->setText((QString)tab[6][6]);
        ui->G8->setText((QString)tab[7][6]);
        ui->G9->setText((QString)tab[8][6]);
        ui->G10->setText((QString)tab[9][6]);
        ui->H1->setText((QString)tab[0][7]);
        ui->H2->setText((QString)tab[1][7]);
        ui->H3->setText((QString)tab[2][7]);
        ui->H4->setText((QString)tab[3][7]);
        ui->H5->setText((QString)tab[4][7]);
        ui->H6->setText((QString)tab[5][7]);
        ui->H7->setText((QString)tab[6][7]);
        ui->H8->setText((QString)tab[7][7]);
        ui->H9->setText((QString)tab[8][7]);
        ui->H10->setText((QString)tab[9][7]);
        ui->I1->setText((QString)tab[0][8]);
        ui->I2->setText((QString)tab[1][8]);
        ui->I3->setText((QString)tab[2][8]);
        ui->I4->setText((QString)tab[3][8]);
        ui->I5->setText((QString)tab[4][8]);
        ui->I6->setText((QString)tab[5][8]);
        ui->I7->setText((QString)tab[6][8]);
        ui->I8->setText((QString)tab[7][8]);
        ui->I9->setText((QString)tab[8][8]);
        ui->I10->setText((QString)tab[9][8]);
        ui->J1->setText((QString)tab[0][9]);
        ui->J2->setText((QString)tab[1][9]);
        ui->J3->setText((QString)tab[2][9]);
        ui->J4->setText((QString)tab[3][9]);
        ui->J5->setText((QString)tab[4][9]);
        ui->J6->setText((QString)tab[5][9]);
        ui->J7->setText((QString)tab[6][9]);
        ui->J8->setText((QString)tab[7][9]);
        ui->J9->setText((QString)tab[8][9]);
        ui->J10->setText((QString)tab[9][9]);

    }
    if(taille > 10) {
        ui->erreur->setText("Votre taille est trop grande !");
        ui->erreur->show();
    }
    if(taille < 5) {
        ui->erreur->setText("Votre taille est trop petite !");
        ui->erreur->show();
    }
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

void MainWindow::on_A9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_A10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->A10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->A10->setStyleSheet("background-color: white;");
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

void MainWindow::on_B9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_B10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->B10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->B10->setStyleSheet("background-color: white;");
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

void MainWindow::on_C9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_C10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->C10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->C10->setStyleSheet("background-color: white;");
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

void MainWindow::on_D9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_D10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->D10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->D10->setStyleSheet("background-color: white;");
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

void MainWindow::on_E9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_E10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->E10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->E10->setStyleSheet("background-color: white;");
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

void MainWindow::on_F9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_F10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->F10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->F10->setStyleSheet("background-color: white;");
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

void MainWindow::on_G9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_G10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->G10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->G10->setStyleSheet("background-color: white;");
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

void MainWindow::on_H9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_H10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->H10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->H10->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_I10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->I10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->I10->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J1_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J1->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J1->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J2_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J2->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J2->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J3_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J3->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J3->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J4_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J4->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J4->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J5_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J5->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J5->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J6_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J6->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J6->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J7_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J7->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J7->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J8_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J8->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J8->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J9_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J9->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J9->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_J10_clicked()
{
    static int etat=0;
    if ( etat == 0) {
        etat=1;
        ui->J10->setStyleSheet("background-color: orange;");
    }else  {
        etat=0;
        ui->J10->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_imprimer_clicked()
{
   system("print împrimer.txt");
}

void MainWindow::on_valider_clicked()
{
    if (ui->motFinal->text() == "salut") {
        ui->GG->setText("coucou à toi !");
        ui->GG->show();
    }
    if (ui->motFinal->text() == ui->motfinal->text()) {
        ui->GG->setText("BRAVO");
        ui->GG->show();
    }
}
