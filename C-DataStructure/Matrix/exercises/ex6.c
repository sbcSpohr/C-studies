/*Dada uma matriz 4 x 4 faça um programa que diga se ela é um quadrado mágico ou não*/


#include <stdio.h>



int main(){

    int total, soma, falhou = 0, mat[4][4] = {16, 3, 2, 13, 5, 10, 11, 8, 9 ,6, 7, 12, 4, 15, 14, 1}, i, j;

        soma = 0;
    for(i = 0; i < 4; i++){
        soma += mat[i][i];
    }

    printf("\nSoma diagonal principal: %d", soma);

    total = soma;
    
        soma = 0;
    for(i = 0; i < 4; i++){
        soma += mat[i][3-i];
    }

    printf("\nSoma diagonal secundaria: %d", soma);

    if(total != soma){
        printf("\nDiagonal secundaria diferente: ");
        falhou = 1;
    }
    
    for(i = 0; i < 4; i++){
        soma = 0;
        for(j = 0; j < 4; j++){
            soma += mat[i][j];
        }
        printf("\nSoma linha %d: %d", i, soma);
        if(total != soma){
            printf("\nA linha %d e diferente", i);
            falhou = 1;
        }
    }

     for(j = 0; j < 4; j++){
        soma = 0;
        for(i = 0; i < 4; i++){
            soma += mat[i][j];
        }
        printf("\nSoma coluna %d: %d", j, soma);
        if(total != soma){
            printf("\nA coluna %d é diferente", j);
            falhou = 1;
        }
    }

    if(falhou == 0){
        printf("\n\n***A matriz e um quadrado magico***");
    }
    else{
       printf("\n\n***A matriz nao é um quadrado magico***");
    }

    return 0;
}