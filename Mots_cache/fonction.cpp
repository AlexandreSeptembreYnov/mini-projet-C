#include <mainwindow.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void mot() {
    const int HORIZONTAL = 0;
    const int VERTICAL = 1;
    const int DIAGONAL_LEFT_TO_RIGHT = 2;
    const int DIAGONAL_RIGHT_TO_LEFT = 3;
}

void grille() {
    const int MIN_LEN_WORD = 3;
    const int MAX_LEN_WORD = 12;
    const int DEFAULT_GRID_SIZE = 10;
}

char** init() {
    int x;
    int i;
    int j;
    scanf("%d", &x);
    for(i=0;i<x;i++) {
    char **grille=(char**)malloc(sizeof(char*) * x);
        for(j=0;j<x;j++) {
            char *grille=(char*)malloc(sizeof(char) * x);
        }
    }
    return **grille;
}

void detruire() {
    char** tab = init();
    free(tab);
}

void ajout(int *x){
    char* string;
    char** tab = init();
    int taille = *x;
    int ligne = 0;
    int colonne = 0;
    int i = 0;
    int start = rand()%taille + 0;
    int sens = rand()%4;
    while (start-taille != 0) {
        start = start-taille;
        ligne++;
    }
    colonne = start;
    switch (sens) {
        case 0 :
            while (string[i] != 0) {
                tab[ligne][colonne]=string[i];
                colonne++;
                i++;
            }
        break;
        case 1 :
            while (string[i] != 0) {
                tab[ligne][colonne]=string[i];
                ligne++;
                i++;
            }
        break;
        case 2 :
            while (string[i] != 0) {
                tab[ligne][colonne]=string[i];
                ligne++;
                colonne++;
                i++;
            }
        break;
        case 3 :
            while (string[i] != 0) {
                tab[ligne][colonne]=string[i];
                ligne++;
                colonne--;
                i++;
            }
        break;
    }
}
