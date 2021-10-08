#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief Program to determine combinations
 * 
 */


int Factorial(int n);

int Binomial(int n, int k);

int main()
{
    int n;
    int k;
    int b;

    printf("Input n: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Must to be greater than zero\n");
        exit(1);
    }

    printf("Input k: ");
    scanf("%d", &k);
    if (k < 0 || k > n)
    {
        printf("Must be between 0 and %d inclusive\n", n);
        exit(1);
    }

    b = Binomial(n, k);
    printf("%d items taken %d ways is %d\n", n, k, b);
}

/**
 * @brief Factorial Function
 * 
 * @param n 
 * @return int 
 */
int Factorial(int n)
{
    int f = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}


/**
 * @brief compute the binomial coefficient
 * 
 * @param n 
 * @param k 
 * @return int 
 */
int Binomial(int n, int k) 
{
    if (k == n || k == 0) {
        return 1; 
    }
    return Binomial(n - 1, k - 1) + Binomial(n - 1, k);
}