#include <stdio.h>
#include <string.h>

#define TMAX 100 
#define TITRE_LEN 50
#define ISBN_LEN 8

typedef struct
{
    char titre[TITRE_LEN];
    int isbn[ISBN_LEN];
} Livre;

Livre mediatheque[TMAX];
int nbLivres = 0;

// Question 2.a: Fonction d'initialisation
void init_mediatheque() {
    nbLivres = 0;
}

int main() {
    init_mediatheque();
    printf("Mediatheque initialisee. Nombre de livres: %d\n", nbLivres);
    return 0;
}