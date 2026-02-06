#include <stdio.h>
#include <string.h>

#define LEN_MAX 50

int main(void) {
     char tab[LEN_MAX] = {};

    printf("Donnez votre nom et prenom: ");
    fgets(tab, LEN_MAX, stdin);
    tab[strlen(tab)-1]= '\0';


    printf("%s", tab);

    return 0;
}