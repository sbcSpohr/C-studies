#include <stdio.h>

int main(){


    int mat[3][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    char mat1[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};
    float mat2[4][3] = {2, 1.6, 9.9, 9.8, 8.7, 5.4, 4.6, 9.7, 5.9};

    int i = 0;
    int j = 0;

        printf("Matriz de inteiros: ");
    for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("[%d] ", mat[i][j]);
        }
    }

        printf("\n\nMatriz de char: ");
    for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 4; j++){
            printf("[%c] ", mat1[i][j]);
        }
    }

      printf("\n\nMatriz de float: ");
    for(i = 0; i < 4; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("[%.2f] ", mat2[i][j]);
        }
    }
    
    

    return 0;
}