#include <stdio.h>

unsigned setBit(unsigned int val, int n);

int main()
{

    unsigned int var = 10;
    int n = 0;
    unsigned int result = setBit(var, n);
    printf("Result: %d ", result);

    return 0;
}

unsigned setBit(unsigned int val, int n)
{
    unsigned int result = val;

    result = result | (1 << n);

    return result;
}