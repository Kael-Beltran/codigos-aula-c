#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    char nome[10] = "Kael";
    char endereço[20] = "Rua Guapore 320";
    char bairro[10] = "Higienópolis";
    char cidade[11] = "Piracicaba";
    char uf[2] = "SP";

    printf("---Minhas Informações residenciais---");
    printf("\nEndereço: %s", endereço);
    printf("\nBairro: %s", bairro);
    printf("\nCidade: %s", cidade);
    printf("\nEstado: %s", uf);


    return 0;
}