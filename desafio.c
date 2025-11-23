#include <stdio.h>

int main() {
    char estado[50];
    char codigo[3];
    char cidade[20];
    int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;

    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin);
   estado[strcspn(estado, "\n")] = '\0';

    printf("Digite o codigo do estado (2 letras): ");
    scanf("%2s", codigo);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km2 da cidade: \n");
    scanf("%f", &area_km2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s", estado);
    printf("Codigo: %2s", codigo);
    printf("Cidade: %s", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area (km2): %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s", estado);
    printf("Codigo: %s", codigo);
    printf("Cidade: %s", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area (km2): %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    return 0;
}