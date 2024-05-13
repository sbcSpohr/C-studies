#include <stdio.h>

int main(){

    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, mat2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, mat3[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat3[i][j] = mat[i][j] + mat2[i][j];
        }
    }

        printf("\nMatriz impressa: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%2d] ", mat3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}