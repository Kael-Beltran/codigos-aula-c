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

 float peso = 60;
 float altura = 1.75;

float imc = (peso) / (altura * altura);

 printf("O seu imc e %f", imc);
 
 return 0;

 }
