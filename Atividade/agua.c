#include <stdio.h>
#include <stdbool.h>

int main () {

    int pessoas = 0;
    int QtdeLitrosConsumida = 0;
    int totalLitros = 0;
    float ValorConta = 0;
    int idade = 0;

    const float Desconto = 50;
    const int Multa = 150;
    const int periodo30 = 30;
    const float ValorPorLitro = 0.15;
    const int FaixaEconomica = 250;
    const int FaixaExcessiva = 400;

    printf("Hoje, vamos calcular sua conta de agua!\n");
    printf("Ola! Quantas pessoas tem na sua casa?\n");
    scanf("%i", &pessoas);

    // Validação simples
    if (pessoas <= 0) {
        printf("Quantidade de pessoas invalida.\n");
        return 0;
    }

    for (int i = 0; i < pessoas; i++) {
        printf("\nQuantos anos a pessoa %i tem?\n", i + 1);
        scanf("%i", &idade);

        if (idade <= 10) {
            QtdeLitrosConsumida = 18;
        } else if (idade > 10 && idade < 18) {
            QtdeLitrosConsumida = 30;
        } else if (idade >= 18 && idade < 25) {
            QtdeLitrosConsumida = 42;
        } else {
            QtdeLitrosConsumida = 24;
        }

        totalLitros += QtdeLitrosConsumida;

        printf("A pessoa %i consome %i litros de agua por dia\n", i + 1, QtdeLitrosConsumida);
    }

    if (totalLitros >= FaixaExcessiva) {
        ValorConta = ValorPorLitro * totalLitros * periodo30 + Multa;

        printf("Faixa de consumo: EXCESSIVA\n");
        printf("Quantidade de pessoas: %i\n", pessoas);
        printf("Consumo diario total: %i litros\n", totalLitros);
        printf("Valor da conta mensal: R$ %.2f\n", ValorConta);
        printf("Multa aplicada: R$ %i\n", &Multa);

    } else if (totalLitros <= FaixaEconomica) {
        ValorConta = ValorPorLitro * totalLitros * periodo30;

        printf("Faixa de consumo: ECONOMICA\n");
        printf("Quantidade de pessoas: %i\n", pessoas);
        printf("Consumo diario total: %i litros\n", totalLitros);
        printf("Valor da conta mensal: R$ %.2f\n", ValorConta);
        printf("Desconto aplicado no proximo mes foi de : 50\n");

    } else {
        ValorConta = ValorPorLitro * totalLitros * periodo30;

        printf("Faixa de consumo: NORMAL\n");
        printf("Quantidade de pessoas: %i\n", pessoas);
        printf("Consumo diario total: %i litros\n", totalLitros);
        printf("Valor da conta mensal: R$ %.2f\n", ValorConta);
    }

    return 0;
}