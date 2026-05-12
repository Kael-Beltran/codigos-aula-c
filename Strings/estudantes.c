#include <stdio.h>
int main () {

    char AnoE[20];
    char Idade[20];
    char QualSesi[30];
    char CursoSenai[30];

    printf("Ola, em qual Sesi voce estuda?\n");
    scanf(" %[^\n]",  QualSesi);

    printf("Em que ano na escola voce esta?\n");
    scanf(" %[^\n]", AnoE);

    printf("Quantos anos voce tem?\n");
    scanf(" %[^\n]", Idade);

    printf("E em qual curso voce esta?\n");
    scanf(" %[^\n]", CursoSenai);

    printf("--Suas Informacoes academicas--");
    printf("\nSeu sesi: %s", QualSesi);
    printf("\nSeu ano escolar: %s", AnoE);
    printf("\nSeu Curso: %s", CursoSenai);
    


    return 0;
}