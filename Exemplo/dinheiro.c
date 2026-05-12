#include <stdio.h>
int main()
{

    // Entrada

    float salario = 0;
    float investimento = 0.068;
    int tempo = 0;

    printf("Ola tudo bem, bem vindo ao PiraBanco\n");
    printf("Quanto voce ganha por mes?\n");
    scanf("%f", &salario);

    printf("Otimo nossos investimentos rendem 6.8 porcento ao mes!\n");
    printf("Quantos messes o senhor(a) ira investir o seu dinheiro?\n");
    scanf("%i", &tempo);

    // Processamento

    float totalJurosPorcentual = tempo * investimento;
    float salario25 = salario * investimento;
    float totalDinheiro = tempo * salario25;
    float totalJurosValor = totalDinheiro * totalJurosPorcentual;
    float totalComJUros = totalJurosValor * totalDinheiro;

    // Saida
    printf("Total Juros em %.2f \n", totalJurosPorcentual);
    printf("Valor guardado sem juros R$ %.2f \n", totalDinheiro);
    printf("Meses %i \n", tempo);
    printf("Valor do juros do banco R$ %.2f \n", totalJurosValor);
    printf("Valor huardado com juros R$ %.2f", totalComJUros);

    return 0;
}