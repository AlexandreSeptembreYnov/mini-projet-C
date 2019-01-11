#include <motcacher.h>

int HorizontalDroit(int x, int y, char* labbel, int taille, char** tab){
    int position= 0;
    while (position< taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        x = x+1;
    }
};

int HorizontalInverse(int x, int y, char* labbel, int taille, char** tab){
    int position = 0;
    while (position < taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        x = x-1;
    }
};

int VerticaleDroit(int x, int y, char* labbel, int taille, char** tab){
    int position = 0;
    while (position < taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        y = y+1;
    }
};

int VerticaleInverse(int x, int y, char* labbel, int taille, char** tab){
    int position = 0;
    while (position < taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        y = y-1;
    }
};

int DiagonaleHautDroite(int x, int y, char* labbel, int taille, char** tab){
    int position = 0;
    while (position < taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        x = x+1;
        y= y-1;
    }
};

int DiagonaleBasGauche(int x, int y, char* labbel, int taille, char** tab){
    int position = 0;
    while (position < taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        x = x-1;
        y= y+1;
    }
};

int DiagonaleHautGauche(int x, int y, char* labbel, int taille, char** tab){
    int position = 0;
    while (position < taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        x = x-1;
        y= y-1;
    }
};

int DiagonaleBasDroite(int x, int y, char* labbel, int taille, char** tab){
    int position = 0;
    while (position < taille) {
        char lettre = labbel[position];
        PlacerLettre(x,y,tab,lettre,position);
        x = x+1;
        y= y+1;
    }
};

void error(){

};




int PlacerMotHorizontal(int sens, int x, int y, int taille, char* labbel, char **tab){
    switch(sens){
        case 0:
            HorizontalDroit(x,y,labbel,taille,tab);
            break;
        case 1:
            HorizontalInverse(x,y,labbel,taille,tab);
            break;
        default:
            error();
    }
};

int PlacerMotVertical(int sens, int x, int y, int taille, char* labbel, char **tab){
    switch(sens){
        case 0:
            VerticaleDroit(x,y,labbel,taille,tab);
            break;
        case 1:
            VerticaleInverse(x,y,labbel,taille,tab);
            break;
        default:
            error();
    }
};

int PlacerMotDiagonaleDroite(int sens, int x, int y, int taille, char* labbel, char **tab){
    switch(sens){
        case 0:
            DiagonaleHautDroite(x,y,labbel,taille,tab);
            break;
        case 1:
            DiagonaleBasGauche(x,y,labbel,taille,tab);
            break;
        default:
            error();
    }
};

int PlacerMotDiagonaleGauche(int sens, int x, int y, int taille, char* labbel, char **tab){
    switch(sens){
        case 0:
            DiagonaleHautGauche(x,y,labbel,taille,tab);
            break;
        case 1:
            DiagonaleBasDroite(x,y,labbel,taille,tab);
            break;
        default:
            error();
    }
};



int PlacerLettre(int x, int y, char** tab, char lettre, int position){

};

int Annuler(int position){

};




