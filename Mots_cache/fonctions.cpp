int HorizontalDroit(int x, int y, char* labbel, int taille){
    int nbPlacements = 0;
    while (nbPlacements < taille) {

    }
};

int HorizontalInverse(int x, int y, char* labbel, int taille){

};

int VerticaleDroit(int x, int y, char* labbel, int taille){

};

int VerticaleInverse(int x, int y, char* labbel, int taille){

};

int DiagonaleDroiteDroit(int x, int y, char* labbel, int taille){

};

int DiagonaleDroiteInverse(int x, int y, char* labbel, int taille){

};

int DiagonaleGaucheDroit(int x, int y, char* labbel, int taille){

};

int DiagonaleGaucheInverse(int x, int y, char* labbel, int taille){

};

void error(){

};




int PlacerMotHorizontal(int sens, int x, int y, int taille, char* labbel){
    switch(sens){
        case 0:
            HorizontalDroit(x,y,labbel,taille);
            break;
        case 1:
            HorizontalInverse(x,y,labbel,taille);
            break;
        default:
            error();
    }
};

int PlacerMotVertical(int sens, int x, int y, int taille, char* labbel){
    switch(sens){
        case 0:
            VerticaleDroit(x,y,labbel,taille);
            break;
        case 1:
            VerticaleInverse(x,y,labbel,taille);
            break;
        default:
            error();
    }
};

int PlacerMotDiagonaleDroite(int sens, int x, int y, int taille, char* labbel){
    switch(sens){
        case 0:
            DiagonaleDroiteDroit(x,y,labbel,taille);
            break;
        case 1:
            DiagonaleDroiteInverse(x,y,labbel,taille);
            break;
        default:
            error();
    }
};

int PlacerMotDiagonaleGauche(int sens, int x, int y, int taille, char* labbel){
    switch(sens){
        case 0:
            DiagonaleGaucheDroit(x,y,labbel,taille);
            break;
        case 1:
            DiagonaleGaucheInverse(x,y,labbel,taille);
            break;
        default:
            error();
    }
};



int PlacerLettre(){

};

int Annuler(){

};




