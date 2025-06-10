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



    printf(" **Movimento da torre**\n\n");

    torre(5);


    printf(" \n**Movimento do bispo**\n\n");

    bispo(5);


    printf(" \n**Movimento da rainha**\n\n");

    rainha(8);



    int cima = 0, direita = 0;


    printf(" \n**Movimento do cavalo**\n\n");

     for(int i = 0; i < 10; i++){

        if(cima < 2){

            printf("Cima\n");

            cima++;

            continue;
        }

        if (cima == 2 && direita == 0){
            printf("Direita\n");

            direita++;

            break;
        } 
        

    };
      
    return 0;
}
