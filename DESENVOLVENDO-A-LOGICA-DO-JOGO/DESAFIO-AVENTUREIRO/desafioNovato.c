#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Desenvolvendo a lógica do jogo - Desafio Novato

typedef struct
{
    char estado[5];
    char codigo[4];
    char cidade[20];
   unsigned long int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
    float densidade_populacional_km2;
    float pib_per_capita;
    float super_poder;
} Carta;
int main()
{
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
    scanf("%lu", &c1.populacao);
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
   

    c1.densidade_populacional_km2 = (float)c1.populacao / c1.area_km2;

    c1.pib_per_capita = c1.pib / (float)c1.populacao;

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
    scanf("%lu", &c2.populacao);
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

    c2.densidade_populacional_km2 = (float)c2.populacao / c2.area_km2;

    c2.pib_per_capita = c2.pib / (float)c2.populacao;

    if (c1.populacao >= c2.populacao) {
        printf("Resultado: Carta 1 (%s - %s) venceu com Populacao de %lu\n ", c1.estado,c1.cidade, c1.populacao);
    }
    else {
        printf("Resultado: Carta 2 (%s - %s) venceu com Populacao de %lu\n", c2.estado,c2.cidade, c2.populacao);
    }


    /*
        // Saída
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", c1.estado);
    printf("Codigo: %s\n", c1.codigo);
    printf("Cidade: %s\n", c1.cidade);
    printf("Populacao: %lu\n", c1.populacao);
    printf("Area (km2): %.2f\n", c1.area_km2);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos turisticos: %d\n", c1.pontos_turisticos);
    printf("Densidade populacional (km2): %.2f\n", c1.densidade_populacional_km2);
    printf("PIB per Capita: %.2f\n", c1.pib_per_capita);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", c2.estado);
    printf("Codigo: %s\n", c2.codigo);
    printf("Cidade: %s\n", c2.cidade);
    printf("Populacao: %lu\n", c2.populacao);
    printf("Area (km2): %.2f\n", c2.area_km2);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos turisticos: %d\n", c2.pontos_turisticos);
    printf("Densidade populacional (km2): %.2f\n", c2.densidade_populacional_km2);
    printf("PIB per Capita: %.2f\n", c2.pib_per_capita);
    */

    /*
    // Super Poder
    c1.super_poder =
    c1.populacao +
    c1.area_km2 +
    c1.pib +
    c1.pontos_turisticos +
    c1.pib_per_capita +
    (1 / c1.densidade_populacional_km2);

c2.super_poder =
    c2.populacao +
    c2.area_km2 +
    c2.pib +
    c2.pontos_turisticos +
    c2.pib_per_capita +
    (1 / c2.densidade_populacional_km2);
    */

    /*
    //Comparações usadas apenas para validação lógica (debug)
    printf("\n--- COMPARACAO ---\n");

printf("Populacao: %d\n", c1.populacao > c2.populacao);
printf("Area: %d\n", c1.area_km2 > c2.area_km2);
printf("PIB: %d\n", c1.pib > c2.pib);
printf("Pontos Turisticos: %d\n", c1.pontos_turisticos > c2.pontos_turisticos);

// Densidade: MENOR vence 
printf("Densidade: %d\n", c1.densidade_populacional_km2 < c2.densidade_populacional_km2);

printf("PIB per Capita: %d\n", c1.pib_per_capita > c2.pib_per_capita);

printf("Super Poder: %d\n", c1.super_poder > c2.super_poder);
*/

    return 0;
}
