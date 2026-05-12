#include <stdio.h>
int main()
{

    int dia = 0;
    printf("Qual dia da semana? (Dom->0, Sex->6)\n");
    scanf("%i", &dia);

    if (dia == 0)
    {
        scanf("Domingo so alegria, de boa na logoa");
    }
    else if (dia == 1)
    {
        printf("Segundona, bora trampar mano :)");
    }
    else if (dia == 2)
    {
        printf("Terca, les go, ser feliz");
    }
    else if (dia == 3)
    {
        printf("Quarta, partiu senai uhuuu :)");
    }
    else if (dia == 4)
    {
        printf("Quinta, de alegria partiu sorrir com a familia");
    }
    else if (dia == 5)
    {
        printf("Sexta, descanar no dia a dia");
    }
    else if (dia == 6)
    {
        printf("Sabadao, comer um churasco");
    }
    else
    {
        printf("Dia nao encontrada");
    }

    return 0;
}