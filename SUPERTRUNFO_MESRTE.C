#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    float populacao1, area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // Variáveis da carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    float populacao2, area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    // Cadastro da carta 1
    printf("Cadastre a carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A10): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%f", &populacao1);
    printf("Area (em KM²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de R$): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da carta 2
    printf("\nCadastre a carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: B10): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%f", &populacao2);
    printf("Area (em KM²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de R$): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidadePopulacional1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;

    // Exibe as cartas (resumo)
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s (%c)\n", nomeCidade1, estado1);
    printf("Populacao: %.0f\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s (%c)\n", nomeCidade2, estado2);
    printf("Populacao: %.0f\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // Menu para escolher o atributo de comparação
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\n--- RESULTADO DA COMPARACAO ---\n");

    switch (escolha) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Carta 1 - %s: %.0f\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %.0f\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("Atributo: Area\n");
            printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
            
            // Regra invertida para densidade: menor vence
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s: R$ %.2f\n", nomeCidade1, pibPerCapita1);
            printf("Carta 2 - %s: R$ %.2f\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opcao invalida! Execute o programa novamente e escolha uma opcao valida.\n");
            break;
    }

    return 0;
}