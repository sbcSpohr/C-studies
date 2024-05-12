/*4.
Crie uma estrutura representado os alunos de um determinado curso.
A estrutura deve conter a matricula do aluno, nome, nota da primeira prova,
nota segunda prova e nota da terceira prova
a) permita ao usuario entrar com os dados de 3 alunos
b) encontre o aluno com a maior media geral
*/

#include <stdio.h>

typedef struct aluno{

    char matricula[9], nome[32];
    float primeiraNota, segundaNota, terceiraNota, media;

} Aluno;


int main(){

    int i, N = 3;
    Aluno al[3];

    for(i = 0; i < N; i++){
        printf("\nNome: ");
        scanf("%s", al[i].nome);
        printf("Matricula: ");
        scanf("%s", al[i].matricula);
        printf("Nota da primeira prova: ");
        scanf("%f", &al[i].primeiraNota);
        printf("Nota da segunda prova: ");
        scanf("%f", &al[i].segundaNota);
        printf("Nota da terceira prova: ");
        scanf("%f", &al[i].terceiraNota);
    }

    
    for(i = 0; i < N; i++){
       al[i].media = (al[i].primeiraNota + al[i].segundaNota + al[i].terceiraNota)/3;
    }

    int maiorMedia = 0;
    int indiceMaiorMedia = 0;
    for(i = 1; i < N; i++){
        if(al[i].media > maiorMedia){
            maiorMedia = al[i].media;
            indiceMaiorMedia = i;
        }
    }
        
        printf("\nAluno com maior media: \n");

        printf("Nome: %s\n", al[indiceMaiorMedia].nome);
        printf("Matricula: %s\n", al[indiceMaiorMedia].matricula);
        printf("Media: %.2f\n", al[indiceMaiorMedia].media);
    


    return 0;
}