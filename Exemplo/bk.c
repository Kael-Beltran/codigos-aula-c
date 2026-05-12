#include <stdio.h>

int main () {

    

    // Entrada 
    float rodeio = 25.0;
    float refri = 7.50;
    float batataGrande = 14.90;
    float sorvete = 4.99;
    float cupom7 = 0.07;

    // Processamento
    float total = rodeio + refri + batataGrande + sorvete;
    float desconto = total * cupom7;
    float totalDesconto = total - desconto;
   
    
    
    // Saída
    printf("O total e R$ %f\n", total);
    printf ("O decsonto foi de R$ %.2f\n", desconto);
    printf (" O total a ser pago e R$ %.2f", totalDesconto);
    
    return 0;
}