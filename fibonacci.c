#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int  fib1 = 0, fib2 = 1, fib3, limit=10, count = 0;
    printf("Fibonacci Sequence is ...\n");
    printf("%d\n", fib1);
    sleep(1);
    printf("%d\n", fib2);
    sleep(1);
    count = 2;
    while (count < limit)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        sleep(1);
        if (fib3==3){
                printf("\nprogram stopping for 5 seconds\n");
            sleep(5);
        }
        fib1 = fib2;
        fib2 = fib3;
    }
    return 0;
}