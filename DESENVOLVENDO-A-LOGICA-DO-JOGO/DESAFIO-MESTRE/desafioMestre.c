#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   char pais[50];
   unsigned long int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
    float densidade_populacional_km2;
    float pib_per_capita;
    
} Carta;
int main()
{
    Carta c1, c2;
    int opcao1, opcao2, resultado;
    char tecla;
    float valorA, valorB;
    float valorA2, valorB2;
    char nomeAtributo1[30], nomeAtributo2[30];
    
   
    while (1)
    {
        system("cls");
        // Carta 1
        
        float soma_c1 = 0, soma_c2 = 0;

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

        //menu escolha atributos
        printf("\n=== SUPER TRUNFO ===\n");

        do {
        printf("Escolha o primeiro atributo: ");
        printf("1 - Populacao\n");
        printf("2 - Area em km²\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional (km²)\n");
        printf("6 - PIB per Capita\n");
        printf("Opcao: ");
        scanf("%d", &opcao1);

        printf("Escolha o segundo atributo: ");
        if (opcao1 != 1) printf("1 - Populacao\n");
        if (opcao1 != 2) printf("2 - Area em km2\n");
        if (opcao1 != 3) printf("3 - PIB\n");
        if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
        if (opcao1 != 5) printf("5 - Densidade Populacional\n");
        if (opcao1 != 6) printf("6 - PIB per Capita\n");
            printf("Opcao: ");
        scanf("%d", &opcao2);

        if (opcao1 == opcao2 || opcao1 < 1 || opcao1 > 6 || opcao2 < 1 || opcao2 > 6) {
        printf("Atributos iguais nao sao permitidos. Tente novamente.\n");
        }

        } while (opcao1 == opcao2 || opcao1 < 1 || opcao1 > 6 || opcao2 < 1 || opcao2 > 6);
        
        

      

        // Atribuição dos valores dos atributos escolhidos
        switch (opcao1)
        {
        case 1:
            valorA = (float)c1.populacao;
            valorB = (float)c2.populacao;
            strcpy(nomeAtributo1, "Populacao");
            break;
        case 2:
            valorA = (float)c1.area_km2;
            valorB = (float)c2.area_km2;
            strcpy(nomeAtributo1, "Area em km2");
            break;
        case 3:
            valorA = (float)c1.pib;
            valorB = (float)c2.pib;
            strcpy(nomeAtributo1, "PIB");
            break;
        case 4:
            valorA = (float)c1.pontos_turisticos;
            valorB = (float)c2.pontos_turisticos;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;
        case 5:
            valorA = (float)c1.densidade_populacional_km2;
            valorB = (float)c2.densidade_populacional_km2;
            strcpy(nomeAtributo1, "Densidade Populacional");
            break;
        case 6:
            valorA = (float)c1.pib_per_capita;
            valorB = (float)c2.pib_per_capita;
            strcpy(nomeAtributo1, "PIB per Capita");
            break;
        }

        switch (opcao2)
        {
        case 1:
            valorA2 = (float)c1.populacao;
            valorB2 = (float)c2.populacao;
            strcpy(nomeAtributo2, "Populacao");
            break;
        case 2:
            valorA2 = (float)c1.area_km2;
            valorB2 = (float)c2.area_km2;
            strcpy(nomeAtributo2, "Area em km2");
            break;
        case 3:
            valorA2 = (float)c1.pib;
            valorB2 = (float)c2.pib;
            strcpy(nomeAtributo2, "PIB");
            break;
        case 4:
            valorA2 = (float)c1.pontos_turisticos;
            valorB2 = (float)c2.pontos_turisticos;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;
        case 5:
            valorA2 = (float)c1.densidade_populacional_km2;
            valorB2 = (float)c2.densidade_populacional_km2;
            strcpy(nomeAtributo2, "Densidade Populacional");
            break;
        case 6:
            valorA2 = (float)c1.pib_per_capita;
            valorB2 = (float)c2.pib_per_capita;
            strcpy(nomeAtributo2, "PIB per Capita");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
        

        // Calculo das somas para o resultado geral
        float v1_soma = (opcao1 == 5) ? (1.0 / valorA) : valorA;
        float v1_soma2 = (opcao2 == 5) ? (1.0 / valorA2) : valorA2;

        float v2_soma = (opcao1 == 5) ? (1.0 / valorB) : valorB;
        float v2_soma2 = (opcao2 == 5) ? (1.0 / valorB2) : valorB2;

        soma_c1 = v1_soma + v1_soma2;
        soma_c2 = v2_soma + v2_soma2;

        // Mostramos os dados de cada carta
        printf("\n--- COMPARATIVO DETALHADO ---\n");
        printf("Carta 1 (%s): %s = %.2f | %s = %.2f\n", c1.pais, nomeAtributo1, valorA, nomeAtributo2, valorA2);
        printf("Carta 2 (%s): %s = %.2f | %s = %.2f\n", c2.pais, nomeAtributo1, valorB, nomeAtributo2, valorB2);

        // Vencedores individuais
        printf("\nVencedor no Atributo 1 (%s): %s", nomeAtributo1, 
            (opcao1 == 5) ? (valorA < valorB ? c1.pais : c2.pais) : (valorA > valorB ? c1.pais : c2.pais));

        printf("\nVencedor no Atributo 2 (%s): %s\n", nomeAtributo2, 
            (opcao2 == 5) ? (valorA2 < valorB2 ? c1.pais : c2.pais) : (valorA2 > valorB2 ? c1.pais : c2.pais));

        // O Veredito da Soma
        printf("\nSoma Total %s: %.2f", c1.pais, soma_c1);
        printf("\nSoma Total %s: %.2f\n", c2.pais, soma_c2);

        if (soma_c1 > soma_c2) {
            printf("\nRESULTADO FINAL: %s VENCEU!\n", c1.pais);
        } else if (soma_c2 > soma_c1) {
            printf("\nRESULTADO FINAL: %s VENCEU!\n", c2.pais);
        } else {
            printf("\nRESULTADO FINAL: EMPATE!\n");
        }

        printf("\n=============================\n");
        printf("PRESSIONE ESC PARA SAIR || PRESSIONE QUALQUER OUTRA TECLA PARA CONTINUAR\n");

        tecla = _getch();

        if (tecla == 27) { // ESC
            break;
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    return 0;
}