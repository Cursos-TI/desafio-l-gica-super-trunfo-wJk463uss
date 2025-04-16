#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    char estado1[20], estado2[20];
    char codigo1[3], codigo2[3];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pnturistico1, pnturistico2;  
    float densidade1, densidade2;
    double pibpercapita1, pibpercapita2;

    strcpy(estado1, "São Paulo");
    strcpy(estado2, "Rio de Janeiro");
    strcpy(codigo1, "SP");
    strcpy(codigo2, "RJ");
    populacao1 = 12300000;
    populacao2 = 6000000;
    area1 = 1521.11;
    area2 = 1200.25;
    pib1 = 699280000000;
    pib2 = 300050000000;
    pnturistico1 = 50;
    pnturistico2 = 30;
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;
    pibpercapita1 = pib1/populacao1;
    pibpercapita2 = pib2/populacao2;

    int atributo1, atributo2;
    int resultado1, resultado2;


            printf("***Iniciando o jogo super trunfo***\n");
            printf("\n");
            printf("Escolha uma das duas cartas para comparar:\n");
            printf("1. %s (%s)\n", estado1, codigo1);
            printf("2. %s (%s)\n", estado2, codigo2);
            printf("Escolha a sua carta: ");
            int escolha;
            scanf("%d", &escolha);
            printf("\n");
            if (escolha == 1) {
                printf("Você escolheu a carta %s (%s)\n", estado1, codigo1);

            } else if (escolha == 2) {
                printf("Você escolheu a carta %s (%s)\n", estado2, codigo2);

            } else {
                printf("Escolha inválida!\n");
                return 0;
            }
            printf("\n");
