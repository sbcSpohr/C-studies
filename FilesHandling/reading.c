#include <stdio.h>
#include <string.h>

int main()
{

    FILE *file;
    file = fopen("C:\\Users\\Gamer\\Desktop\\teste.txt", "r");

    if (file == NULL)
    {
        printf("Erro");
        getchar();
        return 0;
    }
    char frase[100];

    while (fgets(frase, 100, file) != NULL)
    {
        printf("%s", frase);
    }

    fclose(file);

    return 0;
}