
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("%d", time(NULL));

    int a = RAND_MAX;

    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());


    return EXIT_SUCCESS;
}

