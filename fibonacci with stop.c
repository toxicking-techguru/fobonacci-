#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void sig_handler(int signum){
  printf("\n\nSequence stopped for a second\n\n");
  sleep(1);
}
int main(){
  signal(SIGINT,sig_handler);
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
        fib1 = fib2;
        fib2 = fib3;
    }
    printf("Sequence ended");
  return 0;
}