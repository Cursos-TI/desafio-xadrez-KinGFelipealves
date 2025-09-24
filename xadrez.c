#include <stdio.h>

int main() {
    // ================================
    // Movimento da TORRE
    // ================================
    
    int torre;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }

    printf("\n");

    // ================================
    // Movimento do BISPO
    // ================================
   
    int bispo = 1;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (bispo <= 5) {
        printf("Direita\n");
        bispo++;
    }

    printf("\n"); 

    // ================================
    // Movimento da RAINHA
    // ================================

    int rainha = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}