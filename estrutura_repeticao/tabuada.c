#include <stdio.h>

int main() {

    int tabuada;

    printf("Ola tudo bem?\nEscolha uma tabuada:\n");
    scanf("%d", &tabuada);

    if (tabuada > 0) {

        for (int i = 1; i <= 100; i++) {
            printf("%d x %d = %d\n", tabuada, i, tabuada * i);
        }

    } else {
        printf("\nNumero invalido! Digite um valor maior que 0.\n");
    }

    return 0;
}