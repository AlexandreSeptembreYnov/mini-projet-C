#include "motcacher.h"

typedef char* Ligne;
typedef Ligne* Tableau;

char **initTableau()
{
    char **tab = (Tableau)malloc(sizeof(Ligne) * TAILLE);
    for (unsigned i = 0; i <= TAILLE; i++)
    {
        tab[i] = (Ligne)malloc(sizeof(char) * TAILLE);
    }
    for(int x = 0 ; x <= TAILLE ; x++)
    {
        for(int y = 0; y <= TAILLE; y++)
        {
            tab[x][y] = '.';
        }
    }
    return tab;
}
Mot* creationMot(char * str){
    int i = 0;
    //malloc du mot
      Mot * mot = (Mot *) malloc(sizeof(Mot));

      //securité
      if(mot == NULL)
        EXIT_FAILURE;

      //malloc du next
      mot->next = NULL;

      //malloc du labbel
      mot->labbel = strdup(str);
      //securité
      if(mot->labbel == NULL)
        EXIT_FAILURE;
      //taille du mot
      mot->taille = strlen(str);
      if(mot->taille == NULL)
        EXIT_FAILURE;
      if(mot->taille > TAILLE){
          free(mot);
          return 0;
      }
      srand(time(NULL));
      mot->Sens = sens(rand()%(2));
      mot->Direction = direction(rand()%(5)+1);
      if(mot->Direction == NULL)
        EXIT_FAILURE;
      mot->xDebut = rand()%(TAILLE);
      mot->yDebut = rand()%(TAILLE);
      //return value
      return mot;
    }
Liste* creationListe()
{

}

int AddElementAtEnd(Liste l, Mot e){
   int ret = 1;
   Mot *tmp;
   int vide = 0;
   if (l.head=NULL)
       vide = 1;
   if (!vide)
   {
       tmp = l.head;
       while (tmp->next) {
           tmp = tmp->next;
       }
       tmp->next = &e;
   }
   else {
       ret = 0;
   }
   return ret;
}
