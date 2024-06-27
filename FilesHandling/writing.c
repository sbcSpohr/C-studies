#include <stdio.h>

int main()
{

    FILE *file;
    file = fopen("C:\\Users\\Gamer\\Desktop\\teste.txt", "w");

    fprintf(file, "VAI TOMA NO CU PIRAAAANHAAAAAAAAAAAAAAAAAAAA");

    fclose(file);

    return 0;
}