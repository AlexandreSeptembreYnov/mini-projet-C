#include "motcacher.h"
int main(void)
{
    int nbInputs = 8;
    int k = 0;
    Liste *li = creationListe();
    remplirListe(*li);
    char **tab = initTableau();
     Mot e = *li->head;
     for(int x = 0 ; x < TAILLE ; x++)
     {
        for(int y = 0; y < TAILLE; y++)
     {

//
  //              PlacerMot(e,tab);
//
                e = *e.next;
                printf("%s",*e.labbel);
                printf("\n");
    //            k++;
      //      printf("%c",tab[x][y]);
        }
        printf("\n");
    }
    printf("\n");






    return 0;
}

