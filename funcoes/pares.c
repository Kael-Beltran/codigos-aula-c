#include <stdio.h>
#include <locale.h>

void NumerosPares(int inicio, int fim) {
    printf("\n--- Numeros pares entre %d e %d ---\n", inicio, fim);
    
    for (int i = inicio; i <= fim; i++) {

        if (i % 2 == 0) {
            printf("Numero par: %d\n", i);
        }
    }
    
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int nInicio, nFim;

    printf("Digite o numero de INICIO do intervalo: ");
    scanf("%d", &nInicio);
    
    printf("Digite o numero de FIM do intervalo: ");
    scanf("%d", &nFim);
    

    exibirParesNoIntervalo(nInicio, nFim);

    return 0;
}