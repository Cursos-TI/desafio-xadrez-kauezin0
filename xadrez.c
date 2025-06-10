#include <stdio.h>

void torre(int num){
    if(num > 0){
        printf("Direita\n");
        torre(num - 1);
    }
}

void bispo(int num){
    if (num > 0){
        printf("Cima, Direita\n");
        bispo(num - 1);
    }
}

void rainha(int num){
    if(num > 0){
        printf("Esquerda\n");
        rainha(num - 1);
    }
}

int main() {

    //Nivel novato
    
    //declarando o index

    int t=0, b=0, r=0;

    //nome da peça

    printf(" **Movimento da torre**\n\n");

    torre(5);

    //Nome da peça

    printf(" \n**Movimento do bispo**\n\n");

    bispo(5);

    //Nome da peça

    printf(" \n**Movimento da rainha**\n\n");

    rainha(8);
/*
    //Estrutura de repetiçao da rainha (do-while)

    do {

        printf("Esquerda\n");
        r++;

    } while (r < 8);

    //declarando o movimento da peça

    int movimentodapeca = 1;

    //Nome da peça

    printf(" \n**Movimento do cavalo**\n\n");

    //Estrutura de repetiçao do cavalo (for aninhado)

    while (movimentodapeca--){

        for(int i = 0; i < 2; i++){

            printf("Cima\n");
        }
        printf("direita\n");

    };
        

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
*/ 
    return 0;
}
