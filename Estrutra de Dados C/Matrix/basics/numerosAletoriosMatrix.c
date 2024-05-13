#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int mat[3][3], i, j;

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            mat[i][j] = rand();
        }
    }

        printf("Matriz impressa: ");
        printf("\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%5d] ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}