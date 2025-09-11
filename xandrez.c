#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;


    // Torre -> usa FOR
    
        printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("direita\n");
    }

    // Bispo -> usa WHILE
      
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
   
    // Rainha -> usa DO-WHILE
   
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    //cavalo -> usa FOR + WHILE aninhados
    //movimento: 2 casas para baixo + 1 casa para esquerda

    printf ("\nMovimento do Cavalo: \n");

    //Primeiro loop FOR: movimento para baixo
    for (int k = 1; k <= casasBaixoCavalo; k++){

    }

    // loop WHILE aninhado: movimento para baixo
    for (int k =1; k <= casasBaixoCavalo; k++) {

    }

    //loop While aninhado: movimento para esquerda
    int l = 1;
    while (l <= casasEsquerdaCavalo) {
        printf("Esquerda\n");
        l++;

    }
    return 0;
}

