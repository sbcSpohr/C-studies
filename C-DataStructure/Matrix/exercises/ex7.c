/*Faça uma função que retorne a soma de uma linha da matriz*/
/*Faça uma função que retorne a soma de uma coluna da matriz*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tam = 3;

int somarLinha(int mat[][3], int linha){

    int j, soma = 0;
    for(j = 0; j < tam; j++){
        soma += mat[linha][j];
    }
    return soma;
}

int somarColuna(int mat[][3], int coluna){
    int i, soma = 0;
    for(i = 0; i < tam; i++){
        soma += mat[i][coluna];
    }

    return soma;
}

void imprimir(int mat[][3]){

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("[%2d] ", mat[i][j]);
        }
        printf("\n");
    }
}


int main(){

    srand(time(NULL));

    int mat[3][3], i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat[i][j] = rand() % 100;
        }
    }

    imprimir(mat);

    printf("\nA soma da linha 0 e: %d", somarLinha(mat, 0));
    printf("\nA soma da linha 1 e: %d", somarLinha(mat, 1));
    printf("\nA soma da linha 2 e: %d", somarLinha(mat, 2));
    printf("\n");
    printf("\nA soma da coluna 0 e: %d", somarColuna(mat, 0));
    printf("\nA soma da coluna 1 e: %d", somarColuna(mat, 1));
    printf("\nA soma da coluna 2 e: %d", somarColuna(mat, 2));

    return 0;
}