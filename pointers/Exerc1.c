/*1.

Escreva uma função que receba um vetor de inteiros, o tamanho do vetor e um valor
a ser procurado. A função deve procurar o valor no vetor, caso encontre deve retornar
a posição (índice) no vetor. Caso não encontre, deve retornar -1.

*/

/*2

Escreva uma função que receba dois vetores de inteiros de mesmo tamanho,
e o tamanho de um deles. A função deverá copiar os elementos do primeiro vetor para o segundo.

*/

/*3.

 Escreva uma função que receba dois vetores de inteiros de mesmo tamanho,
e o tamanho de um deles. A função deverá copiar os elementos do primeiro vetor para o segundo.

*/

/*4.

Escreva uma função que receba um vetor de inteiros e o tamanho do vetor.
A função deverá ordenar os elementos (implemente, por exemplo, bubble sort).

*/

#include <stdio.h>

int procurarValor(int *vetor, int tam, int valor);
void inverterVetor(int *vetor, int tam);
void copiarVetor(int *vetor1, int *vetor2, int tam);
void ordernarVetor(int *vetor, int tam);


int main()
{
    int tamanho;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int array[tamanho], *p;
    int array2[4];

    for (p = array; p < array + tamanho; p++)
    {
        printf("Insira o valor: ");
        scanf("%d", p);
    }

    printf("\n****** Exercicio 1: ******\n");
    int valorProcurado;
    printf("Insira o valor a ser procurado: ");
    scanf("%d", &valorProcurado);

    int posicao = procurarValor(array, tamanho, valorProcurado);

    if (posicao != -1)
        printf("O valor %d foi encontrado na posicao %d.\n", valorProcurado, posicao);
    else
        printf("O valor %d nao foi encontrado no vetor.\n", valorProcurado);

    printf("\n****** Exercicio 2: ******\n");
    inverterVetor(array, tamanho);

    printf("\n****** Exercicio 3: ******\n");
    copiarVetor(array, array2, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", *(array2 + i));
    }

    printf("\n****** Exercicio 4: ******\n");
    ordernarVetor(array, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", *(array + i));
    }

    return 0;
}

int procurarValor(int *vetor, int tam, int valor)
{
    int posicao = -1;
    for (int i = 0; i < tam; i++)
    {
        if (*(vetor + i) == valor)
        {
            posicao = i;
            break;
        }
    }
    return posicao;
}

void inverterVetor(int *vetor, int tam)
{

    for (int i = tam - 1; i >= 0; i--)
    {
        printf("%d", *(vetor + i));
        printf("\n");
    }
}

void copiarVetor(int *vetor1, int *vetor2, int tam)
{

    for (int i = 0; i < tam - 1; i++)
    {
        *(vetor2 + i) = *(vetor1 + i);
    }
}

void ordernarVetor(int *vetor, int tam)
{

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (*(vetor + j) > *(vetor + j + 1))
            {
                int temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}