#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float TaxaVeiculo = 0.015;
    float TaxaImoveis = 0.005;

    int opcaoPrincipal = 0;
    int subOpcao = 0;
    int entradaOpcao = 0;
    int meses = 0;
    int minMesses = 0;
    int maxMesses = 0;

    float valorBem = 0;
    float rendaMensal = 0;
    float taxaAplicada = 0;
    float totalFinanciado = 0;
    float valorParcela = 0;
    float limiteParcela = 0;
    float valorEntrada = 0;

    char Nome[50];

    char Veiculos[3][30] = {
        "Caminhão", "Carros", "Motos"};

    char Imoveis[2][30] = {
        "Casas", "Apartamentos"};

    printf("Ola Tudo bem?\nSeja Bem Vindo a Nossa Empresa de Financiamento!");
    printf("\nQual é o seu Nome?");
    scanf(" %[^\n]", Nome);

    printf("\n%s qual tipo de financiamento, você gostaria de Fazer?", Nome);

    printf("\n1 - Veiculos\n2 - Imoveis\nEscolha uma opção: ");
    scanf("%d", &opcaoPrincipal);

    if (opcaoPrincipal == 1)
    {
        taxaAplicada = TaxaVeiculo;
        printf("\n  CATEGORIA VEICULOS  \n");

        for (int i = 0; i < 3; i++)
        {
            printf("%d -> %s\n", i, Veiculos[i]);
        }
        printf("Escolha o tipo de veículo:");
        scanf("%d", subOpcao);

        if (subOpcao == 0)
        {
            minMesses = 100;
            maxMesses = 200;
        }
        else if (subOpcao == 1)
        {
            minMesses = 6;
            maxMesses = 48;
        }
        else if (subOpcao == 2)
        {
            minMesses = 3;
            maxMesses = 24;
        }
        else
        {
            printf("Opção de Veículo Invalida\n");
            return 1;
        }
    }
    else if (opcaoPrincipal == 2)
    {
        taxaAplicada = TaxaImoveis;
        printf("\n  CATEGORIA IMÓVEIS  \n");

        for (int i = 0; i < 2; i++)
        {
            printf("%d -> %s\n", i, Imoveis[i]);
        }
        printf("Escolha o tipo de Imovel:");
        scanf("%d", subOpcao);

        if (subOpcao == 0)
        {
            minMesses = 150;
            maxMesses = 360;
        }
        else if (subOpcao == 1)
        {
            minMesses = 100;
            maxMesses = 300;
        }
        else
        {
            printf("Opção de Imovel Invalida\n");
            return 1;
        }
    }

    printf("Digite o valor total do bem a ser financiado: R$");
    scanf("%f", &valorBem);

    printf("\nQue bom! Agora precissamos saber algumas informações sobre a sua renda mensal!");
    printf("\nQuanto você recebe por mês: R$");
    scanf("%f", &rendaMensal);

    do
    {
        printf("Digite a quantidade de parcelas (messes) entre %d e %d: ", minMesses, maxMesses);
        scanf("%.2f", meses);

        if (scanf("%d", &meses) != 1)
        {
            printf("[ERRO] Entrada inválida! Por favor digite numeros inteiros. \n\n");
        }

        if (meses < minMesses || meses > maxMesses)
        {
            printf("[ERRO] Prazo inválido para a categoria selecionada. Tent novamente!\n\n");
        }

    } while (meses < minMesses || meses > maxMesses);

    totalFinanciado = valorBem * (1 + (taxaAplicada * meses));

    valorParcela = totalFinanciado / meses;

    limiteParcela = rendaMensal * 0.30;

    printf("\n\n-----RESULTADO DA ANALISE-----\n\n");

    if (valorParcela <= limiteParcela)
    {

        printf("Você vai querer dar uma entrada no finciamento?");
        printf("\n1 - SIM\n2 - NÃO\nEscolha uma opção:");
        scanf("%d", &entradaOpcao);

        if (entradaOpcao == 1)
        {
            printf("\nQuanto você dara de entrada?\n");
            scanf("%s", &valorEntrada);

            totalFinanciado = totalFinanciado - valorEntrada;
            valorParcela = totalFinanciado / meses;

            printf("Parabéns %s, seu financiamento foi APROVADO!\n", Nome);

            printf("Valor Total com Juros: R$ %.2f\n", totalFinanciado);

            printf("Valor de cada parcela: R$ %.2f por mês.\n", valorParcela);
        }
        else
        {
            printf("Parabéns %s, seu financiamento foi APROVADO!\n", Nome);

            printf("Valor Total com Juros: R$ %.2f\n", totalFinanciado);

            printf("Valor de cada parcela: R$ %.2f por mês.\n", valorParcela);
        }
    }
    else
    {
        printf("Desculpe %s, seu financiamento foi NEGADO.\n", Nome);
        printf("O valor da parcela calculada (R$ %.2f) ultrapassa o limite de 30%% da sua renda (Limite: R$ %.2f).\n", valorParcela, limiteParcela);
    }
    printf("\n===================================================");
    printf("\n |               DESENVOLVIDO POR                |");
    printf("\n |        KAEL ANDRADE BELTRAN DA SILVA          |");
    printf("\n===================================================");

    return 0;
}