/*Preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuario.
Em seguida, calcule e salve em um segundo vetor o quadrado de cada elemento do primeiro vetor.
Por fim, imprima os dois vetores*/

#include <stdio.h>

int main(){

    int array[10], array2[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao [%d]: ", i+1);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 10; i++){
        array2[i] = array[i] * array[i];
    }

    printf("Primeiro vetor:\n ");
            for(i = 0; i < 10; i++){
                printf("[%d] ", array[i]);
            }
        

     printf("\nSegundo vetor ao quadrado:\n ");
            for(i = 0; i < 10; i++){
                printf("[%d] ", array2[i]);
            }
        
    return 0;
}