#include <stdio.h>

int main()
{

    FILE *file;
    file = fopen("C:\\Users\\Gamer\\Desktop\\teste.txt", "a");

    if (file == NULL)
    {
        printf("Erro");
        getchar();
        return 0;
    }

    fprintf(file, "\nAcrescentando texto");

    char frase[100] = "\nAdicionando mais texto";
    fputs(frase, file);

    char caractere = '2';
    fputc(caractere, file);

    fclose(file);

    return 0;
}