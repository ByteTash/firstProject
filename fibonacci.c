#include <stdio.h>
#include <stdint.h>

#define MAX_COUNT 40


int main(void)
{
    unsigned int first = 0;
    unsigned int second = 1;
    unsigned sumValue = 0;
    unsigned int count = 0;
    unsigned int maxCount = 0;

    printf("This program generates fibonacci series upto N numbers as defined by user\n");

    printf("Enter count (N) value upto %d\n", MAX_COUNT);
    scanf("%d", &maxCount);
    if( maxCount > MAX_COUNT) {
        printf("Erroneous count, exiting");
        return 0;
    }

    printf("Enter first two consecutive numbers of fibonacci series\nEnter first number:");
    scanf("%d", &first);
    printf("Enter second number:");
    scanf("%d", &second);
    if( (second - first) != 1) {
        printf( "Erroneous first two numbers, exiting");
        return 0;
    }



    printf("Fibonacci series upto %d numbers\n", maxCount);
    printf("%2d: %d\n", count+1, first);
    count++;
    printf("%2d: %d\n", count+1, second);    
    count = count + 1;

    while ( count < maxCount )  {
        sumValue = first + second;
        printf("%2d: %d\n", count+1, sumValue);

        first = second;
        second = sumValue;

        count = count + 1;
    }

    return 0;
}

