#include <stdio.h>

int main() {
    int i;

    printf("=== Movimento da Torre ===\n");

    for (i = 0; i < 5; i++)
    {
        printf("Torre para Direita %dx\n", i + 1);
    }


    printf("=== Movimento da Rainha ===\n");
    i = 0;

    do { 
        printf("Rainha para esquerda %dx\n", i + 1);
        i++;
    } while (i < 8);


    printf("=== Movimento do Bispo ===\n");
    i = 0;

    while (i < 5)
    {
        printf("Bispo para cima e direita %dx\n", i + 1);
        i++;
    }
    
    
    return 0;
}