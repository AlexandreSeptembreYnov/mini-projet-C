#include "motcacher.h"
int main(void)
{
    int nbInputs = 8;
    int k = 0;
    Liste *li = creationListe();
    remplirListe(*li);
    char **tab = initTableau();
    for(int x = 0 ; x < TAILLE ; x++)
    {
        for(int y = 0; y < TAILLE; y++)
        {
                Mot e;

                PlacerMot(e,tab);

                e.next;
                k++;
            printf("%c",tab[x][y]);
        }
        printf("\n");
    }
    printf("\n");






    return 0;
}

