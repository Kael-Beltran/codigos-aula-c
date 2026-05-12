#include <stdio.h>
int main()
{

    // Entrada
    float valorCarro = 0;
    int qtdParcelas = 0;
    const float entrada = 0.30;

    printf("Qual o valor do carro?");
    scanf("%f", &valorCarro);

    printf("Quantas prcelas voce deseja pagar?");
    scanf("%i", &qtdParcelas);

    // Processamento

    float PrecoEntrada = valorCarro * entrada;
    float ValorRestante = valorCarro - PrecoEntrada;
    float valorParcela = ValorRestante / qtdParcelas;

    // Saida

    printf("Otimo, Na nossa concessionaria, o valor da entrada e de 30 porcento, do valor total do carro.\n");
    printf("Valor da entrada: R$ %.2f\n", PrecoEntrada);

    printf("O valor restante a ser financiado sera: R$ %.2f\n", ValorRestante);

    printf("O valor de cada parcela sera: R$ %.2f\n", valorParcela);

    return 0;
}