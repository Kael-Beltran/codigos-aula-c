#include <stdio.h>

int main() {

    int inicio = 0;
    int fim = 0;

    printf("Ola tudo bem?\nEscolha o numero inicial:\n");
    scanf("%i", &inicio);

    printf("Escolha o numero final (maior que o inicial):\n");
    scanf("%i", &fim);

    if (fim > inicio) {

        for (int i = inicio; i <= fim; i++) {
            printf("\nNumero %i", i);
        }

    } else {
        printf("\nNumeros invalidos!\n");
        printf("Inicio: %i, Fim: %i", inicio, fim);
    }

    return 0;
}