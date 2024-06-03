/*Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro …). Desconsidere empates*/

#include <stdio.h>

int main(){

    float ano[12];
    int i;

    for(i = 0; i < 12; i++){
        printf("Insira a temperatura media do mes %d: ", i+1);
        scanf("%f", &ano[i]);
    }

        float maior=ano[0], menor=ano[0];
        int indiceMenor=0, indiceMaior=0;
    for(i = 1; i < 12; i++){
        if(ano[i] > maior){
            maior = ano[i];
            indiceMaior = i;
        }
        if(ano[i] < menor){
            menor = ano[i];
            indiceMenor = i;
        }
    }

        printf("Menor temperatura: [%.2f] | Mes: ", menor);
    switch(indiceMenor){
        case 0:
            printf("Janeiro");
        break;
        case 1:
            printf("Fevereiro");
        break;
        case 2:
            printf("Março");
        break;
        case 3:
            printf("Abril");
        break;
        case 4:
            printf("Maio");
        break;
        case 5:
            printf("Junho");
        break;
        case 6:
            printf("Julho");
        break;
        case 7:
            printf("Agosto");
        break;
        case 8:
            printf("Setembro");
        break;
        case 9:
            printf("Outubro");
        break;
        case 10:
            printf("Novembro");
        break;
        case 11:
            printf("Dezembro");
        break;
    }
        printf("\n");
        printf("Maior temperatura: [%.2f] | Mes: ", maior);
    switch(indiceMaior){
        case 0:
            printf("Janeiro");
        break;
        case 1:
            printf("Fevereiro");
        break;
        case 2:
            printf("Março");
        break;
        case 3:
            printf("Abril");
        break;
        case 4:
            printf("Maio");
        break;
        case 5:
            printf("Junho");
        break;
        case 6:
            printf("Julho");
        break;
        case 7:
            printf("Agosto");
        break;
        case 8:
            printf("Setembro");
        break;
        case 9:
            printf("Outubro");
        break;
        case 10:
            printf("Novembro");
        break;
        case 11:
            printf("Dezembro");
        break;
    }

   

    return 0;
}