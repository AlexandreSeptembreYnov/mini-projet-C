#ifndef MOTCACHER_H
#define MOTCACHER_H

int PlacerMotHorizontal(int sens, int x, int y, int taille, char* labbel, char **tab);
int PlacerMotDiagonaleDroite(int sens, int x, int y, int taille, char* labbel, char **tab);
int PlacerMotVerticale(int sens, int x, int y, int taille, char* labbel, char **tab);
int PlacerMotDiagonaleGauche(int sens, int x, int y, int taille, char* labbel, char **tab);
int PlacerLettre(int x, int y, char** tab, char lettre, int position);
int AnnulerHorizDroit(int x, int y, int position, char** tab);
int AnnulerHorizInverse(int x, int y, int position, char** tab);


#endif // MOTCACHER_H
