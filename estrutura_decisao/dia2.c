#include <stdio.h>
int main()
{

    int dia = 0;

    printf("Qual dia da Semana? \n 0->dom, 7->sab");
    scanf("%i", dia);

    switch (dia)
    {
    case 1:
        printf("Domingou!!!");
        break;
    case 2:
        printf("Segundou!!!");
        break;

    case 3:
        printf("Tercou!!!");
        break;

    case 4:
        printf("Quartou!!!");
        break;

    case 5:
        printf("Quintou!!!");
        break;

    case 6:
        printf("Sextou!!!!");
        break;

    case 7:
        printf("Sabadou!!!");
        break;
    }

    return 0;
}