switch (escolha) {
    case 1:
            printf("\n");
            printf("Escolha um atributo para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos turísticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per capita\n");
            printf("Escolha o atributo: ");
            scanf("%d", &atributo1);   
            printf("\n");
            switch (atributo1) {
                case 1:
                    printf("Você escolheu o atributo População\n");
                    printf("Carta 1 - %s (%s) População: %d\n", estado1, codigo1, populacao1);
                    printf("Carta 2 - %s (%s) População: %d\n", estado2, codigo2, populacao2);
                    resultado1 = populacao1 > populacao2 ? 1 :0;
                    break;
                case 2:
                    printf("Você escolheu o atributo Área\n");
                    printf("Carta 1 - %s (%s) Área: %.2f km²\n", estado1, codigo1, area1);
                    printf("Carta 2 - %s (%s) Área: %.2f km²\n", estado2, codigo2, area2);
                    resultado1 = area1 > area2 ? 1 :0;
                    break;
                case 3:
                    printf("Você escolheu o atributo PIB\n");
                    printf("Carta 1 - %s (%s) PIB: R$%.2f\n", estado1, codigo1, pib1);
                    printf("Carta 2 - %s (%s) PIB: R$%.2f\n", estado2, codigo2, pib2);
                    resultado1 = pib1 > pib2 ? 1 :0;
                    break;
                case 4:
                    printf("Você escolheu o atributo Pontos turísticos\n");
                    printf("Carta 1 - %s (%s) Pontos turísticos: %d\n", estado1, codigo1, pnturistico1);
                    printf("Carta 2 - %s (%s) Pontos turísticos: %d\n", estado2, codigo2, pnturistico2);
                    resultado1 = pnturistico1 > pnturistico2 ? 1 :0;
                    break;
                case 5:
                    printf("Você escolheu o atributo Densidade populacional\n");
                    printf("Carta 1 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
                    printf("Carta 2 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado2, codigo2, densidade2);
                    resultado1 = densidade1 < densidade2 ? 1 :0;
                    break;
                case 6:
                    printf("Você escolheu o atributo PIB per capita\n");
                    printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", estado1, codigo1, pibpercapita1);
                    printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", estado2, codigo2, pibpercapita2);
                    resultado1 = pibpercapita1 > pibpercapita2 ? 1 :0;
                    break;
                default:
                    printf("Atributo inválido!\n");
                    return 0;

            }
            
    printf("\n");
    printf("Escolha o segundo atributo para comparar:\n");
    printf("ATENCAO: Voce deve escolher um atributo diferente do primeiro!!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolha o atributo: ");
    scanf("%d", &atributo2);
    printf("\n");

    if (atributo2 == atributo1) {
        printf("Atributo inválido! Escolha um atributo diferente do primeiro.\n");
        return 0;
    }
    switch (atributo2) {
        case 1:
            printf("Você escolheu o atributo População\n");
            printf("Carta 1 - %s (%s) População: %d\n", estado1, codigo1, populacao1);
            printf("Carta 2 - %s (%s) População: %d\n", estado2, codigo2, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 :0;
            break;
        case 2:
            printf("Você escolheu o atributo Área\n");
            printf("Carta 1 - %s (%s) Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Carta 2 - %s (%s) Área: %.2f km²\n", estado2, codigo2, area2);
            resultado2 = area1 > area2 ? 1 :0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB\n");
            printf("Carta 1 - %s (%s) PIB: R$%.2f\n", estado1, codigo1, pib1);
            printf("Carta 2 - %s (%s) PIB: R$%.2f\n", estado2, codigo2, pib2);
            resultado2 = pib1 > pib2 ? 1 :0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos turísticos\n");
            printf("Carta 1 - %s (%s) Pontos turísticos: %d\n", estado1, codigo1, pnturistico1);
            printf("Carta 2 - %s (%s) Pontos turísticos: %d\n", estado2, codigo2, pnturistico2);
            resultado2 = pnturistico1 > pnturistico2 ? 1 :0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade populacional\n");
            printf("Carta 1 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Carta 2 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado2, codigo2, densidade2);
            resultado2 = densidade1 < densidade2 ? 1 :0;
            break;
        case 6:
            printf("Você escolheu o atributo PIB per capita\n");
            printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", estado1, codigo1, pibpercapita1);
            printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", estado2, codigo2, pibpercapita2);
            resultado2 = pibpercapita1 > pibpercapita2 ? 1 :0;
        break;    
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    

    if (resultado1 && resultado2) {
        printf("Sua carta %s (%s) ganhou de  %s (%s) !!\n", estado1, codigo1, estado2, codigo2);
    } else if (resultado1 != resultado2) {
        printf("Sua carta %s (%s) empatou com a carta %s (%s) !!\n", estado1, codigo1, estado2, codigo2);
    } else {
        printf("Sua carta %s (%s) perdeu para %s (%s) !!\n", estado1, codigo1, estado2, codigo2);
    }
    printf("\n");
    return 0;
case 2:
    printf("\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolha o atributo: ");
    scanf("%d", &atributo1);   
    printf("\n");
    switch (atributo1) {
        case 1:
            printf("Você escolheu o atributo População\n");
            printf("Carta 2 - %s (%s) População: %d\n", estado2, codigo2, populacao2);
            printf("Carta 1 - %s (%s) População: %d\n", estado1, codigo1, populacao1);
            resultado1 = populacao2 > populacao1 ? 1 :0;
            break;
        case 2:
            printf("Você escolheu o atributo Área\n");
            printf("Carta 2 - %s (%s) Área: %.2f km²\n", estado2, codigo2, area2);
            printf("Carta 1 - %s (%s) Área: %.2f km²\n", estado1, codigo1, area1);
            resultado1 = area2 > area1 ? 1 :0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB\n");
            printf("Carta 2 - %s (%s) PIB: R$%.2f\n", estado2, codigo2, pib2);
            printf("Carta 1 - %s (%s) PIB: R$%.2f\n", estado1, codigo1, pib1);
            resultado1 = pib2 > pib1 ? 1 :0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos turísticos\n");
            printf("Carta 2 - %s (%s) Pontos turísticos: %d\n", estado2, codigo2, pnturistico2);
            printf("Carta 1 - %s (%s) Pontos turísticos: %d\n", estado1, codigo1, pnturistico1);
            resultado1 = pnturistico2 > pnturistico1 ? 1 :0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade populacional\n");
            printf("Carta 2 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado2, codigo2, densidade2);
            printf("Carta 1 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            resultado1 = densidade2 < densidade1 ? 1 :0;
            break;
        case 6:
            printf("Você escolheu o atributo PIB per capita\n");
            printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", estado2, codigo2, pibpercapita2);
            printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", estado1, codigo1, pibpercapita1);
            resultado1 = pibpercapita2 > pibpercapita1 ? 1 :0;
            break;
        default:
            printf("Atributo inválido!\n");
            return 0;

    }
    
    printf("\n");
    printf("Escolha o segundo atributo para comparar:\n");
    printf("ATENCAO: Voce deve escolher um atributo diferente do primeiro!!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolha o atributo: ");
    scanf("%d", &atributo2);
    printf("\n");

    if (atributo2 == atributo1) {
    printf("Atributo inválido! Escolha um atributo diferente do primeiro.\n");
    return 0;
    }
    switch (atributo2) {
    case 1:
        printf("Você escolheu o atributo População\n");
        printf("Carta 2 - %s (%s) População: %d\n", estado2, codigo2, populacao2);
        printf("Carta 1 - %s (%s) População: %d\n", estado1, codigo1, populacao1);
        resultado2 = populacao2 > populacao1 ? 1 :0;
        break;
    case 2:
        printf("Você escolheu o atributo Área\n");
        printf("Carta 2 - %s (%s) Área: %.2f km²\n", estado2, codigo2, area2);
        printf("Carta 1 - %s (%s) Área: %.2f km²\n", estado1, codigo1, area1);
        resultado2 = area2 > area1 ? 1 :0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB\n");
        printf("Carta 2 - %s (%s) PIB: R$%.2f\n", estado2, codigo2, pib2);
        printf("Carta 1 - %s (%s) PIB: R$%.2f\n", estado1, codigo1, pib1);
        resultado2 = pib2 > pib1 ? 1 :0;
        break;
    case 4:
        printf("Você escolheu o atributo Pontos turísticos\n");
        printf("Carta 2 - %s (%s) Pontos turísticos: %d\n", estado2, codigo2, pnturistico2);
        printf("Carta 1 - %s (%s) Pontos turísticos: %d\n", estado1, codigo1, pnturistico1);
        resultado2 = pnturistico2 > pnturistico1 ? 1 :0;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade populacional\n");
        printf("Carta 2 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado2, codigo2, densidade2);
        printf("Carta 1 - %s (%s) Densidade Populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
        resultado2 = densidade2 < densidade1 ? 1 :0;
        break;
    case 6:
        printf("Você escolheu o atributo PIB per capita\n");
        printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", estado2, codigo2, pibpercapita2);
        printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", estado1, codigo1, pibpercapita1);
        resultado2 = pibpercapita2 > pibpercapita1 ? 1 :0;
    break;    
    default:
        printf("Opcao invalida!\n");
        return 0;
    }


        if (resultado2 && resultado1) {
            printf("Sua carta %s (%s) ganhou de %s (%s) !!\n", estado2, codigo2, estado1, codigo1);
        } else if (resultado2 != resultado1) {
            printf("Sua carta %s (%s) empatou com a carta %s (%s) !!\n", estado2, codigo2, estado1, codigo1);
        } else {
            printf("Sua carta %s (%s) perdeu para %s (%s) !!\n", estado2, codigo2, estado1, codigo1);
        }
        printf("\n");

        

      
       
        
            
    }
}