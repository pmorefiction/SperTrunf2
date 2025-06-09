#include <stdio.h>

int main() {
    char codigo1[4] = "A1", nome1[50] = "Santos";
    char codigo2[4] = "B2", nome2[50] = "Londrina";
    int populacao1 = 418608, populacao2 = 577318;
    int pontos1 = 10, pontos2 = 80;
    float area1 = 280674, area2 = 1652569;
    float pib1 = 22.07, pib2 = 23.60;

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    // Cálculo do PIB per capita
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("\n--- Cidade 1 ---\n");
    printf("Codigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n",
           codigo1, nome1, populacao1, area1, pib1, pontos1);
    printf("Densidade Populacional: %.4f hab/km2\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\n--- Cidade 2 ---\n");
    printf("Codigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n",
           codigo2, nome2, populacao2, area2, pib2, pontos2);
    printf("Densidade Populacional: %.4f hab/km2\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    // Comparação de cartas
    printf("\n--- Comparação de cartas (Atributo: Densidade Populacional) ---\n");
    printf("Carta 1 - %s (%s): %.4f hab/km2\n", nome1, codigo1, densidade1);
    printf("Carta 2 - %s (%s): %.4f hab/km2\n", nome2, codigo2, densidade2);

    // Resultado
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else {
        if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma densidade populacional.\n");
        }
    }

    return 0;
}