    #include <stdio.h>

// ==================================================
// Função Recursiva para o Movimento da Torre       
// ==================================================
void moverTorre(int torre) {
    if (torre == 0) return;
    printf("Direita\n");
    moverTorre(torre - 1);
}
// ==================================================
// Função Recursiva para o Movimento da Rainha
// ==================================================
void moverRainha(int rainha){
    if (rainha == 0) return;
    printf("Esquerda\n");
    moverRainha(rainha - 1);
}
// ==================================================
// Função Recursiva para o Movimento do Bispo
// ==================================================
void moverBispo(int vertical, int horizontal){
    if(vertical == 0) return;
   
    for (int bispo = 1; bispo <= horizontal; bispo++){
        printf("Diagonal Cima Direita \n");
    }
    moverBispo(vertical - 1, horizontal);
}    
// ==================================================
//  Função Recursiva para o Movimento do Cavalo 
// ==================================================
void moverCavalo(int movimentos){
    int cima = 2;
    int direita = 1;

    for (int cavalo = 1; cavalo <= movimentos; cavalo++){
        printf("Movimentos %d: \n", cavalo);

    for (int cavalo = 1; cavalo <= cima + direita; cavalo++){
        if (cavalo <= cima){
            printf("Cima \n");
            continue;
        }
        if (cavalo == cima -1){
            printf("Direita \n");
            break;
        }
    }
    printf("\n"); // Separação dos movimentos 
    }
}

   int main() {
    // Definições dos Movimentos
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispoVertical = 3;
    int casasBispoHorizontal = 2;
    int movimentosCavalo = 3;

        // ================================
        // Movimento da TORRE
        // ================================
        
        printf("Movimento da Torre (%d Casas para a Direita):\n", casasTorre);
        moverTorre(casasTorre);
        printf("\n");

        // ================================
        // Movimento do BISPO
        // ================================
        printf("Movimento do Bispo (Vertical: %d x Horizontal: %d):\n", casasBispoVertical, casasBispoHorizontal);
        moverBispo(casasBispoVertical, casasBispoHorizontal);
        printf("\n");

        // ================================
        // Movimento da RAINHA
        // ================================
         printf("Movimento da Rainha (%d casas para Esquerda):\n", casasRainha);
         moverRainha(casasRainha);
         printf("\n");

        // ================================
        // Movimento do CAVALO
        // ================================
        printf("Movimento do Cavalo (%d movimentos em 'L' - 2 Cima, 1 Direita):\n", movimentosCavalo);
        moverCavalo(movimentosCavalo);
        printf("\n");

    return 0;
    }