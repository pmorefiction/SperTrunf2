#include <stdio.h>

int main() {
    char nome1[50] = "Samoa", nome2[50] = "Malta";
    int populacao1 = 176287, populacao2 = 452542;
    int pontos1 = 10, pontos2 = 23;
    float area1 = 2831.0, area2 = 316.0;
    float pib1 = 1218, pib2 = 22802;
    float dens1 = populacao1 / area1;
    float dens2 = populacao2 / area2;

    int attr1 = -1, attr2 = -1;

    float valor1_carta1 = 0, valor2_carta1 = 0;
    float valor1_carta2 = 0, valor2_carta2 = 0;

    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("Comparando: %s vs %s\n\n", nome1, nome2);

    // Primeiro menu
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Pontos Turisticos\n");
    printf("3 - Area Territorial (km2)\n");
    printf("4 - PIB (em bilhoes USD)\n");
    printf("5 - Densidade Demografica (habitantes/km2)\n");
    printf("Digite a opcao: ");
    scanf("%d", &attr1);

    if (attr1 < 1 || attr1 > 5) {
        printf("Atributo invalido.\n");
        return 1;
    }

    // Segundo menu
    printf("\nEscolha o segundo atributo para comparar:\n");
    for (int i = 1; i <= 5; i++) {
        if (i != attr1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Pontos Turisticos\n"); break;
                case 3: printf("3 - Area Territorial (km2)\n"); break;
                case 4: printf("4 - PIB (em bilhoes USD)\n"); break;
                case 5: printf("5 - Densidade Demografica (habitantes/km2)\n"); break;
            }
        }
    }
    printf("Digite a opcao: ");
    scanf("%d", &attr2);

    if (attr2 < 1 || attr2 > 5 || attr2 == attr1) {
        printf("Atributo invalido ou repetido.\n");
        return 1;
    }

    printf("\n--- Comparacao entre %s e %s ---\n", nome1, nome2);

    for (int i = 1; i <= 2; i++) {
        int atributo = (i == 1) ? attr1 : attr2;
        float val1 = 0, val2 = 0;
        char label[50];

        switch (atributo) {
            case 1:
                val1 = populacao1;
                val2 = populacao2;
                sprintf(label, "Populacao");
                break;
            case 2:
                val1 = pontos1;
                val2 = pontos2;
                sprintf(label, "Pontos Turisticos");
                break;
            case 3:
                val1 = area1;
                val2 = area2;
                sprintf(label, "Area Territorial (km2)");
                break;
            case 4:
                val1 = pib1;
                val2 = pib2;
                sprintf(label, "PIB (bilhoes USD)");
                break;
            case 5:
                val1 = dens1;
                val2 = dens2;
                sprintf(label, "Densidade Demografica (hab/km2)");
                break;
        }

        printf("\nAtributo %d: %s\n", i, label);
        printf("%s: %.2f\n", nome1, val1);
        printf("%s: %.2f\n", nome2, val2);

        if (i == 1) {
            valor1_carta1 = val1;
            valor1_carta2 = val2;
        } else {
            valor2_carta1 = val1;
            valor2_carta2 = val2;
        }

        if (atributo == 5) {
            if (val1 < val2)
                printf("-> %s venceu neste atributo (menor densidade)\n", nome1);
            else if (val2 < val1)
                printf("-> %s venceu neste atributo (menor densidade)\n", nome2);
            else
                printf("-> Empate neste atributo!\n");
        } else {
            if (val1 > val2)
                printf("-> %s venceu neste atributo\n", nome1);
            else if (val2 > val1)
                printf("-> %s venceu neste atributo\n", nome2);
            else
                printf("-> Empate neste atributo!\n");
        }
    }

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\n--- Resultado Final ---\n");
    printf("%s: Soma dos atributos = %.2f\n", nome1, soma1);
    printf("%s: Soma dos atributos = %.2f\n", nome2, soma2);

    if (soma1 > soma2)
        printf("VENCEDOR DA RODADA: %s\n", nome1);
    else if (soma2 > soma1)
        printf("VENCEDOR DA RODADA: %s\n", nome2);
    else
        printf("Empate!\n");

    printf("\nPressione Enter para sair...");
    fflush(stdin);
    getchar();

    return 0;
}