#include <stdio.h>
#include <locale.h>

void Tabuada(int n1, int nfim) {
    printf("\n--- Tabuada do %d (ate %d) ---\n", n1, nfim);
    
    
    if (n1 > 0) {
        
        for (int i = 1; i <= nfim; i++) {
            printf("%d x %d = %d\n", n1, i, n1 * i);
        }
    } else {
        printf("\nNumero invalido! Digite um valor maior que 0.\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n1, nfim;

    printf("Digite o numero da tabuada: ");
    scanf("%d", &n1);
    
    printf("Digite o limite da tabuada: ");
    scanf("%d", &nfim);
    
    Tabuada(n1, nfim);

    return 0;
}