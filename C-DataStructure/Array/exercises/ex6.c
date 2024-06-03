/*Leia um vetor de 10 posicoes e em seguida imprima o vetor original e o inverso dele*/

#include <stdio.h>


int main(){

    int array[10], i;
    int tam = sizeof(array)/sizeof(array[0]);

    for(i = 0; i < tam; i++){
        printf("Digite o valor da posicao [%d]: ", i+1);
        scanf("%d", &array[i]);
    }

      printf("\nArray original: ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", array[i]);
    }

        printf("\nArray inverso: ");
    for(i = tam-1; i >= 0; i--){
        printf("[%d] ", array[i]);
    }

      

    return 0;
}