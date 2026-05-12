#include <stdio.h>
int main () {

printf("Vamos Calcular as notas do aluno!");

int qtdNotas = 0;
int nota = 0;
double totalNotas = 0;
double mediaFinal = 0;

printf("Quantas notas deseja calcular?");
scanf("%lf", &nota);

for (int k = 0; k <qtdNotas; k++) {
    printf("Qual a nota do aluno?");
    scanf("%lf", &nota);

    totalNotas = totalNotas + nota;
}

mediaFinal = totalNotas / qtdNotas;

printf("A media final e %.2lf", mediaFinal);

if (mediaFinal >= 5) {
    printf("\n Aprovado");
} else {
    printf ("\n Reprovado");
}

    return 0;
}