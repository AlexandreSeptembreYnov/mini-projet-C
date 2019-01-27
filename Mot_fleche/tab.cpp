#include <mainwindow.h>

bool placeDansTab(char **tab, char *str, int taille)
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
    int compteurDessais = 0;

    x = rand()%(taille);
    y = rand()%(taille);
    dir = rand()%(4);
    switch (dir) {
    case 0:
    {
            while (!isok) {
                ++compteurDessais;
                if (((x + taille_mot) <= taille) || ((x - taille_mot) >= 0))
                {
                    if ((x + taille_mot) <= taille)
                    {
                        droit=1;
                        p = x;
                        m = x;
                        isok = 1;
                        for (int i = 0; i<taille_mot;++i) {
                            if (tab[p][m] != str[i] && tab[p][m] != '.') {
                                isok = 0;
                            }
                            p = p + droit - gauche;
                            m = m + bas - haut;
                        }
                    }
                    else
                    {

                        gauche=1;
                        p = x;
                        m = x;
                        isok = 1;
                        for (int i = 0; i<taille_mot;++i) {
                            if (tab[p][m] != str[i] && tab[p][m] != '.') {
                                isok = 0;
                            }
                            p = p + droit - gauche;
                            m = m + bas - haut;
                        }
                    }

                }
                else
                {
                    x = rand()%(taille);
                    y = rand()%(taille);
                }
                //si on a pas isok a cause de la verif, on random a nouveau
                if (!isok) {
                    x = rand()%(taille);
                    y = rand()%(taille);
                }
                //on verifie que que le mot soit placable
                if (compteurDessais == 3 && !isok) {
                    return 0;
                }
            }
            break;

    }
    case 1:
    {
        while (!isok) {
            if (((y + taille_mot) <= taille) || ((y - taille_mot) >= 0))
            {
               if ((y+taille_mot) <= taille)
               {
                   bas = 1;
                   p = x;
                   m = x;
                   isok = 1;
                   for (int i = 0; i<taille_mot;++i) {
                       if (tab[p][m] != str[i] && tab[p][m] != '.') {
                           isok = 0;
                       }
                       p = p + droit - gauche;
                       m = m + bas - haut;
                   }
               }
               else
               {
                   haut=1;
                   p = x;
                   m = x;
                   isok = 1;
                   for (int i = 0; i<taille_mot;++i) {
                       if (tab[p][m] != str[i] && tab[p][m] != '.') {
                           isok = 0;
                       }
                       p = p + droit - gauche;
                       m = m + bas - haut;
                   }
               }

            }
            else
            {
                x = rand()%(taille);
                y = rand()%(taille);
            }
            //si on a pas isok a cause de la verif, on random a nouveau
            if (!isok) {
                x = rand()%(taille);
                y = rand()%(taille);
            }
            //on verifie que que le mot soit placable
            if (compteurDessais == 3 && !isok) {
                return 0;
            }
        }
        break;
    }
    case 2:
    {
        while (!isok) {
            if ((((x - taille_mot) >= 0) && ((y + taille_mot) <= taille)) || (((y - taille_mot) >= 0) && ((x + taille_mot) <= taille)))
            {
                if (((x + taille_mot) <= taille) && ((y - taille_mot) >= 0))
                {
                    haut = 1;
                    droit = 1;
                    p = x;
                    m = x;
                    isok = 1;
                    for (int i = 0; i<taille_mot;++i) {
                        if (tab[p][m] != str[i] && tab[p][m] != '.') {
                            isok = 0;
                        }
                        p = p + droit - gauche;
                        m = m + bas - haut;
                    }
                }
                else if (((x - taille_mot) >= 0) && ((y + taille_mot) <= taille))
                {
                    bas = 1;
                    gauche = 1;
                    p = x;
                    m = x;
                    isok = 1;
                    for (int i = 0; i<taille_mot;++i) {
                        if (tab[p][m] != str[i] && tab[p][m] != '.') {
                            isok = 0;
                        }
                        p = p + droit - gauche;
                        m = m + bas - haut;
                    }
                }
            }
            else
            {
                x = rand()%(taille);
                y = rand()%(taille);
            }
            //si on a pas isok a cause de la verif, on random a nouveau
            if (!isok) {
                x = rand()%(taille);
                y = rand()%(taille);
            }
            //on verifie que que le mot soit placable
            if (compteurDessais == 3 && !isok) {
                return 0;
            }
        }
        break;
    }
    case 3:
    {
        while (!isok) {
            if ((((x + taille_mot) <= taille) && ((y + taille_mot) <= taille)) ||(((x - taille_mot) >= 0) && ((y - taille_mot) >= 0)))
            {
                if (((x + taille_mot) <= taille) && ((y + taille_mot) <= taille))
                {
                    droit = 1;
                    bas = 1;
                    p = x;
                    m = x;
                    isok = 1;
                    for (int i = 0; i<taille_mot;++i) {
                        if (tab[p][m] != str[i] && tab[p][m] != '.') {
                            isok = 0;
                        }
                        p = p + droit - gauche;
                        m = m + bas - haut;
                    }
                }
                else if (((x - taille_mot) >= 0) && ((y - taille_mot) >= 0))
                {
                    gauche = 1;
                    haut = 1;
                    p = x;
                    m = x;
                    isok = 1;
                    for (int i = 0; i<taille_mot;++i) {
                        if (tab[p][m] != str[i] && tab[p][m] != '.') {
                            isok = 0;
                        }
                        p = p + droit - gauche;
                        m = m + bas - haut;
                    }
                }
            }
            else
            {
                x = rand()%(taille);
                y = rand()%(taille);
            }
            //si on a pas isok a cause de la verif, on random a nouveau
            if (!isok) {
                x = rand()%(taille);
                y = rand()%(taille);
            }
            //on verifie que que le mot soit placable
            if (compteurDessais == 3 && !isok) {
                return 0;
            }
        }
        break;
    }
    default:
    {
        EXIT_FAILURE;
        break;
    }
    }
    for(int i = 0 ; str[i] != '\0'; i++)
    {
        tab[x][y] = str[i];
        x = x +droit - gauche;
        y = y + bas - haut;
    }
    //crée la liste de mot
    listeDebug(str);
    return 1;
}
