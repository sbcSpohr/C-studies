#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int array[5], i, tam = sizeof(array)/sizeof(array[0]);

    //numeros pseudo aleatorios usando o timer do computador
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        array[i] = rand();
    }

        printf("Array impresso: ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", array[i]);
    }

    //numeros pseudo aleatorios dentro de um intervalo
    for(i = 0; i < tam; i++){
        array[i] = 1 + rand() % 100;
    }

        printf("\nArray impresso com intervalo: ");
    for(i = 0; i < tam; i++){
        printf("[%d] ", array[i]);
    }


    return 0;
}