#include "motcacher.h"
#include <mainwindow.h>

typedef char* Ligne;
typedef Ligne* Tableau;

char **initTableau(){

    char **tab = (Tableau)malloc(sizeof(Ligne) * 8);
    for (unsigned i = 0; i < 8; i++){
     tab[i] = (Ligne)malloc(sizeof(char) * 8);
    }
    for(int x = 0 ; x < TAILLE ; x++){
        for(int y = 0; y < TAILLE; y++){
            tab[x][y] = '.';
        }
    }
    return tab;
}

Mot* creationMot(char* str){
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

Liste* creationListe(){
    Liste *l;
    l = (Liste*)malloc(sizeof (Liste*));
    if (l == NULL)
        EXIT_FAILURE;
    l->head=NULL;
    return l;
}

int AddElementAtEnd(Liste l, Mot e){
    int ret = 1;
    Mot *tmp;
    int vide = 0;
    if (l.head=NULL)
    vide = 1;
    if (!vide){
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

void AddFirstElement(Liste l,Mot e){
    *l.head = e;
    }

void remplirListe(Liste l){
    char chaine[8] = "";
    FILE* fichier = NULL;
    fichier = fopen("Dictionnaire.txt", "r+");
    fseek(fichier, 0, SEEK_SET);
    if (fichier != NULL)
        {
        fgets(chaine,8, fichier);
        Mot *e = creationMot(chaine);
        AddFirstElement(l,*e);
        while (fgets(chaine,8, fichier)!=NULL) {
            fgets(chaine,8, fichier);
            e = creationMot(chaine);
            AddElementAtEnd(l,*e);
            fseek(fichier, strlen(chaine)+2, SEEK_CUR);
        }
            fclose(fichier);
        }
}
