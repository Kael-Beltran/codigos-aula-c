#include <stdio.h>
#include <locale.h>


void ola() {
    printf("Seja bem-vindo!\n\n"); 
}


void calcularArea(float raio, float lado) {

    float circulo = 3.14 * (raio * raio);
    float areaQ = (lado * lado);

    printf("\nA area do circulo é: %.2f\n", circulo);
    printf("A area do quadrado é: %.2f\n", areaQ);
} 

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float raio = 0;
    float lado = 0;

    ola();

    printf("Olá, quanto é o raio do circulo?\n");
    scanf("%f", &raio);

    printf("Olá, quanto é o lado do quadrado?\n");
    scanf("%f", &lado);

  
    calcularArea(raio, lado);

    return 0;
}