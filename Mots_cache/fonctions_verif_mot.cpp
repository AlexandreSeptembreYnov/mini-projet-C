#include "mainwindow.h"
#include "ui_mainwindow.h"
#define TAILLE      8

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
};

char *AddCharDebut(char *str, char c)
{
    str = c+str;
    return str;
}


char *AddCharFin(char* str,char c)
{
    str = str+c;
    return str;
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








void VerifSortieTab(Mot *e)
{
    int error = 1;
    while (error){
        switch (e->Direction) {
        case 1:
        {
            if ((e->xDebut + e->taille) >= TAILLE || (e->xDebut + e->taille) <= 0)
            {
                //random xDebut
            }
            break;
        }
        case 2 :{
            if ((e->yDebut + e->taille) >= TAILLE || (e->yDebut + e->taille) <= 0)
            {
                //random yDebut
            }
            break;
        }
        case 3 :{
            if ((e->yDebut + e->taille) >= TAILLE || (e->yDebut + e->taille) <= 0 || (e->xDebut + e->taille) >= TAILLE || (e->xDebut + e->taille) <= 0)
            {
                //random yDebut
                //random xDebut
            }
            break;
        }
        case 4 :{
            if ((e->yDebut + e->taille) >= TAILLE || (e->yDebut + e->taille) <= 0 || (e->xDebut + e->taille) >= TAILLE || (e->xDebut + e->taille) <= 0)
            {
                //random yDebut
                //random xDebut
            }
            break;
        }
        default:
        {
            error = 0;
            break;
        }
    }

}
