/*Imprima a soma de todos os elementos de uma matriz 5x5*/

#include <stdio.h>


int main(){


    int mat[5][5], i, j, soma=0;

     for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite os elementos da linha [%d] coluna [%d]: ", i, j);
                scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            soma += mat[i][j];
        }
    }

        printf("Soma: %d", soma);

    return 0;
}