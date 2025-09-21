#include <stdio.h>

int main() {
    // Número de casas que cada peça deve andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 1; 
    int casasEsquerda = 1;
    

    printf("=== Movimentos das pecas de Xadrez ===\n\n");

    // -------------------------------
    // Torre
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------------------
    // Bispo
    // -------------------------------
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // -------------------------------
    // Rainha
    // -------------------------------
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

     printf("\n");

    // -------------------------------
    // Cavalo
    // -------------------------------
    printf("Movimento da Cavalo:\n");
    while (casasCavalo--) 
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
    }

     int m = 0;
    while (m < casasEsquerda) {
        printf("Esquerda\n");
        m++;
    }

    printf("\n=== Fim da simulacao ===\n");


    return 0;
}