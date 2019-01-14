#ifndef MOTCACHER_H
#define MOTCACHER_H
#define TAILLE      8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

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
char **initTableau();
Mot* creationMot(char * str);
Liste* creationListe();
int AddElementAtEnd(Liste l, Mot e);
void AddFirstElement(Liste l,Mot e);
void remplirListe(Liste l);

int HorizontalDroit(int x, int y, Mot e, char** tab);
int AnnulerHorizDroit(int x, int y, int position, char** tab);
int HorizontalInverse(int x, int y, Mot e, char** tab);
int AnnulerHorizInverse(int x, int y, int position, char** tab);
int VerticaleDroit(int x, int y, Mot e, char** tab);
int AnnulerVertDroit(int x, int y, int position, char** tab);
int VerticaleInverse(int x, int y, Mot e, char** tab);
int AnnulerVertInverse(int x, int y, int position, char** tab);
int DiagonaleHautDroite(int x, int y, Mot e, char** tab);
int AnnulerHautDroit(int x, int y, int position, char** tab);
int DiagonaleBasGauche(int x, int y, Mot e, char** tab);
int AnnulerBasGauche(int x, int y, int position, char** tab);
int DiagonaleHautGauche(int x, int y, Mot e, char** tab);
int AnnulerHautGauche(int x, int y, int position, char** tab);
int DiagonaleBasDroite(int x, int y, Mot e, char** tab);
int AnnulerBasDroit(int x, int y, int position, char** tab);
void error();
int PlacerMotHorizontal(int sens, int x, int y, Mot e, char **tab);
int PlacerMotVerticale(int sens, int x, int y, Mot e, char **tab);
int PlacerMotDiagonaleDroite(int sens, int x, int y, Mot e, char **tab);
int PlacerMotDiagonaleGauche(int sens, int x, int y, Mot e, char **tab);
int PlacerLettre(int x, int y, char** tab, char lettre);
int PlacerMot(Mot e, char **tab);

#endif // MOTCACHER_H
