
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtdePessoas = 0;
    float totalFesta = 0;
    char comes[5][30] = {
        "Coxinha", "Bolinha de queijo",
        "Esfira", "Croquete",
        "Hamburguinho"
    };
    float valorComes[5] = {
        99.90, 82.99, 85.99, 78.99, 107.99
    };
    char bebes[5][30] = {
        "Cola cola", "Jaboti", "Guaraná",
        "Suco de Laranja", "Suco de uva"
    };
    float valorBebes[5] = {
        8.99, 9.99, 12.99, 8.99, 9.99  
    };

    printf("Vamos calcular o valor da Confraternização");

    printf("\nQuantas pessoas vão participar?");
    scanf("%i", &qtdePessoas);

    printf("\nEscolha os salgados");
    int opcao = 0;
    int qtde = 0;
    int qtdeCentos = 0;

    for (int i=0; i < 5; i++) {
       
        printf("\nVai querer %s? (1->sim, 0->não)", comes[i]);
        scanf("%i", &opcao);

        if (opcao == 1) {
            printf("Quantos centos de %s? ", comes[i]);
            scanf("%i", &qtde);
            qtdeCentos += qtde;
            totalFesta += qtde * valorComes[i];
        }

    }

    int qtdeLitros = 0;
    printf("\nAgora escolha os Bebes");
      for (int i=0; i < 5; i++) {
       
        printf("\nVai querer %s? (1->sim, 0->não)", bebes[i]);
        scanf("%i", &opcao);

        if (opcao == 1) {
            printf("Quantos unidades de %s? ", bebes[i]);
            scanf("%i", &qtde);
            totalFesta += qtde * valorBebes[i];

            //Refrigerante 2 litros
            if (i == 0 || i == 1 || i == 2) {
                qtdeLitros += qtde *2;
            }

            //Sucos 1 litro
            if ( i == 3 || i == 4) {
                qtdeLitros += qtde *1;
            }
        }

    }


    printf("\nTotal da festa R$ %.2f", totalFesta);
    printf("\nTotal por pessoa R$ %.2f", totalFesta / qtdePessoas);

    printf("\nQtde salgados por pessoa %i", (qtdeCentos * 100) / qtdePessoas);
    printf("\nQtde litros por pessoa %.3f", (float) qtdeLitros / qtdePessoas);

    return 0;
}
