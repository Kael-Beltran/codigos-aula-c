#include <stdio.h>
#include <locale.h>

void exibirMenu();
void calcular(int opcao);

int main() {
    int opcao;
     setlocale(LC_ALL, "pt_BR.UTF-8");

    for (;;) {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Saindo da calculadora. Ate logo!\n");
            break; 
        }

        if (opcao >= 1 && opcao <= 4) {
            calcular(opcao);
        } else {
            printf("Opcao invalida! Tente novamente.\n\n");
        }
    }

    return 0;
}

void exibirMenu() {
    int i;

    printf("\n       CALCULADORA       \n");

    printf("\n1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");

}

void calcular(int opcao) {
    float num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da Soma: %.2f\n\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da Subtracao: %.2f\n\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da Multiplicacao: %.2f\n\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da Divisao: %.2f\n\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao eh permitida!\n\n");
            }
            break;
    }
}