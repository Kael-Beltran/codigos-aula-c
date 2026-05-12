#include <stdio.h>
int main () {

float nota = 0;
int faltas = 0;
float ead = 0;

printf("Qual a nota final do aluno?\n");
scanf("%f", &nota);

printf("Quantas faltas o aluno teve?\n");
scanf("%i", &faltas);

printf("Qual a sua nota no ead?\n");
scanf("%f", &ead);

if (nota >= 50 && faltas <= 25 && ead == 100) {
    printf("Esta aprovado, uhuu!");
} else {
    printf("Esta reprovado, puts deu red mano!");
}

    return 0;
}