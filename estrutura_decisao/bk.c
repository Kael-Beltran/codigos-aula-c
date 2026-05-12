#include <stdio.h>
int main()
{

    float hamburger = 0;
    float bebida = 0;
    float batata = 0;
    float sorverte = 0;

    printf("Qual o valor do lanche?\n");
    scanf("%f", &hamburger);

    printf("Qual e o valor do Refri? \n");
    scanf("%f", &bebida);

    printf("Qual seria o valor da batata? \n");
    scanf("%f", &batata);

    printf("Qual sera o valor do sorvete? \n");
    scanf("%f", &sorverte);

    float ValorTotal = hamburger + bebida + batata + sorverte;

    if (ValorTotal <= 40)
    {
        printf("O valor do seu pedio ficou barato: R$ %.2f\n", ValorTotal);
    }
    else if (ValorTotal >= 40 && ValorTotal <= 50)
    {
        printf("O valor do seu pedido ficou razoavel: R$%.2f \n", ValorTotal);
    }
    else if (ValorTotal >= 55)
    {
        printf("O Valor do seu pedio ficou caro: R$%.2f  \n", ValorTotal);
    }

    return 0;
}