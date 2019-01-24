#include <motcacher.h>
#include <mainwindow.h>

void error(){
    EXIT_FAILURE;
}

int AnnulerHorizDroit(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        x=x-1;
        position = position - 1;
    }
    return 1;
}

void AnnulerHorizInverse(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        x=x+1;
        position = position - 1;
    }
}

void AnnulerVertDroit(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        y=y-1;
        position = position - 1;
    }
}

void AnnulerVertInverse(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        y=y+1;
        position = position - 1;
    }
}

void AnnulerHautDroit(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        x=x-1;
        y=y+1;
        position = position - 1;
    }
}

void AnnulerBasGauche(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        x=x+1;
        y=y-1;
        position = position - 1;
    }
}

void AnnulerHautGauche(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        x=x+1;
        y=y+1;
        position = position - 1;
    }
}

void AnnulerBasDroit(int x, int y, int position, char** tab){
    while (position > 0){
        tab[x][y] = '.';
        x=x-1;
        y=y-1;
        position = position - 1;
    }
}

int PlacerLettre(int x, int y, char** tab, char lettre){
        tab[x][y] = lettre;
        return 1;
}

void randomMot (Mot e)
{
  srand(time(NULL));
  e.xDebut = rand()%(TAILLE);
  e.yDebut = rand()%(TAILLE);
}

int HorizontalDroit(int x, int y, Mot e, char** tab){
    int position= 0;
    int error = 0;
    while (position< e.taille && error != 1) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
            PlacerLettre(x,y,tab,lettre);
            x = x+1;
        }
        else{
            AnnulerHorizDroit(x,y,position,tab);
            position = 0;
            randomMot(e);
        }
    }
    return 1;
}

void HorizontalInverse(int x, int y, Mot e, char** tab){
    int position = 0;
    int error = 0;
    while (position < e.taille &&  error != 1) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
        PlacerLettre(x,y,tab,lettre);
        x = x-1;
        position++;
        }

        else{
            AnnulerHorizInverse(x,y,position,tab);
            position = 0;
            randomMot(e);

        }


    }

}

void VerticaleDroit(int x, int y, Mot e, char** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
        PlacerLettre(x,y,tab,lettre);
        y = y+1;
        position++;
        }

        else{
            AnnulerVertDroit(x,y,position,tab);
            position = 0;
            randomMot(e);

        }
    }
}

void VerticaleInverse(int x, int y, Mot e, char** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
        PlacerLettre(x,y,tab,lettre);
        y = y-1;
        position++;
        }

        else{
            AnnulerVertInverse(x,y,position,tab);
            position = 0;
            randomMot(e);

        }
    }
}

void DiagonaleHautDroite(int x, int y, Mot e, char** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
        PlacerLettre(x,y,tab,lettre);
        x = x+1;
        y = y-1;
        position++;
        }

        else{
            AnnulerHautDroit(x,y,position,tab);
            position = 0;
            randomMot(e);

        }
    }
}




void DiagonaleBasGauche(int x, int y, Mot e, char** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
        PlacerLettre(x,y,tab,lettre);
        x = x-1;
        y = y+1;
        position++;
        }

        else{
            AnnulerBasGauche(x,y,position,tab);
            position = 0;
            randomMot(e);

        }
    }
}



void DiagonaleHautGauche(int x, int y, Mot e, char** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
        PlacerLettre(x,y,tab,lettre);
        x = x-1;
        y = y-1;
        position++;
        }

        else{
            AnnulerHautGauche(x,y,position,tab);
            position = 0;
            randomMot(e);

        }
    }
}



void DiagonaleBasDroite(int x, int y, Mot e, char** tab){
    int position = 0;
    while (position < e.taille) {
        char lettre = e.labbel[position];
        if (tab[x][y] == lettre || tab[x][y] == '.'){
        PlacerLettre(x,y,tab,lettre);
        x = x+1;
        y = y+1;
        position++;
        }

        else{
            AnnulerBasDroit(x,y,position,tab);
            position = 0;
            randomMot(e);

        }
    }
}

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
}

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
}

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
}

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
}


