#include <stdio.h>
int main () {

    printf("Imprimindo numeros pares e impares");

    for (int i= 0; i < 100; i++) {

     if (i % 2 == 0) {
        printf("\n Par: %i", i);
    } else {
        printf("\n Impar: %i", i);
    }



    return 0;
}