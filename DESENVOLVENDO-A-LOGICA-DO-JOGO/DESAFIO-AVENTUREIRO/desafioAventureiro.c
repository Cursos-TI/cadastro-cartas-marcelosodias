#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Desenvolvendo a lógica do jogo - Desafio Novato

typedef struct
{
   char pais[50];
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
    int opcao;
   
    // Carta 1
    
    printf("Digite o nome do pais: \n");
    fgets(c1.pais, sizeof(c1.pais), stdin);
    c1.pais[strcspn(c1.pais, "\n")] = '\0';


    printf("Digite a populacao do pais: \n");
    scanf("%lu", &c1.populacao);
    getchar();

    printf("Digite a area em km2 do pais: \n");
    scanf("%f", &c1.area_km2);
    getchar();

    printf("Digite o PIB do pais: \n");
    scanf("%f", &c1.pib);
    getchar();

    printf("Digite o numero de pontos turisticos do pais: \n");
    scanf("%d", &c1.pontos_turisticos);
    getchar();
    
   

    c1.densidade_populacional_km2 = (float)c1.populacao / c1.area_km2;

    c1.pib_per_capita = c1.pib / (float)c1.populacao;

     // Carta 2

    printf("Digite o nome do pais: \n");
    fgets(c2.pais, sizeof(c2.pais), stdin);
    c2.pais[strcspn(c2.pais, "\n")] = '\0';
    
    printf("Digite a populacao do pais: \n");
    scanf("%lu", &c2.populacao);
    getchar();

    printf("Digite a area em km2 do pais: \n");
    scanf("%f", &c2.area_km2);
    getchar();

    printf("Digite o PIB do pais: \n");
    scanf("%f", &c2.pib);
    getchar();

    printf("Digite o numero de pontos turisticos do pais: \n");
    scanf("%d", &c2.pontos_turisticos);
    getchar();

    c2.densidade_populacional_km2 = (float)c2.populacao / c2.area_km2;

    c2.pib_per_capita = c2.pib / (float)c2.populacao;

    // Menu interativo
    printf("\n=== SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Comparacao de cartas
    printf("\n=== RESULTADO ===\n");

switch(opcao) {
    case 1:
        printf("Comparando Populacao:\n");
        printf("%s: %lu\n", c1.pais, c1.populacao);
        printf("%s: %lu\n", c2.pais, c2.populacao);

        if (c1.populacao > c2.populacao)
            printf("Vencedor: %s\n", c1.pais);
        else if (c2.populacao > c1.populacao)
            printf("Vencedor: %s\n", c2.pais);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Comparando Area:\n");
        printf("%s: %.2f\n", c1.pais, c1.area_km2);
        printf("%s: %.2f\n", c2.pais, c2.area_km2);

        if (c1.area_km2 > c2.area_km2)
            printf("Vencedor: %s\n", c1.pais);
        else if (c2.area_km2 > c1.area_km2)
            printf("Vencedor: %s\n", c2.pais);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("Comparando PIB:\n");
        printf("%s: %.2f\n", c1.pais, c1.pib);
        printf("%s: %.2f\n", c2.pais, c2.pib);

        if (c1.pib > c2.pib)
            printf("Vencedor: %s\n", c1.pais);
        else if (c2.pib > c1.pib)
            printf("Vencedor: %s\n", c2.pais);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Comparando Pontos Turisticos:\n");
        printf("%s: %d\n", c1.pais, c1.pontos_turisticos);
        printf("%s: %d\n", c2.pais, c2.pontos_turisticos);

        if (c1.pontos_turisticos > c2.pontos_turisticos)
            printf("Vencedor: %s\n", c1.pais);
        else if (c2.pontos_turisticos > c1.pontos_turisticos)
            printf("Vencedor: %s\n", c2.pais);
        else
            printf("Empate!\n");
        break;

    case 5: // densidade invertida
        printf("Comparando Densidade Demografica:\n");
        printf("%s: %.2f\n", c1.pais, c1.densidade_populacional_km2);
        printf("%s: %.2f\n", c2.pais, c2.densidade_populacional_km2);

        if (c1.densidade_populacional_km2 < c2.densidade_populacional_km2)
            printf("Vencedor: %s\n", c1.pais);
        else if (c2.densidade_populacional_km2 < c1.densidade_populacional_km2)
            printf("Vencedor: %s\n", c2.pais);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opcao invalida!\n");
}


    return 0;
}
