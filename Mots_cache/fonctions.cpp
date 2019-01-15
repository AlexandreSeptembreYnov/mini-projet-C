#include <motcacher.h>

int HorizontalDroit(int x, int y, Mot e, char*** tab){
    int position= 0;
    int error = 0;
    while (position< e.taille && error != 1) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
            PlacerLettre(x,y,*tab,lettre);
            x = x+1;
        }
        else{
            AnnulerHorizDroit(x,y,position,*tab);
            error = 1;
        }
    }
};

int AnnulerHorizDroit(int x, int y, int position, char*** tab){
    int a = 0;
    while (position > 0){
        *tab[x][y] = '.';
        x=x-1;
        position = position - 1;
    }
};

int HorizontalInverse(int x, int y, Mot e, char*** tab){
    int position = 0;
    int error = 0;
    while (position < e.taille &&  error != 1) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        x = x-1;
        }
        else{
            AnnulerHorizInverse(x,y,position,*tab);
        }

    }

};

int AnnulerHorizInverse(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x+1;
        position = position - 1;
    }
};

int VerticaleDroit(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        PlacerLettre(x,y,*tab,lettre);
        y = y+1;
    }
};

int AnnulerVertDroit(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        y=y-1;
        position = position - 1;
    }
};

int VerticaleInverse(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        PlacerLettre(x,y,*tab,lettre);
        y = y-1;
    }
};

int AnnulerVertInverse(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        y=y+1;
        position = position - 1;
    }
};

int DiagonaleHautDroite(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        PlacerLettre(x,y,*tab,lettre);
        x = x+1;
        y= y-1;
    }
};


int AnnulerHautDroit(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x-1;
        y=y+1;
        position = position - 1;
    }
};


int DiagonaleBasGauche(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        PlacerLettre(x,y,*tab,lettre);
        x = x-1;
        y= y+1;
    }
};

int AnnulerBasGauche(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x+1;
        y=y-1;
        position = position - 1;
    }
};

int DiagonaleHautGauche(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        PlacerLettre(x,y,*tab,lettre);
        x = x-1;
        y= y-1;
    }
};

int AnnulerHautGauche(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x+1;
        y=y+1;
        position = position - 1;
    }
};

int DiagonaleBasDroite(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        PlacerLettre(x,y,*tab,lettre);
        x = x+1;
        y= y+1;
    }
};

int AnnulerBasDroit(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x-1;
        y=y-1;
        position = position - 1;
    }
};

void error(){
    EXIT_FAILURE;
};




int PlacerMotHorizontal(int sens, int x, int y, Mot e, char **tab){
    switch(sens){
        case 0:
            HorizontalDroit(x,y,e,tab);
            break;
        case 1:
            HorizontalInverse(x,y,e,tab);
            break;
        default:
            error();
    }
};

int PlacerMotVerticale(int sens, int x, int y, Mot e, char **tab){
    switch(sens){
        case 0:
            VerticaleDroit(x,y,e,tab);
            break;
        case 1:
            VerticaleInverse(x,y,e,tab);
            break;
        default:
            error();
    }
};




int PlacerMotDiagonaleDroite(int sens, int x, int y, Mot e, char **tab){
    switch(sens){
        case 0:
            DiagonaleHautDroite(x,y,e,tab);
            break;
        case 1:
            DiagonaleBasGauche(x,y,e,tab);
            break;
        default:
            error();
    }
};



int PlacerMotDiagonaleGauche(int sens, int x, int y, Mot e, char **tab){
    switch(sens){
        case 0:
            DiagonaleHautGauche(x,y,e,tab);
            break;
        case 1:
            DiagonaleBasDroite(x,y,e,tab);
            break;
        default:
            error();
    }
};



int PlacerLettre(int x, int y, char** tab, char lettre){
        tab[x][y] = lettre;
};

int PlacerMot(Mot e, char **tab){
    int sens = e.Sens;
    int x = e.xDebut;
    int y = e.yDebut;

    switch(e.Direction){
    case 1:
        PlacerMotHorizontal(sens,x,y,e,tab);
        break;
    case 2:
        PlacerMotVerticale(sens,x,y,e,tab);
        break;
    case 3:
        PlacerMotDiagonaleDroite(sens,x,y,e,tab);
        break;
    case 4:
        PlacerMotDiagonaleGauche(sens,x,y,e,tab);
        break;
    default:
        error();
        break;
    }

}

