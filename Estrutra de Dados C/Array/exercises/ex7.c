/*Leia um vetor de 10 posicoes e depois ordene ele (bubble sort, por exemplo)*/

#include <stdio.h>


int main(){

    int array[10], i, j, aux;
    int tam = sizeof(array)/sizeof(array[0]);

    for(i = 0; i < tam; i++){
        printf("Digite o valor da posicao [%d]: ", i+1);
        scanf("%d", &array[i]);
    }
    
    for(i = 0; i < tam - 1; i++){
        for(j = 0; j < tam - i - 1; j++){
            if(array[j] > array[j+1]){
                aux = array[j+1];
                array[j+1] = array[j];
                array[j] = aux;
            }
        }
    }

      printf("\nArray impresso: ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", array[i]);
    }

    return 0;
}