#include <stdio.h>


int main(){

    int i;
    int array[5];
    int tam = sizeof(array)/sizeof(array[0]);

    for(i = 0; i < tam; i++){
        printf("\nDigite o valor da posicao [%d]: ", i+1);
        scanf("%d", &array[i]);
    }

        printf("\nArray impresso: ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", array[i]);
    }
 
    return 0;
}