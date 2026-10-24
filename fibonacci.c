#include <stdio.h>
#include <stdint.h>

#define MAX_COUNT 30

int main(void)
{
    unsigned int first = 0;
    unsigned int second = 1;
    unsigned sumValue = 0;
    unsigned int count = 0;

    printf("Output %d\n", first);
    printf("Output %d\n", second);    
    count = 2;


    while ( count < MAX_COUNT )
    {
        sumValue = first + second;
        printf("Output %d\n", sumValue);

        first = second;
        second = sumValue;

        count = count + 1;
    }

    return 0;
}

