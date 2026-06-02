#include <stdio.h>
#include <locale.h>

void TotalHoras(int dias, int nfim) {
    int i = 1;
    printf("\n--- Total de Horas Estudadas ---\n");

    do {
        printf("%d dia(s) x %d horas = %d horas totais\n", dias, i, dias * i);
        i++;
    } while (i <= nfim);
}

int main() {
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int dias, nfim;

    do {
        printf("Digite quantos dias você estuda na semana (1 a 7): ");
        scanf("%d", &dias);

        if (dias < 1 || dias > 7) {
            printf("Número inválido! Por favor, digite um dia entre 1 e 7.\n\n");
        }
    } while (dias < 1 || dias > 7);


    printf("Digite o limite da tabuada (ex: até 10 horas): ");
    scanf("%d", &nfim);

    TotalHoras(dias, nfim);

    return 0;
}