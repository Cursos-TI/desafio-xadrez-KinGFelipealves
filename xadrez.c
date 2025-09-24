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

       printf("\n");

    // ================================
    // Movimento do CAVALO
    // ================================
    printf("Movimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    int Baixo = 2, Esquerda = 1;

    {
        for(int cavalo = 1; cavalo <= Baixo; cavalo++){
        printf("Baixo \n"); 
    
        if ( cavalo == Baixo) {
            
            int cavalo = 1;
            while (cavalo <= Esquerda)
        {
               printf("Esquerda\n");
            cavalo++;
        }
    }  
        }
    }
         return 0;
}