char **placeDansTab(char **tab, char *str, int taille)
{
    int x;
    int y;
    int dir;
    int taille_mot = strlen(str);
    int isok = 0;
    int gauche = 0;
    int droit = 0;
    int haut = 0;
    int bas = 0;
    int p;
    int m;
    srand(time(NULL));
    x = rand()%(taille);
    y = rand()%(taille);
    dir = rand()%(4);
    switch (dir) {
    case 0:
    {
            while (!isok) {
                if (((x + taille_mot) <= (taille-1)) || ((x - taille_mot) >= 0))
                {
                    if ((x + taille_mot) <= (taille-1))
                    {
                        droit=1;
                        p = x;
                        m = x;
                        for(int i = 0 ; str[i]; i++)
                        {
                            if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                            {
                                p = p +droit - gauche;
                                m = m + bas - haut;
                            }
                            else {
                                break;
                            }
                        }
                        isok = 1;
                    }
                    else
                    {

                        gauche=1;
                        p = x;
                        m = x;
                        for(int i = 0 ; str[i]; i++)
                        {
                            if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                            {
                                p = p +droit - gauche;
                                m = m + bas - haut;
                            }
                            else {
                                break;
                            }
                        }
                        isok = 1;
                    }

                }
                else
                {
                    x = rand()%(taille);
                    y = rand()%(taille);
                }
            }
            break;

    }
    case 1:
    {
        while (!isok) {
            if (((y + taille_mot) <= (taille-1)) || ((y - taille_mot) >= 0))
            {
               if ((y+taille_mot) <= (taille - 1))
               {
                   bas = 1;
                   p = x;
                   m = x;
                   for(int i = 0 ; str[i]; i++)
                   {
                       if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                       {
                           p = p +droit - gauche;
                           m = m + bas - haut;
                       }
                       else {
                           break;
                       }
                   }
                   isok = 1;
               }
               else
               {
                   haut=1;
                   p = x;
                   m = x;
                   for(int i = 0 ; str[i]; i++)
                   {
                       if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                       {
                           p = p +droit - gauche;
                           m = m + bas - haut;
                       }
                       else {
                           break;
                       }
                   }
                   isok = 1;
               }

            }
            else
            {
                x = rand()%(taille);
                y = rand()%(taille);
            }
        }
        break;
    }
    case 2:
    {
        while (!isok) {
            if ((((x - taille_mot) >= 0) && ((y + taille_mot) <= (taille-1))) || (((y - taille_mot) >= 0) && ((x + taille_mot) <= (taille-1))))
            {
                if (((x + taille_mot) <= (taille-1)) && ((y - taille_mot) >= 0))
                {
                    haut = 1;
                    droit = 1;
                    p = x;
                    m = x;
                    for(int i = 0 ; str[i]; i++)
                    {
                        if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                        {
                            p = p +droit - gauche;
                            m = m + bas - haut;
                        }
                        else {
                            break;
                        }
                    }
                    isok = 1;
                }
                else if (((x - taille_mot) >= 0) && ((y + taille_mot) <= (taille-1)))
                {
                    bas = 1;
                    gauche = 1;
                    p = x;
                    m = x;
                    for(int i = 0 ; str[i]; i++)
                    {
                        if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                        {
                            p = p +droit - gauche;
                            m = m + bas - haut;
                        }
                        else {
                            break;
                        }
                    }
                    isok = 1;
                }
            }
            else
            {
                x = rand()%(taille);
                y = rand()%(taille);
            }
        }
        break;
    }
    case 3:
    {
        while (!isok) {
            if ((((x + taille_mot) <= (taille-1)) && ((y + taille_mot) <= (taille-1))) ||(((x - taille_mot) >= 0) && ((y - taille_mot) >= 0)))
            {
                if (((x + taille_mot) <= (taille-1)) && ((y + taille_mot) <= (taille-1)))
                {
                    droit = 1;
                    bas = 1;
                    p = x;
                    m = x;
                    for(int i = 0 ; str[i]; i++)
                    {
                        if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                        {
                            p = p +droit - gauche;
                            m = m + bas - haut;
                        }
                        else {
                            break;
                        }
                    }
                    isok = 1;
                }
                else if (((x - taille_mot) >= 0) && ((y - taille_mot) >= 0))
                {
                    gauche = 1;
                    haut = 1;
                    p = x;
                    m = x;
                    for(int i = 0 ; str[i]; i++)
                    {
                        if ((tab[p][m] == str[i]) || (tab[p][m]  =='.'))
                        {
                            p = p +droit - gauche;
                            m = m + bas - haut;
                        }
                        else {
                            break;
                        }
                    }
                    isok = 1;
                }
            }
            else
            {
                x = rand()%(taille);
                y = rand()%(taille);
            }
            break;
        }
    }
    default:
    {
        EXIT_FAILURE;
        break;
    }
    }
    for(int i = 0 ; str[i]; i++)
    {
        tab[x][y] = str[i];
    }
    return tab;
}
