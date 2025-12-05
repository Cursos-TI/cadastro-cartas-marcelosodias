#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

typedef struct {
    char estado[2];
    char codigo[4];
    char cidade[20];
    int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
} Carta;
int main() {
    Carta c1, c2;
    char buffer[20];

    // Carta 1
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    fgets(c1.estado, sizeof(c1.estado), stdin);
    c1.estado[strcspn(c1.estado, "\n")] = '\0';

    printf("Digite a  letra do estado seguida de um numero de 01 a 04: ");
    scanf("%3s", buffer);
    strcpy(c1.codigo, buffer);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(c1.cidade, sizeof(c1.cidade), stdin);
    c1.cidade[strcspn(c1.cidade, "\n")] = '\0';

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &c1.populacao);
    getchar();

    printf("Digite a area em km2 da cidade: \n");
    scanf("%f", &c1.area_km2);
    getchar();

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &c1.pib);
    getchar();

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &c1.pontos_turisticos);
    getchar();

    // Carta 2
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    fgets(c2.estado, sizeof(c2.estado), stdin);
    c2.estado[strcspn(c2.estado, "\n")] = '\0';

    printf("Digite a  letra do estado seguida de um numero de 01 a 04: ");
    scanf("%3s", buffer);
    strcpy(c2.codigo, buffer);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(c2.cidade, sizeof(c2.cidade), stdin);
    c2.cidade[strcspn(c2.cidade, "\n")] = '\0';

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &c2.populacao);
    getchar();

    printf("Digite a area em km2 da cidade: \n");
    scanf("%f", &c2.area_km2);
    getchar();

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &c2.pib);
    getchar();

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &c2.pontos_turisticos);
    getchar();

    // Saída
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", c1.estado);
    printf("Codigo: %s\n", c1.codigo);
    printf("Cidade: %s\n", c1.cidade);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area (km2): %.2f\n", c1.area_km2);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos turisticos: %d\n", c1.pontos_turisticos);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", c2.estado);
    printf("Codigo: %s\n", c2.codigo);
    printf("Cidade: %s\n", c2.cidade);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area (km2): %.2f\n", c2.area_km2);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos turisticos: %d\n", c2.pontos_turisticos);

    return 0;


}
