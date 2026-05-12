#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0, media;
    int i;

    printf("Digite suas 4 notas:\n");
    for (i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; 
    }

    printf("\nNotas informadas:\n");
    for (i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    media = soma / 4;
    printf("\nA media das suas notas foi: %.2f\n", media);

    return 0;
}