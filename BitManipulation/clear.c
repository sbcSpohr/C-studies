#include <stdio.h>

unsigned clear(unsigned int val);

int main()
{

    unsigned int var = 1234;
    unsigned int result = clear(var);
    printf("Result: %d ", result);

    return 0;
}

unsigned clear(unsigned int val)
{

    unsigned int result = val;

    // 1
    result = result & 0;

    return result;

    /*

        //2
        result = result  << (sizeof(result)*8);

        //3
        result = result ^ result;

        //4
        for(int i = 0; i < sizeof(int)*8; i++){
            result = result & !(1 << i);
        }


        1010

        i = 0

            1010 &
            1 << i  --  1 << 0  --  0001 << 0  --  0001  --  !(0001)  --  1110

            1010
           &1110
            1010(result)

        i = 1

            1 << i  --  1 << 1  --  0010 << 0  --  0010  --  !(0010)  --  1101

            1010
           &1101
            1000(result)

        i = 2

            1 << i  --  1 << 2  --  0100 << 0  --  0100  -- !(0100)  --  1011

            1000
           &1011
            1000(result)

        i = 3

            1 << i  ==  1 << 3  --  1000 << 0  --  1000  --  !(1000)  --  0111

            1000
           &0111
            0000(result)


    */
}