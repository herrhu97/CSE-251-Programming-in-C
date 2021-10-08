#include<stdio.h>
#include<math.h>
#include<stdbool.h>

/*
Program to compute Fibonacci numbers
*/

int main() 
{
    int fn1 = 1;
    int fn2 = 0;
    int f;
    int i;

    printf("F(0) = 0\n");
    printf("F(1) = 1\n");

    for (i = 0; i < 10; i ++)  
    {
        f = fn1 + fn2;
        printf("F(%d) = %d\n", i + 2, f);

        fn2 = fn1;
        fn1 = f;
    }
}