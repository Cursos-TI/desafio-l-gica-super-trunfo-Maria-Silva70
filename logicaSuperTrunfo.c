#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Entrada de dados da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta: ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta: ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos
    float densidade1 = carta1.populacao / carta1.area;
    float densidade2 = carta2.populacao / carta2.area;

    float pibPerCapita1 = carta1.pib * 1000000000 / carta1.populacao; // PIB em reais
    float pibPerCapita2 = carta2.pib * 1000000000 / carta2.populacao;

    // Exibição dos cálculos
    printf("\n=== Indicadores Calculados ===\n");
    printf("Carta 1 - %s:\n", carta1.nomeCidade);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2 - %s:\n", carta2.nomeCidade);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // COMPARAÇÃO - Atributo: População (maior vence)
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s: %d habitantes\n", carta1.nomeCidade, carta1.populacao);
    printf("Carta 2 - %s: %d habitantes\n", carta2.nomeCidade, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate! Ambas têm a mesma população.\n");
    }

    return 0;
}
