#include <stdio.h>

float calcularValorKm (int qtdKmPercorridos) {
    if (qtdKmPercorridos < 20) {
        return qtdKmPercorridos * 20.0;
    } else if (qtdKmPercorridos >= 20 && qtdKmPercorridos <= 100) {
        return qtdKmPercorridos * 0.30;
    } else if (qtdKmPercorridos > 100 && qtdKmPercorridos <= 200) {
        return qtdKmPercorridos * 0.45;
    } else if (qtdKmPercorridos > 200 && qtdKmPercorridos <= 300) {
        return qtdKmPercorridos * 0.80;
    } else if (qtdKmPercorridos > 300) {
        return qtdKmPercorridos * 1.05;
    } else {
        return 0.0; // Caso padrão
    }
}

float calcularValorEntrega (int qtdeEntregas) {
    if (qtdeEntregas <= 10) {
        return 7.99;
    } else if (qtdeEntregas > 10 && qtdeEntregas <= 20) {
        return 16.99;
    } else if (qtdeEntregas > 20 && qtdeEntregas <= 30) {
        return 28.99;
    } else if (qtdeEntregas > 30) {
        return 41.99;
    } else {
        return 0.0; // Caso padrão
    }
}


int main () {

    
    int TrabalhouSegunda = 0;
    int qtdeSegunda = 0;
    int kmSEG = 0;

    int TrabalhouTerça = 0;
    int qtdeTerça = 0;
    int kmTER = 0;

    int TrabalhouQuarta = 0;
    int qtdeQuarta = 0;
    int kmQUA = 0;

    int TrabalhouQuinta = 0;
    int qtdeQuinta = 0;
    int kmQUI = 0;

    int TrabalhouSexta = 0;
    int qtdeSexta = 0;
    int kmSEX = 0;

    int TrabalhouSabado = 0;
    int qtdeSabado = 0;
    int kmSAB = 0;

    int TrabalhouDomingo =0;
    int qtdDomingo = 0;
    int kmDOM = 0;

    float totalEntregaSegunda = 0;
    float totalntregaTerça = 0;
    float totalntregaQuarta = 0;
    float totalntregaQuinta = 0;
    float totalntregaSexta = 0;
    float totalSegunda = 0;
    float totalTerça = 0;
    float totalQuarta = 0;
    float totalQuinta = 0;
    float totalSexta = 0;
    float totalSabado = 0;
    float totalDomingo = 0;

    float totalKmSegunda = 0;
    float totalKmTerça = 0;
    float totalKmQuarta = 0;
    float totalKmQuinta = 0;
    float totalKmSexta = 0;
    float totalKmSabado = 0;
    float totalKmDomingo = 0;

    int totalDias = 0;

    printf("Sou o algoritimo que irei auxiliar o Matias!\n");

    printf("Trabalhou Segunda-Feira? 1(SIM), 2(NAO)\n");
    scanf("%i", &TrabalhouSegunda);
    if (TrabalhouSegunda == 1) {
        totalDias++;
        printf("Quantas entregas fez na segunda?\n");
        scanf("%i", &qtdeSegunda);
        printf("Quantos KM percorreu na segunda?\n");
        scanf("%i", &kmSEG);
        printf("KM percorridos na segunda-feira: %i\n", kmSEG);

        totalEntregaSegunda = calcularValorEntrega(qtdeSegunda);
        totalKmSegunda = calcularValorKm(kmSEG);
    }


    printf("Trabalhou Terca-Feira? 1(SIM), 2(NAO)\n");
    scanf("%i", &TrabalhouTerça);
    if (TrabalhouTerça == 1) {
        totalDias++;
        printf("Quantas entregas fez na terca?\n");
        scanf("%i", &qtdeTerça);
        printf("Quantos KM percorreu na terca?\n");
        scanf("%i", &kmTER);
        printf("KM percorridos na terca-feira: %i\n", kmTER);

        totalTerça = calcularValorEntrega(qtdeTerça);
        totalKmTerça = calcularValorKm(kmTER);
    }

    printf("Trabalhou Quarta-Feira? 1(SIM), 2(NAO)\n");
     scanf("%i", &TrabalhouQuarta);
    if (TrabalhouQuarta == 1) {
        totalDias++;
        printf("Quantas entregas fez na quarta?\n");
        scanf("%i", &qtdeQuarta);
        printf("Quantos KM percorreu na quarta?\n");
        scanf("%i", &kmQUA);
        printf("KM percorridos na quarta-feira: %i\n", kmQUA);

        totalQuarta = calcularValorEntrega(qtdeQuarta);
        totalKmQuarta = calcularValorKm(kmQUA);
    }

    printf("Trabalhou Quinta-Feira? 1(SIM), 2(NAO)\n");
     scanf("%i", &TrabalhouQuinta);
    if (TrabalhouQuinta == 1) {
        totalDias++;
        printf("Quantas entregas fez na quinta?\n");
        scanf("%i", &qtdeQuinta);
        printf("Quantos KM percorreu na quinta?\n");
        scanf("%i", &kmQUI);
        printf("KM percorridos na quinta-feira: %i\n", kmQUI);

        totalQuinta = calcularValorEntrega(qtdeQuinta);
        totalKmQuinta = calcularValorKm(kmQUI);
    }

    printf("Trabalhou Sexta-Feira? 1(SIM), 2(NAO)\n");
     scanf("%i", &TrabalhouSexta);
    if (TrabalhouSexta == 1) {
        totalDias++;
        printf("Quantas entregas fez na sexta?\n");
        scanf("%i", &qtdeSexta);
        printf("Quantos KM percorreu na sexta?\n");
        scanf("%i", &kmSEX);
        printf("KM percorridos na sexta-feira: %i\n", kmSEX);

        totalSexta = calcularValorEntrega(qtdeSexta);
        totalKmSexta = calcularValorKm(kmSEX);
    }

    printf("Trabalhou Sabado? 1(SIM), 2(NAO)\n");
     scanf("%i", &TrabalhouSabado);
    if (TrabalhouSabado == 1) {
        totalDias++;
        printf("Quantas entregas fez no sabado?\n");
        scanf("%i", &qtdeSabado);
        printf("Quantos KM percorreu no sabado?\n");
        scanf("%i", &kmSAB);
        printf("KM percorridos no sabado: %i\n", kmSAB);

        totalSabado = calcularValorEntrega(qtdeSabado);
        totalKmSabado = calcularValorKm(kmSAB);
    }

    printf("Trabalhou Domingo? 1(SIM), 2(NAO)\n");
     scanf("%i", &TrabalhouDomingo);
    if (TrabalhouDomingo == 1) {
        totalDias++;
        printf("Quantas entregas fez no domingo?\n");
        scanf("%i", &qtdDomingo);
        printf("Quantos KM percorreu no domingo?\n");
        scanf("%i", &kmDOM);
        printf("KM percorridos no domingo: %i\n", kmDOM);

        totalDomingo = calcularValorEntrega(qtdDomingo);
        totalKmDomingo = calcularValorKm(kmDOM);
    }

    printf("\nSegunda-Feira: %s", TrabalhouSegunda == 1 ? "sim" : "nao");
printf("\nQuantidade de entrega %i", qtdeSegunda);
printf("\nKM percorrido %i", kmSEG);
printf("\nValor a receber: R$ %.2f", totalSegunda + totalKmSegunda);

    printf("\nTerca-Feira: %s", TrabalhouTerça == 1 ? "sim" : "nao");
    printf("\nQuantidade de entrega %i", qtdeTerça);
printf("\nKM percorrido %i", kmTER);
printf("\nValor a receber: R$ %.2f", totalTerça + totalKmTerça);

    printf("\nQuarta-Feira: %s", TrabalhouQuarta == 1 ? "sim" : "nao");
    printf("\nQuantidade de entrega %i", qtdeQuarta);
printf("\nKM percorrido %i", kmQUA);
printf("\nValor a receber: R$ %.2f", totalQuarta + totalKmQuarta);

    printf("\nQuinta-Feira: %s", TrabalhouQuinta == 1 ? "sim" : "nao");
    printf("\nQuantidade de entrega %i", qtdeQuinta);
printf("\nKM percorrido %i", kmQUI);
printf("\nValor a receber: R$ %.2f", totalQuinta + totalKmQuinta);

    printf("\nSexta-Feira: %s", TrabalhouSexta == 1 ? "sim" : "nao");
    printf("\nQuantidade de entrega %i", qtdeSexta);
printf("\nKM percorrido %i", kmSEX);
printf("\nValor a receber: R$ %.2f", totalSexta + totalKmSexta);

    printf("\nSabado: %s", TrabalhouSabado == 1 ? "sim" : "nao");
    printf("\nQuantidade de entrega %i", qtdeSabado);
printf("\nKM percorrido %i", kmSAB);
printf("\nValor a receber: R$ %.2f", totalSabado + totalKmSabado);

    printf("\nDomingo: %s", TrabalhouDomingo == 1 ? "sim" : "nao");
    printf("\nQuantidade de entrega %i", qtdDomingo);
printf("\nKM percorrido %i", kmDOM);
printf("\nValor a receber: R$ %.2f", totalDomingo + totalKmDomingo);



printf("\nTotal Semanal:");
printf("\nTotal de dias Trabalhados: %i", totalDias);
int TotalEntregas = qtdDomingo + qtdeQuarta + qtdeQuinta + qtdeSabado + qtdeSegunda + qtdeSexta + qtdeTerça;

printf("\nTotal das entregas %i", TotalEntregas);

float TotalValorEntregas = totalSegunda + totalDomingo + totalQuarta + totalQuinta + totalSabado + totalSexta + totalTerça;
printf("\nValor total das entregas: R$ %.2f", TotalValorEntregas);

int TotalKms = kmDOM + kmQUA + kmQUI + kmSAB + kmSEG + kmSEX + kmTER;
printf("\nTotal de Kms percorridos: %i", TotalKms);

float TotalValorKm = totalKmSegunda + totalKmTerça + totalKmQuarta + totalKmQuinta + totalKmSexta + totalKmSabado + totalKmDomingo;
printf("\nValor total dos KM: R$ %.2f", TotalValorKm);

printf("\nMedia de entregas por dia foi: %i", TotalEntregas / totalDias);

float totalGeral = TotalValorEntregas + TotalValorKm;
printf("\nValor total geral: R$ %.2f", totalGeral);

printf("\nMedia valor por dia: R$ %.2f", totalGeral / totalDias);

if (totalDias == 7 && TotalKms >= 200 && totalGeral >= 26) {
    printf("\nBonus de RS 178,99");
}

    return 0;
}