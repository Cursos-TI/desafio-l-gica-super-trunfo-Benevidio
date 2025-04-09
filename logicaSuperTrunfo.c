#include <stdio.h>

// Definição da estrutura de uma carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados para a carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", carta1.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados para a carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", carta2.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f reais\n", carta2.pibPerCapita);

    // Comparação de cartas pelo PIB per capita
    printf("\n=== Comparacao de Cartas (Atributo: PIB per capita) ===\n");

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Carta 1 - %s venceu! (%.2f > %.2f)\n", carta1.nomeCidade, carta1.pibPerCapita, carta2.pibPerCapita);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("Carta 2 - %s venceu! (%.2f > %.2f)\n", carta2.nomeCidade, carta2.pibPerCapita, carta1.pibPerCapita);
    } else {
        printf("Empate! Ambas as cidades têm o mesmo PIB per capita (%.2f)\n", carta1.pibPerCapita);
    }

    return 0;
}
