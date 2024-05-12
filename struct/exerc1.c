/*Questão 1.
Crie um algortimo que leia os dados de uma empresa:
nome, cnpj, localização (cidade, estado) e armazene os dados em uma estrutura
*/

#include <stdio.h>

typedef struct local {

char cidade[32], estado[32];

}Local;

typedef struct empresa {

char nome[32], cnpj[16];
Local end;

}Empresa;

int main(){

    Empresa emp;

    printf("Nome: ");
    scanf("%s", emp.nome);

    printf("CNPJ: ");
    scanf("%s", emp.cnpj);

    printf("Cidade: ");
    scanf("%s", emp.end.cidade);

    printf("Estado: ");
    scanf("%s", emp.end.estado);

    printf("\nNome: %s", emp.nome);
    printf("\nCNPJ: %s", emp.cnpj);
    printf("\nCidade: %s", emp.end.cidade);
    printf("\nNome: %s", emp.end.estado);
    return 0;
}