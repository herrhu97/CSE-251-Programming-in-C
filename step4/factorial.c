#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
Simple program to experiment with looping.
*/

int main()
{

    while (true)
    {
        printf("Number to compute the factorial of: ");
        int f;
        int fac = 1; //乘法累加数
        scanf("%d", &f);

        if (f == 0)
        {
            printf("0! = 1\n");
            continue;
        }
        else if (f > 0)
        {
            printf("%d! = ", f);
            while (f > 0)
            {
                fac = fac * f;
                f--;
            }
            printf("%d\n", fac);
        }
        else {
            break;
        }
    }
}