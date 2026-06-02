#include <stdio.h>
#include <locale.h>

int AMIGOS = 6;
int PARCELAS = 12;
float DESCONTO = 0.15;

void mostrarItens(void);
double obterPreco(int item);
void exibirOrcamento(int item, int pagamento);

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int item, pagamento;

    printf("Compra para voce e mais %d amigos\n", AMIGOS - 1);
    mostrarItens();
    printf("Digite o numero do item escolhido: ");
    scanf("%d", &item);

    while (item < 1 || item > 4) {
        printf("Opcao invalida. Digite 1, 2, 3 ou 4: ");
        scanf("%d", &item);
    }

    printf("\n1 - A vista (15%% de desconto)\n");
    printf("2 - Parcelado em %d vezes sem juros\n", PARCELAS);
    printf("Digite a opcao de pagamento: ");
    scanf("%d", &pagamento);

    while (pagamento != 1 && pagamento != 2) {
        printf("Opcao invalida. Digite 1 ou 2: ");
        scanf("%d", &pagamento);
    }

    exibirOrcamento(item, pagamento);
    return 0;
}

void mostrarItens(void)
{
    printf("1 - Placa de Video ..... R$ 139,90\n");
    printf("2 - Caixa de Som ...... R$  99,90\n");
    printf("3 - Kit Mouse e Teclado R$ 149,90\n");
    printf("4 - Monitor 21 Polegadas R$ 679,90\n");
}

double obterPreco(int item)
{
    if (item == 1) return 139.90;
    if (item == 2) return 99.90;
    if (item == 3) return 149.90;
    return 679.90;
}

void exibirOrcamento(int item, int pagamento)
{
    const char *nome;
    double preco = obterPreco(item);
    double total;

    if (item == 1) nome = "Placa de Video";
    else if (item == 2) nome = "Caixa de Som";
    else if (item == 3) nome = "Kit Mouse e Teclado";
    else nome = "Monitor 21 Polegadas";

    if (pagamento == 1) {
        total = preco * (1 - DESCONTO);
        printf("\nOrcamento a vista (15%% de desconto):\n");
        printf("Produto: %s\n", nome);
        printf("Total: R$ %.2f\n", total);
        printf("Cada pessoa paga: R$ %.2f\n", total / AMIGOS);
    } else {
        total = preco;
        printf("\nOrcamento parcelado em %d vezes sem juros:\n", PARCELAS);
        printf("Produto: %s\n", nome);
        printf("Total: R$ %.2f\n", total);
        printf("Valor por parcela: R$ %.2f\n", total / PARCELAS);
        printf("Cada pessoa paga: R$ %.2f\n", total / AMIGOS);
    }
}