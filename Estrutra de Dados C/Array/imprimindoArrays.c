#include <stdio.h>


int main(){


    int i;
    int num[5] = {0, 1, 2, 3, 4};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    float num2[5] = {1.3, 4.9, 3.3, 1.0, 9.9};
    int tam = sizeof(num)/sizeof(num[0]);

        printf("Vetor numeros inteiros:\n ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", num[i]);
    }

        printf("\nVetor vogais:\n ");
    for(i = 0; i < tam; i++){
        printf("[%c] ", vogais[i]);
    }

        printf("\nVetor numeros reais:\n ");
    for(i = 0; i < tam; i++){
        printf("[%.2f] ", num2[i]);
    }

    return 0;
}