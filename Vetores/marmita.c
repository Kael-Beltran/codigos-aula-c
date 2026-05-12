#include <stdio.h>

int main() {
    char marmitas[3][20] = {"Grande", "Media", "Pequena"};
    float precos[] = {15, 12, 10};
    float total = 0;
    int escolha, qtd, continuar = 1;


    for (int i = 0; i < 3; i++)
        printf("%d. Marmita %s - R$ %.2f\n", i+1, marmitas[i], precos[i]);

    
    while (continuar) {
        printf("\nEscolha (1-3): ");
        scanf("%d", &escolha);

        if (escolha < 1 || escolha > 3) continue;

        printf("Quantidade: ");
        scanf("%d", &qtd);

        if (qtd <= 0) continue;

        total += precos[escolha-1] * qtd;

        printf("Mais itens? (1/0): ");
        scanf("%d", &continuar);
    }

    printf("\nTotal: R$ %.2f\n", total);
    return 0;
}