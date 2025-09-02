#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //declaração das variáveis a serem utilizadas durante o jogo
    char estadocarta1, estadocarta2;
    char codigocarta1[20], codigocarta2[20];
    char cidadecarta1[20], cidadecarta2[20];
    unsigned long int populacaocarta1, populacaocarta2;
    float areacarta1, areacarta2;
    float pibcarta1, pibcarta2;
    int turisticoscarta1, turisticoscarta2;
    float densidadecarta1, densidadecarta2;
    float percapita1, percapita2;
    char cartavencedora[20];

    printf ("Bem-vindos ao jogo de Super Trunfo! \n");  //mensagem inicial do jogo
    printf("\n** Vamos cadastrar a 1º carta **\n");     //mensagem informando o início do cadastramento da 1º carta

    //solicitação dos dados da 1º carta ao usuário

    printf("\nDigite uma letra para representar o estado: ");
    scanf(" %c", &estadocarta1);

    printf("Digite o código da carta: ");
    scanf("%s", codigocarta1);

    printf ("Digite o nome da cidade: ");
    scanf("%s", cidadecarta1);

    printf("Digite a população total: ");
    scanf("%u", &populacaocarta1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areacarta1);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pibcarta1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticoscarta1);

    densidadecarta1 =  populacaocarta1 / areacarta1;            //cálculo da densidade populacional
    percapita1 = (pibcarta1 * 1000000000) / populacaocarta1;    //cálculo do PIB per capita


    printf("\n** Agora vamos cadastrar a 2º carta **\n");   //informação do cadastramento da 2º carta

    //solicitação dos dados da 2º carta ao usuário

    printf("\nDigite uma letra para representar o estado: ");
    scanf(" %c", &estadocarta2);

    printf("Digite o código da carta: ");
    scanf("%s", codigocarta2);

    printf ("Digite o nome da cidade: ");
    scanf("%s", cidadecarta2);

    printf("Digite a população total: ");
    scanf("%u", &populacaocarta2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areacarta2);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pibcarta2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticoscarta2);

    densidadecarta2 = populacaocarta2 / areacarta2;             //cálculo da densidade populacional
    percapita2 = (pibcarta2 * 1000000000) / populacaocarta2;    //cálculo do PIB per capita


    printf("\n** AGORA VAMOS VER O RESULTADO DAS CARTAS CADASTRADAS **\n");     //mensagem de finalização do cadastramento

    //visualização das cartas cadastradas

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estadocarta1);
    printf("Código: %c%s \n", estadocarta1, codigocarta1);
    printf("Nome da cidade: %s \n", cidadecarta1);
    printf("População: %u habitantes \n", populacaocarta1);
    printf("Área: %.2f Km²\n", areacarta1);
    printf("PIB: %.2f bilhões de reais\n", pibcarta1);
    printf("Número de pontos turísticos: %d \n", turisticoscarta1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadecarta1);
    printf("PIB per capita: %.2f reais \n", percapita1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estadocarta2);
    printf("Código: %c%s \n", estadocarta2, codigocarta2);
    printf("Nome da cidade: %s \n", cidadecarta2);
    printf("População: %u habitantes \n", populacaocarta2);
    printf("Área: %.2f Km²\n", areacarta2);
    printf("PIB: %.2f bilhões de reais\n", pibcarta2);
    printf("Número de pontos turísticos: %d \n", turisticoscarta2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadecarta2);
    printf("PIB per capita: %.2f reais \n", percapita2);

    //Comparação das duas cartas

    printf("\n** Comparação das Cartas **\n");

    printf("\nPopulação: \n");
    printf("Carta 1: %s tem %u habitantes \n", cidadecarta1, populacaocarta1);
    printf("Carta 2: %s tem %u habitantes \n", cidadecarta2, populacaocarta2);
    if (populacaocarta1 > populacaocarta2) {
        printf ("Resultado: Carta 1 %s venceu.\n", cidadecarta1);
    } else {
        printf ("Resultado: Carta 2 %s venceu. \n", cidadecarta2);
    }

    printf("\nÁrea: \n");
    printf("Carta 1: %s tem %.2f km² \n", cidadecarta1, areacarta1);
    printf("Carta 2: %s tem %.2f km² \n", cidadecarta2, areacarta2);
    if (areacarta1 > areacarta2) {
        printf ("Resultado: Carta 1 %s venceu. \n", cidadecarta1);
    } else {
        printf ("Resultado: Carta 2 %s venceu. \n", cidadecarta2);
    }

    printf("\nPIB: \n");
    printf("Carta 1: %s tem %.2f bilhões de reais \n", cidadecarta1, pibcarta1);
    printf("Carta 2: %s tem %.2f bilhões de reais \n", cidadecarta2, pibcarta2);
    if (pibcarta1 > pibcarta2) {
        printf ("Resultado: Carta 1 %s venceu.\n", cidadecarta1);
    } else {
        printf ("Resultado: Carta 2 %s venceu. \n", cidadecarta2);
    }

    printf("\nPontos Turísticos: \n");
    printf("Carta 1: %s tem %d pontos turísticos \n", cidadecarta1, turisticoscarta1);
    printf("Carta 2: %s tem %d pontos turísticos \n", cidadecarta2, turisticoscarta2);
    if (turisticoscarta1 > turisticoscarta2) {
        printf ("Resultado: Carta 1 %s venceu.\n", cidadecarta1);
    } else {
        printf ("Resultado: Carta 2 %s venceu. \n", cidadecarta2);
    }

    printf("\nDensidade populacinal: \n");
    printf("Carta 1: %s tem %.2f hab/km² \n", cidadecarta1, densidadecarta1);
    printf("Carta 2: %s tem %.2f hab/km² \n", cidadecarta2, densidadecarta2);
    if (densidadecarta1 < densidadecarta2) {
        printf ("Resultado: Carta 1 %s venceu.\n", cidadecarta1);
    } else {
        printf ("Resultado: Carta 2 %s venceu. \n", cidadecarta2);
    }

    printf("\nPIB per capita: \n");
    printf("Carta 1: %s tem %.2f reais \n", cidadecarta1, percapita1);
    printf("Carta 2: %s tem %.2f reais \n", cidadecarta2, percapita2);
    if (percapita1 > percapita2) {
        printf ("Resultado: Carta 1 %s venceu.\n", cidadecarta1);
    } else {
        printf ("Resultado: Carta 2 %s venceu. \n", cidadecarta2);
    }

    return 0;
}