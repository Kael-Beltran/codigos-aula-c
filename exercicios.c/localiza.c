#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome [30];
    char carro [30];
    float totalPorKm = 0;
    float totalPorDia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;
    const char cupons[3] [30] = {
        "KABS_10", "KABS_20", "KABS_30"
    };
    char cupomCliente[30];
    int temCupom = 0;
    float valorDesconto = 0;


    printf("----BEM-VINDO!----");

    printf("\nQual o seu nome?");
scanf("%s", nome);

   printf("Obrigado por escolher nossa loja, %s", nome);

   printf("\n%s, Qual carro voce gostaria de Alugar?", nome);
   scanf("%s", carro);

   printf("\nQuantos KMs com o %s, você vai rodar?", carro);
   scanf("%i", &km);

   printf("Para mostrar um relatório detalhado diga quantos dias você vai usar o carro?");
scanf("%i", &dias);

totalPorKm = km * VALOR_POR_DIA;
totalPorDia = dias * VALOR_POR_DIA;

printf("%s, segue um relatório detalhado", nome);
printf("\nTotal por KM: R$ %.2f", totalPorKm);
printf("\nTotal por Dia: R$ %.2f", totalPorDia);

printf("%s, tem cupom de desconto? 1-> sim, 0->nao", nome);
scanf("%i", &temCupom);

if (temCupom == 1) {
    printf("\nDigite o codigo: ");
    scanf("%s", cupomCliente);
    for (int i =0; i < 3; i++){

         if (strcmp(cupomCliente, "KABS_10") == 0) {
            valorDesconto = 10;
        }

        if (strcmp(cupomCliente, "KABS_20") == 0) {
            valorDesconto = 20;
        }

        if (strcmp(cupomCliente, "KABS_30") == 0) {
            valorDesconto = 30;
        }
    }

}

    if (temCupom == 1) {
        printf("\nVoce teve desconto de R$ %.2f", valorDesconto);
    }

if (totalPorDia < totalPorKm)
{
    printf("\nSugerimos utilizar o plano diário");

} else {
    printf("\nSugerimos utilizar o plano por KM");
}
printf("\nObrigado!!!");

printf("\nTenha uma otima tarde!");
printf("\nFeito por Kael Andrade Beltran da Silva :)");

    return 0;
}
