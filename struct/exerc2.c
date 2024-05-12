#include <stdio.h>

typedef struct carro {
    char marca[32];
    int ano;
    float preco;
} Carro;

int main() {
    int N = 3, i;
    Carro car[N];
    float p;

    for (i = 0; i < N; i++) {
        printf("\nMarca: ");
        fgets(car[i].marca, 32, stdin); 
        printf("Ano: ");
        scanf("%d", &car[i].ano); 
        printf("Preco: ");
        scanf("%f", &car[i].preco); 
        getchar(); 
    }

    printf("\nDigite o valor procurado: ");
    scanf("%f", &p);

    for (i = 0; i < N; i++) {
        if (car[i].preco <= p) {
            printf("\nMarca: %s", car[i].marca);
            printf("Ano: %d\n", car[i].ano);
            printf("Preco: %.2f\n", car[i].preco);
        }
    }

    return 0;
}
