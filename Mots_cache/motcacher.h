#ifndef MOTCACHER_H
#define MOTCACHER_H
#define TAILLE      8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
#endif // MOTCACHER_H
