#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ------------------------------
    // Torre -> usa FOR
    // Move-se em linha reta. Vamos simular 5 casas para a direita.
    // ------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("direita\n");
    }

    // Bispo -> usa WHILE
    // Move-se em diagonal. Vamos simular 5 casas "Cima + Direita".
   
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
   
    // Rainha -> usa DO-WHILE
    // Move-se em qualquer direção. Vamos simular 8 casas para a esquerda.
   
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}

