#include "mainwindow.h"
#include "ui_mainwindow.h"

enum direction {Horizontal=1,Vertical=2,DiagonnalHautDroit=3,DiagonnalHautGauche=4};
enum sens {Droit=0, Inverse=1};
typedef struct mot
{
    char* labbel;
    int taille;
    int xDebut;
    int yDebut;
    sens Sens;
    direction Direction;
    mot *next;
} Mot;
typedef struct Liste Liste;
struct Liste
{
    Mot *head;
}

void AddCharDebut(char* str,char c)
{
    while (xdebut <= 8 && ydebut <= 8) {

    }
}


void AddCharFin(char* str,char c)
{

}

void RemoveCharDebut(char* str)
{

}

void RemoveCharFin(char* str)
{

}

void VerifMot(char* str,Liste liste)
{

}








void VerifSortieTab()
{

}
