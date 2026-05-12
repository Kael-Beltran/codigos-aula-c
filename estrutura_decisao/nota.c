#include <stdio.h>

int main() {

    // Vamos criar as variaveis, com duas notas
    float atv1 = 0;
    float atv2 = 0;

    printf("Qual a nota da sua primeira atividade?\n ");
    scanf("%f", &atv1);

    printf("Qual a nota da sua segunda atividade?\n ");
    scanf("%f", &atv2);

    float nota = (atv1 + atv2);
    printf("A soma das atividades e %.1f\n", nota);

    float media = (atv1 + atv2) / 2;

    printf("A media sua e %.1f\n", media);

    if (media >= 6.9) {
        printf("Parabens voce passou de ano!!!\n");
    } else {
        printf("Que pena voce reprovou de ano\n");
    }

    return 0;
}