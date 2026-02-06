#include <stdio.h>
#include <string.h>

#define TMAX 50

void majuscules(char tab[TMAX]) {
    for (int i = 0; tab[i]!= '\0'; i++) {
        if (tab[i]>= 'a' && tab[i]<='z') {
            tab[i] -= 32;
        }
    }
}


int main() {
    // variables
    char tab[TMAX];

    // input
    printf("Entrez une phrase :");
    fgets(tab,TMAX,stdin);
    tab[strlen(tab)-1] = '\0'; // on transforme le \n en \0

    majuscules(tab);

    printf("La phrase devient : %s", tab);


}