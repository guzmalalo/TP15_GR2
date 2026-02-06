#include <stdio.h>
#include <string.h>

#define TMAX 50

int nbOcurrences(char source[TMAX], char aChercher) {
    int compte = 0;
    for (int i = 0; source[i]!='\0'; ++i) {
        if (source[i]== aChercher) {
            compte++;
        }
    }

    return compte;
}

int main() {
    // variables
    char tab[TMAX];
    char aChercher;

    // input
    printf("Entrez une phrase :");
    fgets(tab,TMAX,stdin);
    tab[strlen(tab)-1] = '\0'; // on transforme le \n en \0

    printf("Entrez un caractère à chercher:");
    scanf("%c", &aChercher);

    printf(" Le nombre d'occurrences de %c est de : %d",aChercher,  nbOcurrences(tab, aChercher));

}