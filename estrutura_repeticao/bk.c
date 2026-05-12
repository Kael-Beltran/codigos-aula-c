#include <stdio.h>
int main()
{

    float hamburger = 0;
    float bebida = 0;
    float batata = 0;
    float sorvete = 0;
    int pessoas = 0;

    printf("Quantas pessoas foram?\n");
    scanf("%i", &pessoas);

    for (int k = 0; k < pessoas; k++) {

    printf("Qual o valor do lanche?\n");
    scanf("%f", &hamburger);

    printf("Qual e o valor do Refri? \n");
    scanf("%f", &bebida);

    printf("Qual seria o valor da batata? \n");
    scanf("%f", &batata);

    printf("Qual sera o valor do sorvete? \n");
    scanf("%f", &sorvete);
    }

    float ValorTotal = hamburger + bebida + batata + sorvete;
    float valorPorPessoa = ValorTotal / pessoas;

    
    if (ValorTotal >= 0 && ValorTotal <= 48.90)
    {
       printf("O valor do pedio ficou barato pode deixar que eu pago!\nFicou por pessoa: R$ %.2f\n", valorPorPessoa);
    }
    else
    {
        printf("O Valor do seu pedio ficou caro, cada um paga o seu!: R$ %.2f", valorPorPessoa);
    }

    return 0;
}