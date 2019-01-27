#include <mainwindow.h>

void listeDebug(char* mot) {
    unsigned int tailleMot = strlen(mot);
    long tailleFichier = 1;
    FILE* fichier;
    fichier = fopen("listeDebug.txt", "r");

    //on calcule la taille du fichier dans tailleFichier
    if (fichier != NULL) {
        fseek(fichier, 0, SEEK_END);
        tailleFichier = ftell(fichier);
    }
    char* temp = (char*)malloc((sizeof(char) * tailleMot) + tailleFichier);
    char caractereLu;
    unsigned int i = 0;
    unsigned int j=0;

    //on recupere le fichier dans test
    if (fichier != NULL) {
        fseek(fichier, 0, SEEK_SET);
        while (!feof(fichier)) {
            caractereLu = fgetc(fichier);
            temp[i] = caractereLu;
            ++i;
        }
        --i;
        temp[i] = '\n';
        ++i;
    }
    fclose(fichier);

    //on rajoute le nouveau mot
    for (j = 0;j<=tailleMot;++j) {
        temp[i+j] = mot[j];
    }

    //on réécrie test dans le fichier
    fichier = fopen("listeDebug.txt", "w");
    for (unsigned int z=0;z<=i+j;++z) {
        fputc(temp[z], fichier);
    }
    fclose(fichier);
}

void remplirTableau(int taille, char** tab) {
    int ligneFichier;
    int i = 0;
    bool motplace = 0;
    if (taille == 5) {
        char chaine[6] = "";
        chaine[5] = '\0';
        for (i=0;i<3;i++) {
            while (motplace == 0) {
                //on prend un mot au pif
                ligneFichier = rand()%(2500 - 1) +1;
                FILE* fichier;
                fichier = fopen("5lettres.txt", "r");
                if (fichier != NULL) {
                    while (ligneFichier > 0) {
                        char caractereLu;
                        caractereLu = fgetc(fichier);
                        if (caractereLu == '\n') {
                            ligneFichier--;
                        }
                    }
                    fgets(chaine, 6, fichier);
                }
                //on remplie le tableau
                motplace = placeDansTab(tab, chaine, taille);
                fclose(fichier);
            }
            //Sleep(1000);
        } 
    }
    if (taille == 6) {
        char chaine[7] = "";
        for (i=0;i<6;i++) {
            ligneFichier = rand()%(5500 - 1) +1;
            FILE* fichier;
            fichier = fopen("6lettres.txt", "r");
            if (fichier != NULL) {
                while (ligneFichier > 0) {
                    char caractereLu;
                    caractereLu = fgetc(fichier);
                    if (caractereLu == '\n') {
                        ligneFichier--;
                    }
                }
                fgets(chaine, 7, fichier);
            }
            placeDansTab(tab, chaine, taille);
            fclose(fichier);
        }
    }
    if (taille == 7) {
        char chaine[8] = "";
        for (i=0;i<7;i++) {
            ligneFichier = rand()%(6000 - 1) +1;
            FILE* fichier;
            fichier = fopen("7lettres.txt", "r");
            if (fichier != NULL) {
                while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 8, fichier);
            }
            placeDansTab(tab, chaine, taille);
            fclose(fichier);
        }
    }
    if (taille == 8) {
        char chaine[9] = "";
        for (i=0;i<8;i++) {
            ligneFichier = rand()%(6000 - 1) +1;
            FILE* fichier;
            fichier = fopen("8lettres.txt", "r");
            if (fichier != NULL) {
                while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 9, fichier);
            }
            placeDansTab(tab, chaine, taille);
            fclose(fichier);
        }
    }
    if (taille == 9) {
        char chaine[10] = "";
        for (i=0;i<9;i++) {
            ligneFichier = rand()%(6000 - 1) +1;
            FILE* fichier;
            fichier = fopen("9lettres.txt", "r");
            if (fichier != NULL) {
                while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 10, fichier);
            }
            placeDansTab(tab, chaine, taille);
            fclose(fichier);
        }
    }
    if (taille == 10) {
        char chaine[10] = "";
        for (i=0;i<10;i++) {
            ligneFichier = rand()%(6000 - 1) +1;
            FILE* fichier;
            fichier = fopen("9lettres.txt", "r");
            if (fichier != NULL) {
                while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 10, fichier);
            }
            placeDansTab(tab, chaine, taille);
            fclose(fichier);
        }
    }
}

