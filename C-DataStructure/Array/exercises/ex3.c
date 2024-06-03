/*Leia um vetor de 10 posicoes e o imprima.
Ems seguida troque o 1 elemento com o ultimo, o 2 com o penultimo ...
ate o 5 com o 6. Imprima o vetor modificado*/

#include <stdio.h>

int main(){

    int array[10], array2[10], i, aux;
    int tam = sizeof(array)/sizeof(array[0]);
    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao [%d]: ", i+1);
        scanf("%d", &array[i]);
    }
   
   for(i = 0; i < tam; i++){
        aux = array[i];
        array2[tam - i - 1] = aux;
        array2[i] = array[tam - i - 1];
    }

     printf("Vetor original:\n ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", array[i]);
    }

        printf("\nVetor com as inversoes:\n ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", array2[i]);

    }

    return 0;
}