#include <stdio.h>
#include <locale.h>

void exibirMenu();

float Distancia = 0;
float Gasolina = 6.0;
float Etanol = 4.0;
float Diesel = 6.0;
float Litros = 0;

float PrecoLitros = 0;

int main() {
    int opcao;
    setlocale(LC_ALL, "pt_BR.UTF-8");

    for (;;) {
        exibirMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do programa. Boa viagem!\n");
            break; 
        }

        if (opcao == 1) {
            printf("\n--- Abastecimento: GASOLINA ---\n");
            printf("O preço da gasolina está R$ %.2f por litro!\n", Gasolina);
            printf("Quantos Litros você vai colocar? ");
            scanf("%f", &Litros);

            PrecoLitros = Litros * Gasolina;
            printf("O abastecimento ficou em R$ : %.2f reais!\n", PrecoLitros);

        } else if (opcao == 2) {
            printf("\n--- Abastecimento: ETANOL ---\n");
            printf("O preço do etanol está R$ %.2f por litro!\n", Etanol);
            printf("Quantos Litros você vai colocar? ");
            scanf("%f", &Litros);

            PrecoLitros = Litros * Etanol;
            printf("O abastecimento ficou em R$ : %.2f reais!\n", PrecoLitros);

        } else if (opcao == 3) {
            printf("\n--- Abastecimento: DIESEL ---\n");
            printf("O preço do diesel está R$ %.2f por litro!\n", Diesel);
            printf("Quantos Litros você vai colocar? ");
            scanf("%f", &Litros);

            PrecoLitros = Litros * Diesel;
            printf("O abastecimento ficou em R$ : %.2f reais!\n", PrecoLitros);
            
        } else {
            printf("Opção inválida! Tente novamente.\n");
            continue; 
        }
    }

    return 0;
}

void exibirMenu() {
    printf("\n      POSTO DE GASOLINA       \n");
    printf("1 - GASOLINA\n");
    printf("2 - ETANOL\n");
    printf("3 - DIESEL\n");
    printf("0 - SAIR DO PROGRAMA\n");
}