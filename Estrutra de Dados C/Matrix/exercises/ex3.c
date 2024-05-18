/*Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int mat[5][5], i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            mat[i][j] = rand() % 99;
        }
    }

        printf("Matriz impressa: ");
        printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%2d] ", mat[i][j]);
        }
        printf("\n");
    }

        printf("\nDiagonal principal: ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                printf("[%d] ", mat[i][j]);
            }
        }
    }

    return 0;
}