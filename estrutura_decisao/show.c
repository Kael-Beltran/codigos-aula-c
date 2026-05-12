#include <stdio.h>
#include <stdbool.h>

int main () {
    bool comprouIngressoAntes = true;
    bool comprouIngressoNaHora = false;
    int comprou = 0;


    printf("Voce comprou o ingresso antes?\n Digite 1 para Sim | 2 para Nao:");
    scanf("%d", &comprou);

    comprouIngressoNaHora = comprou;

    if (comprouIngressoAntes == true || comprouIngressoNaHora) {
        printf("Vai assitir o show!!!");
    } else {
        printf("Nao vai assitir o show!");
    }


    return 0;
}