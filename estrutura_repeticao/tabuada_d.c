#include <stdio.h>
int main () {

    int tabuada = 0;
    int i = 1;
    int res = 0;
    int numero = 0;

    printf("Tabuada");

    printf("Qual tabuada voce desja escolher:");
    scanf("%i", &tabuada);

    do {
        res = i * tabuada;
        printf("\n%i x %i = %i", tabuada, i, res);
        i++;
    } while (i <= 10);

    do {
        printf("\nDigite um Numero ou 0 para sair:");
        scanf("%i", &numero);
    } while (numero != 0);

    printf("Fim.");

    return 0;
}