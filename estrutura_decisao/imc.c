/*
Calcule o imc
de uma pessoa
com valores
fixos na variaveis
e mostre o valor 
ao final
*/
#include <stdio.h>
 int main() {

 float peso = 0;
 float altura = 0;

 printf("Qual e o seu peso?\n");
 scanf("%f", &peso);

 printf("Qual e a sua altura?\n");
 scanf("%f", &altura);

float imc = (peso) / (altura * altura);

 printf("O seu imc e %.2f\n", imc);

 float tabelaImc = imc;
 printf("Agora vamos ver se voce esta com um peso ideal seguindo a Tabela de IMC :\n");

if (tabelaImc <=18.5) {
    printf("Voce esta magrinho demais, recomendo voce comer mais :/");
}
else if (tabelaImc >=18.5 && tabelaImc <= 24.9)
{
      printf("Voce esta com um peso, legal para a sua altura :)");
} if (tabelaImc >=25.0 && tabelaImc <= 29.9) {
    printf("Voce esta meio gordinho para a sua altura, recomendo voce emagrecer!");
    } else if (tabelaImc >= 30) {
        printf("Voce esta obeso, recomendo voce emagrecer, por motivos de saude!");
    }


 
 return 0;

 }
