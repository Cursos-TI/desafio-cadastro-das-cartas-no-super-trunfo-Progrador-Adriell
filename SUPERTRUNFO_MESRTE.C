#include <stdio.h>

int main() {

    // Variaveis da carta 1
    char estado1;
    char codigo1[4]; // 3 caracteres (EX: A10) + 1 para o terminador '\0'
    char nomeCidade1[50]; // Tamanho do nome da cidade
    float populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float Densidadepopulacional1;
    float PIBperCapita1;

    // Variaveis da carta 2
    char estado2;
    char codigo2[4]; // 3 caracteres (EX: B10) + 1 para o terminador '\0'
    char nomeCidade2[50]; // Tamanho do nome da cidade
    float populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float Densidaddepopulacional2;
    float PIBperCapita2;

    // CADASTRO DA CARTA 1
    printf("Cadastre a carta 1:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1); // espaço antes do %c para limpar buffer

    printf("Digite o codigo da carta (EX: A10): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao (numero de Pessoas): ");
    scanf("%f", &populacao1);

    printf("Digite o tamanho da Area (em KM²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // CADASTRO DA CARTA 2
    printf("\nCadastre a carta 2:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (EX: B10): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao (numero de Pessoas): ");
    scanf("%f", &populacao2);

    printf("Digite o tamanho da Area (em KM²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //CALCULOS DE DESIDADE 
    Densidadepopulacional1 = (populacao1 / area1);
    Densidaddepopulacional2 = (populacao2 / area2);

    //CALCULOS DE PIB 
    PIBperCapita1 = (pib1 * 1000000000) / populacao1;
    PIBperCapita2 = (pib2 * 1000000000) / populacao2;
    
    //SUPER PODER

   float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1 - Densidadepopulacional1;
   float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2 - Densidaddepopulacional2;
    
    // MOSTRAR CARTAS

    //CARTA 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %f\n", populacao1);
    printf("Area KM²: %.2f KM²\n", area1);
    printf("PIB: %.2f Bilhoes de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Desidade Populacional: %.2f hab/km²\n" , Densidadepopulacional1);
    printf("PIB per Capita: %.2f\n" , PIBperCapita1);

    //CARTA 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %f\n", populacao2);
    printf("Area KM²: %.2f KM²\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Desidade Populacional: %.2f hab/km²\n" , Densidaddepopulacional2);
    printf("PIB per Capita: %.2f\n" , PIBperCapita2);

    //COMPARAÇÃO DAS CARTAS

    printf("\n ***RESULTADOS***\n");

int carta1 =0, carta2 = 0;

carta1 += (populacao1 > populacao2);
carta2 += (populacao1 < populacao2);

printf("População: carta1: %d - carta2: %d\n", populacao1, populacao2);


    carta1 += (pib1 > pib2);
    carta2 += (pib2 > pib1);

    printf("PIB: Carta1: %f - Carta2: %f\n", pib1, pib2);

    carta1 += (pontosTuristicos1 > pontosTuristicos2);
    carta2 += (pontosTuristicos2 > pontosTuristicos1);

    printf("PONTOS TURISTICOS: Carta1: %d - Carta2: %d\n", pontosTuristicos1, pontosTuristicos2);

    carta1 += (Densidadepopulacional1 < Densidaddepopulacional2);
    carta2 += (Densidaddepopulacional2 < Densidadepopulacional1);

    printf("DENSIDADE POPULACIONAL: Carta1: %f - Carta2: %f\n", Densidadepopulacional1, Densidaddepopulacional2);

    carta1 += (PIBperCapita1 > PIBperCapita2);
    carta2 += (PIBperCapita2 > PIBperCapita1);

    printf("PIB PER CAPITA: Carta1: %f - Carta2: %f\n", PIBperCapita1, PIBperCapita2);

    carta1 += (superPoder1 > superPoder2);
    carta2 += (superPoder2 > superPoder1);

    printf("SUPER PODER: Carta1: %f - Carta2: %f\n", superPoder1, superPoder2);

    printf("\nPONTUAÇÃO FINAL:\n");
    printf("CARTA 01: %d pontos\n", carta1);
    printf("CARTA 02: %d pontos\n", carta2);

    return 0;
}