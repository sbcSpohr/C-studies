/*3.
Crie um algortimo que leia um vetor com dados de 5 livros: titulo, autor e ano.
Mostre os dados de todos os livros encontrados
*/

#include <stdio.h>

typedef struct livro{

    char titulo[32], autor[32];
    int ano;

} Livro;


int main(){

    int i, N = 3;
    Livro liv[N];

    for(i = 0; i < N; i++){
        printf("\nTitulo: ");
        scanf("%s", liv[i].titulo);
        printf("Autor: ");
        scanf("%s", liv[i].autor);
        printf("Ano: ");
        scanf("%s", &liv[i].ano);
    }

    printf("\n Livros Cadastrados\n");

    for(i = 0; i < N; i++){
        printf("\nTitulo: %s", liv[i].titulo);
        printf("\nAutor: %s\n", liv[i].autor);
        printf("Ano: %d\n", liv[i].ano);
    }



    return 0;
}