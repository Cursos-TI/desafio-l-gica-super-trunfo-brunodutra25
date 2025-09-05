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
    int opcao;

    printf ("Bem-vindos ao jogo de Super Trunfo! \n");  //mensagem de boas vindas


    //solicitação dos dados da 1º carta ao usuário

    printf("\n** Digite os dados da 1º carta **\n");

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


    //solicitação dos dados da 2º carta ao usuário

    printf("\n** Digite os dados da 2º carta **\n");

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


    //visualização das cartas cadastradas

    printf("\n** RESULTADO DAS CARTAS CADASTRADAS **\n");

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


    //Menu de interação para comparação dos atributos das cartas

    printf("\n** MENU DE COMPARAÇÃO DE ATRIBUTOS **\n");
    printf ("\n1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Número de pontos turísticos\n");
    printf ("5. Densidade populacional\n");
    printf ("6. PIB per capita\n");
    printf ("\nDigite a opção desejada para a comparação: ");
    scanf ("%d", &opcao);


    //Resultado da comparação do atributo selecionado no menu

    printf ("\n** RESULTADO ** \n");

    switch (opcao) {
        case 1:
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("\nAtributo selecionado: População \n");
            printf("Carta 1: %s tem %u habitantes \n", cidadecarta1, populacaocarta1);
            printf("Carta 2: %s tem %u habitantes \n", cidadecarta2, populacaocarta2);
            if (populacaocarta1 > populacaocarta2) {
                printf ("\nResultado: Carta 1 %s venceu.\n", cidadecarta1);
            } else if (populacaocarta1 < populacaocarta2) {
                printf ("\nResultado: Carta 2 %s venceu.\n", cidadecarta2);
            } else {
                printf ("\nResultado: Empate\n");
            }
            break;
        case 2:
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("\nAtributo selecionado: Área \n");
            printf("Carta 1: %s tem %.2f km² \n", cidadecarta1, areacarta1);
            printf("Carta 2: %s tem %.2f km² \n", cidadecarta2, areacarta2);
            if (areacarta1 > areacarta2) {
                printf ("\nResultado: Carta 1 %s venceu.\n", cidadecarta1);
            } else if (areacarta1 < areacarta2) {
                printf ("\nResultado: Carta 2 %s venceu.\n", cidadecarta2);
            } else {
                printf ("\nResultado: Empate\n");
            }
            break;
        case 3:
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("\nAtributo selecionado: PIB \n");
            printf("Carta 1: %s tem %.2f bilhões de reais\n", cidadecarta1, pibcarta1);
            printf("Carta 2: %s tem %.2f bilhões de reais\n", cidadecarta2, pibcarta2);
            if (pibcarta1 > pibcarta2) {
                printf ("\nResultado: Carta 1 %s venceu.\n", cidadecarta1);
            } else if (pibcarta1 < pibcarta2) {
                printf ("\nResultado: Carta 2 %s venceu.\n", cidadecarta2);
            } else {
                printf ("\nResultado: Empate\n");
            }
            break;
        case 4:
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("\nAtributo selecionado: Pontos turísticos \n");
            printf("Carta 1: %s tem %d pontos turísticos\n", cidadecarta1, turisticoscarta1);
            printf("Carta 2: %s tem %d pontos turísticos\n", cidadecarta2, turisticoscarta2);
            if (turisticoscarta1 > turisticoscarta2) {
                printf ("\nResultado: Carta 1 %s venceu.\n", cidadecarta1);
            } else if (turisticoscarta1 < turisticoscarta2) {
                printf ("\nResultado: Carta 2 %s venceu.\n", cidadecarta2);
            } else {
                printf ("\nResultado: Empate\n");
            }
            break;
        case 5:
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("\nAtributo selecionado: Densidade Populacional \n");
            printf("Carta 1: %s tem %.2f hab/km² \n", cidadecarta1, densidadecarta1);
            printf("Carta 2: %s tem %.2f hab/km² \n", cidadecarta2, densidadecarta2);
            if (densidadecarta1 < densidadecarta2) {
                printf ("\nResultado: Carta 1 %s venceu.\n", cidadecarta1);
            } else if ( densidadecarta2 < densidadecarta1) {
                printf ("\nResultado: Carta 2 %s venceu.\n", cidadecarta2);
            } else {
                printf ("\nResultado: Empate\n");
            }
            break;
        case 6:
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("\nAtributo selecionado: PIB per capita \n");
            printf("Carta 1: %s tem %.2f reais \n", cidadecarta1, percapita1);
            printf("Carta 2: %s tem %.2f reais \n", cidadecarta2, percapita2);
            if (percapita1 > percapita2) {
                printf ("\nResultado: Carta 1 %s venceu.\n", cidadecarta1);
            } else if (percapita1 < percapita2) {
                printf ("\nResultado: Carta 2 %s venceu.\n", cidadecarta2);
            } else {
                printf ("\nResultado: Empate\n");
            }
            break;
        default:
            printf ("\nVocê digitou uma opção inválida!\n"); //Mensagem exibida caso o usuário não digite uma das opções do menu
            break;                                                          
    }
    return 0;
}