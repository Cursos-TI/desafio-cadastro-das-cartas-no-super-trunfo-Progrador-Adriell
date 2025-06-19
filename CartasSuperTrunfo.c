#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];         // Ex: A10 + '\0'
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta* carta, int numero) {
    printf("\nCadastre a carta %d:\n", numero);
    
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta->estado); // espaço antes do %c para limpar o buffer

    printf("Digite o codigo da carta (EX: A10): ");
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade); // ler até o \n

    printf("Digite a populacao (numero de pessoas): ");
    scanf("%d", &carta->populacao);

    printf("Digite o tamanho da area (em KM²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta->pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void mostrarCarta(Carta carta, int numero) {
    printf("\n--- Carta %d ---\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f KM²\n", carta.area);
    printf("PIB: %.2f Bilhoes de Reais\n", carta.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta.pontosTuristicos);
}


