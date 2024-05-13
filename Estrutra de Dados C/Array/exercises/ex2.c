/*Some o conteudo de dois vetores de tamanho 10 e armazene o resultado em um 
terceiro vetor. Imprima os 3 vetores na tela*/

#include <stdio.h>

int main(){

    int array[10], array2[10], array3[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao [%d] do array 1: ", i+1);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao [%d] do array 2: ", i+1);
        scanf("%d", &array2[i]);
    }

    for(i = 0; i < 10; i++){
        array3[i] = array[i] + array2[i];
    }

    printf("Primeiro vetor:\n ");
            for(i = 0; i < 10; i++){
                printf("[%d] ", array[i]);
            }
        

     printf("\nSegundo vetor:\n ");
            for(i = 0; i < 10; i++){
                printf("[%d] ", array2[i]);
            }
    
    printf("\nTerceiro vetor com a soma:\n ");
            for(i = 0; i < 10; i++){
                printf("[%d] ", array3[i]);
            }

    return 0;
}