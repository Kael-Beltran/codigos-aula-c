#include <stdio.h>
#include <locale.h>

void ola() {
    printf("Seja bem vindo!\n"); 
}

void calcularMedia(float n1, float n2) {
    float media = (n1 + n2) / 2;
    printf("A média é: %.2f\n", media);
} 

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float n1 = 0;
    float n2 = 0;

    ola();

    printf("Olá, quanto você tirou na primeira prova?\n");
    scanf("%f", &n1);

    printf("Quanto você tirou na segunda prova?\n");
    scanf("%f", &n2);
    
   
    calcularMedia(n1, n2);

    return 0;
}