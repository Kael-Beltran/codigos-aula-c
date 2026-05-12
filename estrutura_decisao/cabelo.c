#include <stdio.h>
#include <string.h>

int main () {

    float CorteCabelo = 0;
    int Sobrancelha = 15;
    int CorteBarba = 20;
    int Luzes = 50;
    char resposta[50];
    float ValorTotal = 0;
    int Parcela = 0;
    float ValorParcela;
    float TotalAvista;

    printf("Ola tudo bem, quanto e o corte de cabelo?\n");
    scanf("%f", &CorteCabelo);

    ValorTotal = CorteCabelo;

    printf("O valor da barba e R$20. Voce gostaria de fazer?\nDigite SIM ou NAO: ");
    scanf("%s", resposta);

    if (strcmp(resposta, "SIM") == 0 || strcmp(resposta, "sim") == 0) {
        printf("Que bom, vamos fazer a barba!\n");
        ValorTotal += CorteBarba;
    } else {
        printf("Tudo bem, fica para a proxima!\n");
    }

    printf("O valor da sobrancelha e R$15. Voce gostaria de fazer?\nDigite SIM ou NAO: ");
    scanf("%s", resposta);

    if (strcmp(resposta, "SIM") == 0 || strcmp(resposta, "sim") == 0) {
        printf("Que bom, vamos fazer a sobrancelha!\n");
        ValorTotal += Sobrancelha;
    } else {
        printf("Que pena, fica para a proxima!\n");
    }

    printf("O valor das luzes e R$50. Voce gostaria de fazer?\nDigite SIM ou NAO: ");
    scanf("%s", resposta);

    if (strcmp(resposta, "SIM") == 0 || strcmp(resposta, "sim") == 0) {
        printf("Que bom, vamos fazer as luzes!\n");
        ValorTotal += Luzes;
    } else {
        printf("Que pena, fica para a proxima!\n");
    }

    printf("O valor total ficou: %.2f\n", ValorTotal);

    printf("Voce gostaria de pagar a vista com 5 porcento de desconto?\nDigite SIM ou NAO:");
    scanf("%s", resposta);
    
    if (strcmp(resposta, "SIM") == 0 || strcmp(resposta, "sim") == 0) {
        TotalAvista = ValorTotal - (ValorTotal * 0.05);
        printf("Voce recebeu 5 porcento de desconto!\n");
        printf("Total a pagar: %.2f\n", TotalAvista);
    } else {
        printf("Voce quer parcelar em quantas vezes?\n");
        scanf("%i", &Parcela);

        ValorParcela = ValorTotal / Parcela;

        printf("Cada parcela sera de: %.2f\n", ValorParcela);
    }

    return 0;
}