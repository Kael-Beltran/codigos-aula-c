#include <stdio.h>
int main() {
    int idade = 0;

    printf("Qual e a sua idade?");
    scanf("%i", &idade);

    if (idade >= 18) {
        printf("Voce e maior de idade, pode trabalhar");
    } else {
        printf("Voce e menor de idade, seja feliz");
    }


    return 0;
}