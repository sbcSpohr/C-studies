#include <stdio.h>

unsigned testBit(unsigned int val, int n);

int main()
{

    unsigned int var = 10;
    int n = 0;
    unsigned int result = testBit(var, n);
    printf("Result: %d ", result);

    return 0;
}

unsigned testBit(unsigned int val, int n)
{
    unsigned int result = val;

   result = result & (1 << n) >> n;

    return result;
}