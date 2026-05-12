#include <stdio.h>

int main() {

    // Vamos criar as variaveis, com duas notas
    int atv1 = 0;
    int atv2 = 0;

    printf("Qual a nota da sua primeira atividade? ");
    scanf("%i", &atv1);

    printf("Qual a nota da sua segunda atividade? ");
    scanf("%i", &atv2);

    int nota = (atv1 + atv2);
    printf("A soma das atividades e %d\n", nota);

    int media = (atv1 + atv2) / 2;
    printf("A media sua e %d\n", media);

    if (media >= 7) {
        printf("Parabens voce passou de ano!!!\n");
    } else {
        printf("Que pena voce reprovou de ano\n");
    }

    return 0;
}