#include <stdio.h>
int main() {

  float altura = 0;
  float peso = 0;

  printf("Qual e a sua altura?");
  scanf("%f", &altura);
  
  printf("Qual e a sua peso?");
  scanf("%f", &peso);
  
  float imc = (peso) / (altura * altura);
  
  printf("O seu imc e %f\n", imc);
 
 return 0;

}