void motFinal(int taille, char** tab, char* motFinal) {
    //var lignes
    int i = 0;
    //var colonnes
    int j = 0;
    //var char de la chaine
    int x = 0;
    //nombre de . dans le tableau
    int trou = 0;
    int ligneFichier;
    //compte les trous
    for (i=0;i<taille;i++) {
        for (j=0;j<taille;j++) {
            if (tab[i][j] == '.') {
                trou++;
            }
        }
    }
    //remplie 3 trous
    if (trou == 3) {
        ligneFichier = rand()%(1500 - 1) +1;
        FILE* fichier;
        char chaine[4] = "";
        chaine[3] = '\0';
        fichier = fopen("motFinal3.txt", "r");
        if (fichier != NULL) {
            while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 3, fichier);
            for (i=0;i<4;i++) {
                motFinal[i] = chaine[i];
            }
        }
        for (i=0;i<taille;i++) {
            for (j=0;j<taille;j++) {
                if (tab[i][j] == '.') {
                    tab[i][j] = chaine[x];
                    x++;
                }
            }
        }
        fclose(fichier);
    }
    //remplie 4 trous
    if (trou == 4) {
        ligneFichier = rand()%(4000 - 1) +1;
        FILE* fichier;
        char chaine[5] = "";
        chaine[4] = '\0';
        fichier = fopen("motFinal4.txt", "r");
        if (fichier != NULL) {
            while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 4, fichier);
            for (i=0;i<5;i++) {
                motFinal[i] = chaine[i];
            }
        }
        for (i=0;i<taille;i++) {
            for (j=0;j<taille;j++) {
                if (tab[i][j] == '.') {
                    tab[i][j] = chaine[x];
                    x++;
                }
            }
        }
        fclose(fichier);
    }
    //remplie 5 trous
    if (trou == 5) {
        ligneFichier = rand()%(2500 - 1) +1;
        FILE* fichier;
        char chaine[6] = "";
        chaine[5] = '\0';
        fichier = fopen("motFinal5.txt", "r");
        if (fichier != NULL) {
            while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 5, fichier);
            for (i=0;i<6;i++) {
                motFinal[i] = chaine[i];
            }
        }
        for (i=0;i<taille;i++) {
            for (j=0;j<taille;j++) {
                if (tab[i][j] == '.') {
                    tab[i][j] = chaine[x];
                    x++;
                }
            }
        }
        fclose(fichier);
    }
    //remplie 6 trous
    if (trou == 6) {
        ligneFichier = rand()%(5000 - 1) +1;
        FILE* fichier;
        char chaine[7] = "";
        chaine[6] = '\0';
        fichier = fopen("motFinal6.txt", "r");
        if (fichier != NULL) {
            while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 6, fichier);
            for (i=0;i<7;i++) {
                motFinal[i] = chaine[i];
            }
        }
        for (i=0;i<taille;i++) {
            for (j=0;j<taille;j++) {
                if (tab[i][j] == '.') {
                    tab[i][j] = chaine[x];
                    x++;
                }
            }
        }
        fclose(fichier);
    }
    //remplie 7 trous
    if (trou == 7) {
        ligneFichier = rand()%(5000 - 1) +1;
        FILE* fichier;
        char chaine[8] = "";
        chaine[7] = '\0';
        fichier = fopen("motFinal7.txt", "r");
        if (fichier != NULL) {
            while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 7, fichier);
            for (i=0;i<8;i++) {
                motFinal[i] = chaine[i];
            }
        }
        for (i=0;i<taille;i++) {
            for (j=0;j<taille;j++) {
                if (tab[i][j] == '.') {
                    tab[i][j] = chaine[x];
                    x++;
                }
            }
        }
        fclose(fichier);
    }
    //remplie 8 trous
    if (trou == 8) {
        ligneFichier = rand()%(2500 - 1) +1;
        FILE* fichier;
        char chaine[9] = "";
        chaine[8] = '\0';
        fichier = fopen("motFinal8.txt", "r");
        if (fichier != NULL) {
            while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 8, fichier);
            for (i=0;i<9;i++) {
                motFinal[i] = chaine[i];
            }
        }
        for (i=0;i<taille;i++) {
            for (j=0;j<taille;j++) {
                if (tab[i][j] == '.') {
                    tab[i][j] = chaine[x];
                    x++;
                }
            }
        }
        fclose(fichier);
    }
    //remplie 9 trous
    if (trou == 9) {
        ligneFichier = rand()%(2500 - 1) +1;
        FILE* fichier;
        char chaine[10] = "";
        chaine[9] = '\0';
        fichier = fopen("motFinal8.txt", "r");
        if (fichier != NULL) {
            while (ligneFichier > 0) {
                char caractereLu;
                caractereLu = fgetc(fichier);
                if (caractereLu == '\n') {
                    ligneFichier--;
                }
            }
            fgets(chaine, 9, fichier);
            for (i=0;i<10;i++) {
                motFinal[i] = chaine[i];
            }
        }
        for (i=0;i<taille;i++) {
            for (j=0;j<taille;j++) {
                if (tab[i][j] == '.') {
                    tab[i][j] = chaine[x];
                    x++;
                }
            }
        }
        fclose(fichier);
    }
}

bool imprimer(int taille, char** tab) {
    int i = 0;
    int j = 0;
    FILE* fichier;
    fichier = fopen("imprimer.txt", "w");
    for (i=0;i<taille;i++) {
        for (j=0;j<taille;j++) {
            fputc(tab[i][j], fichier);
        }
        fputc('\n', fichier);
    }
    fclose(fichier);
    return 1;
}

char** creationTableau (double taille, char* dernierMot) {
    srand(time(NULL));
    //var lignes
    int i = 0;
    //var colonnes
    int j = 0;
    //créer le tableau
    char** tab = (char**)malloc(sizeof(char*) * taille);
    for (i=0;i<taille;i++) {
        tab[i]=(char*)malloc(sizeof(char) * taille);
    }
    for (i=0;i<taille;i++) {
        for (j=0;j<taille;j++) {
            tab[i][j] = '.';
        }
    }
    //remplie le tableau
    remplirTableau(taille, tab);
    //genere le mot final
    //motFinal(taille, tab, dernierMot);
    //genere le fichier txt a imprimer
    imprimer(taille, tab);

    //renvoie le tableau completé
    return tab;
}
