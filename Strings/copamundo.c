#include <stdio.h>
#include <locale.h>
int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char grupoBrasil[4][50];
    int resultados[3] [2];

    printf("Vamos prencher o grupo do Brasil na Copa");

    for (int i=0; i < 4; i++) {
        printf("\nQual selecao?");
        scanf("%[^\n]", grupoBrasil[i]);
        getchar();

    }

    printf("---O Grupo do Brasil---\n");
    for (int i=0; i < 4; i++) {
        printf("%s\n", grupoBrasil[i]);
    }

    printf("---Legal agora vamos para os resultados---\n");

    for (int i = 0; i < 3; i++) {
        printf("Partida %i: %s x %s\n", i+1, grupoBrasil[0], grupoBrasil[i+1]);
    

    scanf("%i x %i", &resultados[0] [i], &resultados[i] [i]);

    }


    for (int i=0; i < 3; i++) {
        printf("\n%s %i x %i %s ",
             grupoBrasil[0], resultados[1][i],
             resultados[1][i], grupoBrasil[i+1] 
            );
    }

   
    return 0;
}