/* Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int mat[5][10], i, j, soma;
    int arrayL[5], arrayC[10];

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            mat[i][j] = rand() % 50;
        }
    }

    for(i = 0; i < 5; i++){
        soma = 0;
        for(j = 0; j < 10; j++){
            soma += mat[i][j];
        }
        arrayL[i] = soma;
    }

    for(j = 0; j < 10; j++){
        soma = 0;
        for(i = 0; i < 5; i++){
            soma += mat[i][j];
        }
        arrayC[j] = soma;
    }

        printf("\nMatriz: ");
        printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            printf("[%2d] ", mat[i][j]);
        }
        printf("\n");
    }

        printf("\nArray soma linhas: ");
        printf("\n");
    for(i = 0; i < 5; i++){
        printf("[%d] ", arrayL[i]);
    }

     printf("\n");
     printf("\nArray soma colunas: ");
     printf("\n");
    for(i = 0; i < 10; i++){
        printf("[%d] ", arrayC[i]);
    }
    
        return 0;
}