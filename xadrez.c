#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Nivel novato
    
    //declarando o index

    int t=0, b=0, r=0;

    //nome da peça

    printf(" **Movimento da torre**\n\n");

    //Estrutura de repetiçao da torre (while)

    while (t < 5){

        printf("Direita\n");
        t++;

    };

    //Nome da peça

    printf(" \n**Movimento do bispo**\n\n");

    //Estrutura de repetiçao do bispo (for)

    for(b; b < 5; b++){

        printf("Cima, direita\n");

    };

    //Nome da peça

    printf(" \n**Movimento da rainha**\n\n");

    //Estrutura de repetiçao da rainha (do-while)

    do {

        printf("Esquerda\n");
        r++;

    } while (r < 8);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
