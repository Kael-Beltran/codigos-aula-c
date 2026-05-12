#include <stdio.h>
int main () {

    int contador = 100;

    while (contador >= 0) {
        printf("\n Numero: %i", contador);
        contador = contador - 1;
    }

    return 0;
}