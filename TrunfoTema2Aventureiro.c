#include <stdio.h>

int main() {
    char nome1[50] = "Samoa", nome2[50] = "Malta";
    int populacao1 = 176287, populacao2 = 452542;
    int pontos1 = 10, pontos2 = 23;
    float area1 = 2831.0, area2 = 316.0;
    float pib1 = 1218, pib2 = 22802;
    float dens1 = populacao1 / area1;
    float dens2 = populacao2 / area2;

    int opcao;

    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("Comparando: %s vs %s\n\n", nome1, nome2);

    do {
        // Menu interativo com opções
        printf("Escolha um atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Pontos Turisticos\n");
        printf("3 - Area Territorial (km2)\n");
        printf("4 - PIB (em bilhoes USD)\n");
        printf("5 - Densidade Demografica (habitantes/km2)\n");
        printf("0 - Sair\n");
        printf("Digite o numero da opcao: ");
        scanf("%d", &opcao);

        printf("\n--- Comparacao entre %s e %s ---\n", nome1, nome2);

        switch (opcao) {
            case 1: // População
                printf("Atributo: Populacao\n");
                printf("%s: %d habitantes\n", nome1, populacao1);
                printf("%s: %d habitantes\n", nome2, populacao2);
                if (populacao1 > populacao2)
                    printf("Vencedor: %s\n", nome1);
                else if (populacao2 > populacao1)
                    printf("Vencedor: %s\n", nome2);
                else
                    printf("Empate!\n");
                break;

            case 2: // Pontos turísticos
                printf("Atributo: Pontos Turisticos\n");
                printf("%s: %d pontos\n", nome1, pontos1);
                printf("%s: %d pontos\n", nome2, pontos2);
                if (pontos1 > pontos2)
                    printf("Vencedor: %s\n", nome1);
                else if (pontos2 > pontos1)
                    printf("Vencedor: %s\n", nome2);
                else
                    printf("Empate!\n");
                break;

            case 3: // Área
                printf("Atributo: Area Territorial (km2)\n");
                printf("%s: %.1f km2\n", nome1, area1);
                printf("%s: %.1f km2\n", nome2, area2);
                if (area1 > area2)
                    printf("Vencedor: %s\n", nome1);
                else if (area2 > area1)
                    printf("Vencedor: %s\n", nome2);
                else
                    printf("Empate!\n");
                break;

            case 4: // PIB
                printf("Atributo: PIB (em bilhoes USD)\n");
                printf("%s: %.3f bilhoes\n", nome1, pib1);
                printf("%s: %.3f bilhoes\n", nome2, pib2);
                if (pib1 > pib2)
                    printf("Vencedor: %s\n", nome1);
                else if (pib2 > pib1)
                    printf("Vencedor: %s\n", nome2);
                else
                    printf("Empate!\n");
                break;

            case 5: // Densidade demográfica
                printf("Atributo: Densidade Demografica (habitantes/km2)\n");
                printf("%s: %.2f hab/km2\n", nome1, dens1);
                printf("%s: %.2f hab/km2\n", nome2, dens2);
                if (dens1 < dens2)
                    printf("Vencedor: %s (menor densidade)\n", nome1);
                else if (dens2 < dens1)
                    printf("Vencedor: %s (menor densidade)\n", nome2);
                else
                    printf("Empate!\n");
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção invalida. Tente novamente.\n");
        }

        printf("\n");

    } while (opcao != 0);

    return 0;
}
