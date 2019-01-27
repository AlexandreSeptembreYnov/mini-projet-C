#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <QString>
#include <string.h>
#include <windows.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_A1_clicked();
    void on_A2_clicked();
    void on_A3_clicked();
    void on_A4_clicked();
    void on_A5_clicked();
    void on_A6_clicked();
    void on_A7_clicked();
    void on_A8_clicked();
    void on_A9_clicked();
    void on_A10_clicked();
    void on_B1_clicked();
    void on_B2_clicked();
    void on_B3_clicked();
    void on_B4_clicked();
    void on_B5_clicked();
    void on_B6_clicked();
    void on_B7_clicked();
    void on_B8_clicked();
    void on_B9_clicked();
    void on_B10_clicked();
    void on_C1_clicked();
    void on_C2_clicked();
    void on_C3_clicked();
    void on_C4_clicked();
    void on_C5_clicked();
    void on_C6_clicked();
    void on_C7_clicked();
    void on_C8_clicked();
    void on_C9_clicked();
    void on_C10_clicked();
    void on_D1_clicked();
    void on_D2_clicked();
    void on_D3_clicked();
    void on_D4_clicked();
    void on_D5_clicked();
    void on_D6_clicked();
    void on_D7_clicked();
    void on_D8_clicked();
    void on_D9_clicked();
    void on_D10_clicked();
    void on_E1_clicked();
    void on_E2_clicked();
    void on_E3_clicked();
    void on_E4_clicked();
    void on_E5_clicked();
    void on_E6_clicked();
    void on_E7_clicked();
    void on_E8_clicked();
    void on_E9_clicked();
    void on_E10_clicked();
    void on_F1_clicked();
    void on_F2_clicked();
    void on_F3_clicked();
    void on_F4_clicked();
    void on_F5_clicked();
    void on_F6_clicked();
    void on_F7_clicked();
    void on_F8_clicked();
    void on_F9_clicked();
    void on_F10_clicked();
    void on_G1_clicked();
    void on_G2_clicked();
    void on_G3_clicked();
    void on_G4_clicked();
    void on_G5_clicked();
    void on_G6_clicked();
    void on_G7_clicked();
    void on_G8_clicked();
    void on_G9_clicked();
    void on_G10_clicked();
    void on_H1_clicked();
    void on_H2_clicked();
    void on_H3_clicked();
    void on_H4_clicked();
    void on_H5_clicked();
    void on_H6_clicked();
    void on_H7_clicked();
    void on_H8_clicked();
    void on_H9_clicked();
    void on_H10_clicked();
    void on_I1_clicked();
    void on_I2_clicked();
    void on_I3_clicked();
    void on_I4_clicked();
    void on_I5_clicked();
    void on_I6_clicked();
    void on_I7_clicked();
    void on_I8_clicked();
    void on_I9_clicked();
    void on_I10_clicked();
    void on_J1_clicked();
    void on_J2_clicked();
    void on_J3_clicked();
    void on_J4_clicked();
    void on_J5_clicked();
    void on_J6_clicked();
    void on_J7_clicked();
    void on_J8_clicked();
    void on_J9_clicked();
    void on_J10_clicked();
    void on_validerTaille_clicked();

    void on_imprimer_clicked();

    void on_valider_clicked();

private:
    Ui::MainWindow *ui;
};

void remplirTableau(int taille, char** tab);
char** creationTableau (double taille, char dernierMot[10]);
void motFinal(int taille, char** tab, char motFinal[10]);
bool placeDansTab(char **tab, char *str, int taille);
void listeDebug(char* mot);
#endif // MAINWINDOW_H
