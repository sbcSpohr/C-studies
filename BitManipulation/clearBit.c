#include <stdio.h>

unsigned clearBit(unsigned int val, int n);

int main() {

    unsigned int val = 10;
    unsigned result = clearBit(val, 1);
    printf("Result %d", result);



    return 0;
}

unsigned clearBit(unsigned int val, int n){

    unsigned result = val;

    result = result & ~(1 << n);

    return result;
}