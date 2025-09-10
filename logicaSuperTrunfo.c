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
    int menu1, menu2;
    int carta1, carta2;
    int resultado1, resultado2;

    
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


    //Menu de interação para comparação dos atributos das cartas

    printf("\n** VOCÊ AGORA ESCOLHERÁ 2 ATRIBUTOS PARA COMPARAÇÃO DAS CARTAS ** \n");


    //Menu de atributo 1

    printf ("\n** ATRIBUTO 1 **\n");
    printf ("\n1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Número de pontos turísticos\n");
    printf ("5. Densidade populacional\n");
    printf ("6. PIB per capita\n");
    printf ("\nDigite a opção desejada para a comparação: ");
    scanf ("%d", &menu1);


    //Menu de atributo 2

    printf ("\n** ATRIBUTO 2 **\n");
    printf ("\n1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Número de pontos turísticos\n");
    printf ("5. Densidade populacional\n");
    printf ("6. PIB per capita\n");
    printf ("\nDigite a opção desejada para a comparação: ");
    scanf ("%d", &menu2);


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


    switch (menu1) {
        case 1:
            printf("\n** ATRIBUTOS ESCOLHIDOS PARA COMPARAÇÃO **\n");
            printf("\n1º Atributo selecionado: População \n");
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("Carta 1: %s tem %u habitantes \n", cidadecarta1, populacaocarta1);
            printf("Carta 2: %s tem %u habitantes \n", cidadecarta2, populacaocarta2);
            carta1 = populacaocarta1 == populacaocarta2 ? -1 :
                     populacaocarta1 > populacaocarta2 ? 1 : 0;
            if (carta1 == 1) {
                resultado1 = 1;
            } else if (carta1 == 0) {
                resultado1 = 0;
            } else {
                resultado1 = -1;
            }
            break;

        case 2:
            printf("\n** ATRIBUTOS ESCOLHIDOS PARA COMPARAÇÃO **\n");
            printf("\n1º Atributo selecionado: Área \n");
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("Carta 1: %s tem %.2f km² \n", cidadecarta1, areacarta1);
            printf("Carta 2: %s tem %.2f km² \n", cidadecarta2, areacarta2);
            carta1 = areacarta1 == areacarta2 ? -1 :
                    areacarta1 > areacarta2 ? 1 : 0;
            if (carta1 == 1) {
                resultado1 = 1;
            } else if (carta1 == 0) {
                resultado1 = 0;
            } else {
                resultado1 = -1;
            }
            break;

        case 3:
            printf("\n** ATRIBUTOS ESCOLHIDOS PARA COMPARAÇÃO **\n");
            printf("\n1º Atributo selecionado: PIB \n");
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("Carta 1: %s tem %.2f km² \n", cidadecarta1, pibcarta1);
            printf("Carta 2: %s tem %.2f km² \n", cidadecarta2, pibcarta2);
            carta1 = pibcarta1 == pibcarta2 ? -1 :
                    pibcarta1 > pibcarta2 ? 1 : 0;
            if (carta1 == 1) {
                resultado1 = 1;
            } else if (carta1 == 0) {
                resultado1 = 0;
            } else {
                resultado1 = -1;
            }
            break;

        case 4:
            printf("\n** ATRIBUTOS ESCOLHIDOS PARA COMPARAÇÃO **\n");
            printf("\n1º Atributo selecionado: Pontos turísticos \n");
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("Carta 1: %s tem %d pontos turísticos\n", cidadecarta1, turisticoscarta1);
            printf("Carta 2: %s tem %d pontos turísticos\n", cidadecarta2, turisticoscarta2);
            carta1 = turisticoscarta1 == turisticoscarta2 ? -1 :
                    turisticoscarta1 > turisticoscarta2 ? 1 : 0;
            if (carta1 == 1) {
                resultado1 = 1;
            } else if (carta1 == 0) {
                resultado1 = 0;
            } else {
                resultado1 = -1;
            }
            break;

        case 5:
            printf("\n** ATRIBUTOS ESCOLHIDOS PARA COMPARAÇÃO **\n");
            printf("\n1º Atributo selecionado: Densidade Populacional \n");
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("Carta 1: %s tem %.2f hab/km² \n", cidadecarta1, densidadecarta1);
            printf("Carta 2: %s tem %.2f hab/km² \n", cidadecarta2, densidadecarta2);
            carta1 = densidadecarta1 == densidadecarta2 ? -1 :
                    densidadecarta1 < densidadecarta2 ? 1 : 0;
            if (carta1 == 1) {
                resultado1 = 1;
            } else if (carta1 == 0) {
                resultado1 = 0;
            } else {
                resultado1 = -1;
            }
            break;

        case 6:
            printf("\n** ATRIBUTOS ESCOLHIDOS PARA COMPARAÇÃO **\n");
            printf("\n1º Atributo selecionado: PIB per capita \n");
            printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
            printf("Carta 1: %s tem %.2f reais \n", cidadecarta1, percapita1);
            printf("Carta 2: %s tem %.2f reais \n", cidadecarta2, percapita2);
            carta1 = percapita1 == percapita2 ? -1 :
                    percapita1 > percapita2 ? 1 : 0;
            if (carta1 == 1) {
                resultado1 = 1;
            } else if (carta1 == 0) {
                resultado1 = 0;
            } else {
                resultado1 = -1;
            }
            break;

        default:
            printf ("\nVocê digitou uma opção inválida!\n"); //Mensagem exibida caso o usuário não digite uma das opções do menu
            break;
    }

    if (menu1 == menu2) {
        printf("Você escolheu 2 atributos iguais!");
    } else {
        switch (menu2) {
            case 1:
                printf("\n2º Atributo selecionado: População \n");
                printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
                printf("Carta 1: %s tem %u habitantes \n", cidadecarta1, populacaocarta1);
                printf("Carta 2: %s tem %u habitantes \n", cidadecarta2, populacaocarta2);
                carta2 = populacaocarta1 == populacaocarta2 ? -1 :
                        populacaocarta1 > populacaocarta2 ? 1 : 0;
                if (carta2 == 1) {
                    resultado2 = 1;
                } else if (carta2 == 0) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
                break;

            case 2:
                printf("\n2º Atributo selecionado: Área \n");
                printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
                printf("Carta 1: %s tem %.2f km² \n", cidadecarta1, areacarta1);
                printf("Carta 2: %s tem %.2f km² \n", cidadecarta2, areacarta2);
                carta2 = areacarta1 == areacarta2 ? -1 :
                        areacarta1 > areacarta2 ? 1 : 0;
                if (carta2 == 1) {
                    resultado2 = 1;
                } else if (carta2 == 0) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
                break;

            case 3:
                printf("\n2º Atributo selecionado: PIB \n");
                printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
                printf("Carta 1: %s tem %.2f bilhões de reais\n", cidadecarta1, pibcarta1);
                printf("Carta 2: %s tem %.2f bilhões de reais\n", cidadecarta2, pibcarta2);
                carta2 = pibcarta1 == pibcarta2 ? -1 :
                        pibcarta1 > pibcarta2 ? 1 : 0;
                if (carta2 == 1) {
                    resultado2 = 1;
                } else if (carta2 == 0) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
                break;

            case 4:
                printf("\n2º Atributo selecionado: Pontos turísticos \n");
                printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
                printf("Carta 1: %s tem %d pontos turísticos\n", cidadecarta1, turisticoscarta1);
                printf("Carta 2: %s tem %d pontos turísticos\n", cidadecarta2, turisticoscarta2);
                carta2 = turisticoscarta1 == turisticoscarta2 ? -1 :
                    turisticoscarta1 > turisticoscarta2 ? 1 : 0;
                if (carta2 == 1) {
                    resultado2 = 1;
                } else if (carta2 == 0) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
                break;

            case 5:
                printf("\n2º Atributo selecionado: Densidade Populacional \n");
                printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
                printf("Carta 1: %s tem %.2f hab/km² \n", cidadecarta1, densidadecarta1);
                printf("Carta 2: %s tem %.2f hab/km² \n", cidadecarta2, densidadecarta2);
                carta2 = densidadecarta1 == densidadecarta2 ? -1 :
                        densidadecarta1 < densidadecarta2 ? 1 : 0;
                if (carta2 == 1) {
                    resultado2 = 1;
                } else if (carta2 == 0) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
                break;

            case 6:
                printf("\n2º Atributo selecionado: PIB per capita \n");
                printf ("\nCarta 1: %s VS Carta 2: %s \n", cidadecarta1, cidadecarta2);
                printf("Carta 1: %s tem %.2f reais \n", cidadecarta1, percapita1);
                printf("Carta 2: %s tem %.2f reais \n", cidadecarta2, percapita2);
                carta2 = percapita1 == percapita2 ? -1 :
                        percapita1 > percapita2 ? 1 : 0;
                if (carta2 == 1) {
                    resultado2 = 1;
                } else if (carta2 == 0) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
                break;

            default:
                printf ("\nVocê digitou uma opção inválida!\n"); //Mensagem exibida caso o usuário não digite uma das opções do menu
                break;
        }
    }


    //Resultado da comparação entre as duas cartas para determinar a vencedora

    printf("\n** RESULTADO FINAL**\n");

    if ((resultado1 == 1 && resultado2 == 0) ||
        (resultado1 == 0 && resultado2 == 1) ||
        (resultado1 == -1 && resultado2 == -1)) {
        printf("\nAs cartas empataram!\n");
    } else if ((resultado1 == 1 && resultado2 == 1) ||
               (resultado1 == 1 && resultado2 == -1) ||
               (resultado1 == -1 && resultado2 == 1)) {
        printf("\nCarta 1: %s venceu!\n", cidadecarta1);
    } else {
        printf("\nCarta 2: %s venceu!\n", cidadecarta2);
    }
    return 0;
}