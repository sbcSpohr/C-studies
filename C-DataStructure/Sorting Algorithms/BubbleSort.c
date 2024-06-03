#include <stdio.h>


void bubbleSort(int *array){
      
      int i, j;
      int aux;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10 - i - 1; j++){
            if(*(array + j) > *(array + j + 1)){
                aux = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = aux;
            }
        }
    }
}

int main(){

    int i, j, array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    printf("Vetor nao ordenado: ");
    for(i = 0; i < 10; i++){
        printf("[%d] ", *(array + i));
    }

      bubbleSort(array);

    printf("\nVetor ordenado: ");
    for(i = 0; i < 10; i++){
        printf("[%d] ", *(array + i));
    }

    return 0;
}