#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node *prox;
} Node;

typedef struct{
    Node *inicio;
    int tam;
}List;


void addInicio(List *list, int valor){
    Node *novo = (Node*)malloc(sizeof(Node));
    novo->valor = valor; // (*novo).valor = valor;
    novo->prox = list->inicio;
    list->inicio = novo;
    list->tam++;

}

int main(){

    List list;

    list.inicio = NULL;
    list.tam = 0;



    return 0;
}


