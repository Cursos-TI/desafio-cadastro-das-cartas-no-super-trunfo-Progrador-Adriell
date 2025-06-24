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

    // Cálculos principais
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo dos super poderes
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidadePopulacional1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;

    // Exibir cartas
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s (%c)\n", nomeCidade1, estado1);
    printf("Populacao: %.0f\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s (%c)\n", nomeCidade2, estado2);
    printf("Populacao: %.0f\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação de apenas um atributo (PIB per Capita)
    printf("\n--- COMPARAÇÃO ---\n");
    printf("Atributo comparado: PIB per Capita\n");
    printf("Carta 1 - %s: R$ %.2f\n", nomeCidade1, pibPerCapita1);
    printf("Carta 2 - %s: R$ %.2f\n", nomeCidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}