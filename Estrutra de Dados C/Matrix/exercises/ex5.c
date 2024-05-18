/*Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na tela*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int mat[5][4], aux[4][5], i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            mat[i][j] = rand() % 99;
        }
    }

        printf("Matriz impressa: ");
        printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            printf("[%2d] ", mat[i][j]);
        }
        printf("\n");
    }

        for(i = 0; i < 4; i++){
            for(j = 0; j < 5; j++){
                aux[i][j] = mat[j][i];
            }
        }

            printf("Matriz transposta: ");
            printf("\n");
         for(i = 0; i < 4; i++){
            for(j = 0; j < 5; j++){
                printf("[%2d] ", aux[i][j]);
            }
            printf("\n");
        }

    return 0;
}