#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NumElements 10

void PrintArray(double array[], int size);
void SortArray(double array[], int size);
void Swap(double *a, double *b);

int main()
{
    int i;
    double values[NumElements];

    srand(time(NULL));

    for (i = 0; i < NumElements; i ++ )
    {
        values[i] = (double)(rand() % 10000) / 100.0;
    }

    printf("\nArray before sorting\n");
    PrintArray(values, NumElements);

    SortArray(values, NumElements);

    printf("\nArray after sorting\n");
    PrintArray(values, NumElements);

    return 0;
}

void PrintArray(double array[], int size)
{
    int i;
    for (i = 0; i < size; i ++)
        printf("Element %5d: %8.4lf\n", i, array[i]);
}


void SortArray(double array[], int size)
{
    int i, j, min;

    for (i = 0; i < size; i ++ ) 
    {
        min = i;
        for (j = i + 1; j < size; j ++ ) 
        {
            if (array[i] < array[min])
            {
                min = j;
            }
        }

        Swap(&array[i], &array[min]);
    }
}

void Swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}