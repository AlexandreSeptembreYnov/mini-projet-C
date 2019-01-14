#include "motcacher.h"
int main(void)
{
    char **tab = initTableau();
    for(int x = 0 ; x < TAILLE ; x++)
    {
        for(int y = 0; y < TAILLE; y++)
        {
            printf("%c",tab[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

