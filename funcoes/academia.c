#include <stdio.h>

void mostrarPlanos(void);
void recomendarPlano(int dias_semana);

int main(void) {
    int dias;

    mostrarPlanos();

    printf("Quantos dias por semana voce pretende treinar? ");
    if (scanf("%d", &dias) != 1 || dias < 1 || dias > 7) {
        printf("Entrada invalida. Informe um numero entre 1 e 7.\n");
        return 1;
    }

    printf("\nResumo de custos para %d vezes por semana:\n", dias);

    float semanas_ano = 52.0f;

    if (dias <= 3) {
        printf("- Viva Saude anual: R$ 39.99 por mes, R$ %.2f por uso (max 3x/semana)\n", (39.99f * 12) / (dias * semanas_ano));
    } else {
        printf("- Viva Saude nao e valido para %d vezes/semana.\n", dias);
    }

    if (dias <= 4) {
        printf("- Saude em Dia anual: R$ 48.99 por mes, R$ %.2f por uso (max 4x/semana)\n", (48.99f * 12) / (dias * semanas_ano));
    } else {
        printf("- Saude em Dia nao e valido para %d vezes/semana.\n", dias);
    }

    printf("- Fitness Pro anual: R$ 58.99 por mes, R$ %.2f por uso (ilimitado)\n", (58.99f * 12) / (dias * semanas_ano));

    recomendarPlano(dias);
    return 0;
}

void mostrarPlanos(void) {
    printf("Comparador de planos de academia\n");
    printf("1) Viva Saude: mensal R$ 49.99 | anual R$ 12 x 39.99 | uso ate 3 vezes/semana\n");
    printf("2) Saude em Dia: mensal R$ 59.99 | anual R$ 12 x 48.99 | uso ate 4 vezes/semana\n");
    printf("3) Fitness Pro: mensal R$ 69.99 | anual R$ 12 x 58.99 | uso ilimitado\n\n");
}

void recomendarPlano(int dias_semana) {
    printf("\nRecomendacao:\n");
    if (dias_semana <= 3) {
        printf("- Melhor custo-beneficio: Viva Saude anual.\n");
    } else if (dias_semana == 4) {
        printf("- Melhor custo-beneficio: Saude em Dia anual.\n");
    } else {
        printf("- Melhor opcao: Fitness Pro anual para uso ilimitado.\n");
    }
}