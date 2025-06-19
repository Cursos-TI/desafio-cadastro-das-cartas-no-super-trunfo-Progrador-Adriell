#include <stdio.h>

int main() {

    // Variaveis da carta 1
    char estado1;
    char codigo1[4]; // 3 caracteres (EX: A10) + 1 para o terminador '\0'
    char nomeCidade1[50]; // Tamanho do nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variaveis da carta 2
    char estado2;
    char codigo2[4]; // 3 caracteres (EX: B10) + 1 para o terminador '\0'
    char nomeCidade2[50]; // Tamanho do nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // CADASTRO DA CARTA 1
    printf("Cadastre a carta 1:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1); // espaço antes do %c para limpar buffer

    printf("Digite o codigo da carta (EX: A10): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao (numero de Pessoas): ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Digite o tamanho da Area (em KM²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // MOSTRAR CARTAS
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %.3d\n", populacao1);
    printf("Area KM²: %.2f KM²\n", area1);
    printf("PIB: %.2f Bilhoes de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %.3d\n", populacao2);
    printf("Area KM²: %.2f KM²\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
