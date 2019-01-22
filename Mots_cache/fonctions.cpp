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
            position = 0;
            randomMot(e);
        }
    }
};
void randomMot (Mot e)
{
  srand(time(NULL));
  e.xDebut = rand()%(TAILLE);
  e.yDebut = rand()%(TAILLE);
}
int AnnulerHorizDroit(int x, int y, int position, char*** tab){
    int a = 0;
    while (position > 0){
        *tab[x][y] = '.';
        x=x-1;
        position = position - 1;
    }
};

void HorizontalInverse(int x, int y, Mot e, char*** tab){
    int position = 0;
    int error = 0;
    while (position < e.taille &&  error != 1) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        x = x-1;
        position++;
        }

        else{
            AnnulerHorizInverse(x,y,position,*tab);
            position = 0;
            randomMot(e);

        }


    }

};

void AnnulerHorizInverse(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x+1;
        position = position - 1;
    }
};

void VerticaleDroit(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        y = y+1;
        position++;
        }

        else{
            AnnulerVertDroit(x,y,position,*tab);
            position = 0;
            randomMot(e);

        }
    }
};

void AnnulerVertDroit(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        y=y-1;
        position = position - 1;
    }
};

void VerticaleInverse(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        y = y-1;
        position++;
        }

        else{
            AnnulerVertInverse(x,y,position,*tab);
            position = 0;
            randomMot(e);

        }
    }
};

void AnnulerVertInverse(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        y=y+1;
        position = position - 1;
    }
};

void DiagonaleHautDroite(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        x = x+1;
        y = y-1;
        position++;
        }

        else{
            AnnulerHautDroit(x,y,position,*tab);
            position = 0;
            randomMot(e);

        }
    }
};


void AnnulerHautDroit(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x-1;
        y=y+1;
        position = position - 1;
    }
};


void DiagonaleBasGauche(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        x = x-1;
        y = y+1;
        position++;
        }

        else{
            AnnulerBasGauche(x,y,position,*tab);
            position = 0;
            randomMot(e);

        }
    }
};

void AnnulerBasGauche(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x+1;
        y=y-1;
        position = position - 1;
    }
};

void DiagonaleHautGauche(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        x = x-1;
        y = y-1;
        position++;
        }

        else{
            AnnulerHautGauche(x,y,position,*tab);
            position = 0;
            randomMot(e);

        }
    }
};

void AnnulerHautGauche(int x, int y, int position, char*** tab){
    while (position > 0){
        *tab[x][y] = '.';
        x=x+1;
        y=y+1;
        position = position - 1;
    }
};

void DiagonaleBasDroite(int x, int y, Mot e, char*** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (*tab[x][y] == lettre || *tab[x][y] == '.'){
        PlacerLettre(x,y,*tab,lettre);
        x = x+1;
        y = y+1;
        position++;
        }

        else{
            AnnulerBasDroit(x,y,position,*tab);
            position = 0;
            randomMot(e);

        }
    }
};

void AnnulerBasDroit(int x, int y, int position, char*** tab){
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
    return 1;
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
    return 1;
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
    return 1;
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
    return 1;
};



int PlacerLettre(int x, int y, char** tab, char lettre){
        tab[x][y] = lettre;
        return 1;
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
    return 1;
}
