#include <stdio.h>

void copy(FILE *file1, FILE *file2);

int main() {

    FILE *file1;
    file1 = fopen("C:\\Users\\Gamer\\Desktop\\arquivo1.txt", "r");

    if(file1 == NULL){
        printf("Erro");
        getchar();
        return 0;
    }

    FILE *file2;
    file2 = fopen("C:\\Users\\Gamer\\Desktop\\arquivo2.txt", "w");

    copy(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void copy(FILE *file1, FILE *file2){

    char leitor [1000];

    while(fgets(leitor, 1000, file1) != NULL){

        fputs(leitor, file2);
    }

}
