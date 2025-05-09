#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    int resultado;

    // Entrada da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Entrada da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações
    printf("\nComparacao de Cartas:\n");

    // População
    resultado = populacao1 > populacao2 ? 1 : 0;
    printf("Populacao: Carta 1 venceu (%d)\n", resultado);

    // Área
    resultado = area1 > area2 ? 1 : 0;
    printf("Area: Carta 1 venceu (%d)\n", resultado);

    // PIB
    resultado = pib1 > pib2 ? 1 : 0;
    printf("PIB: Carta 1 venceu (%d)\n", resultado);

    // Pontos Turísticos
    resultado = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", resultado);

    // Densidade Populacional (menor vence)
    resultado = densidade1 < densidade2 ? 1 : 0;
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado);

    // PIB per Capita
    resultado = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado);

    // Super Poder
    resultado = superPoder1 > superPoder2 ? 1 : 0;
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado);

    return 0;
}