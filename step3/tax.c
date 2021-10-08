#include <stdio.h>
#include <stdlib.h>

/*
    This program is used to compute the amount of tax owed by a taxpayer.
*/

int main()
{
    int income, taxable_income;
    printf("Please enter your annual income: ");
    scanf("%d", &income);

    if (income <= 9350)
    {
        printf("Your tax is zero.\n");
        exit(0);
    }

    int status, dependents, std_deduction, total_deduction;
    printf("Please specify filing status, either as: (1) single, (2) married, filing jointly, or (3) married: ");
    scanf("%d", &status);

    switch (status)
    {
        int number_children;
    case 1:
    case 3:
        dependents = 1;
        std_deduction = 5700;
        break;
    case 2:
        printf("Please enter the number of children: ");
        scanf("%d", &number_children);
        dependents = 2 + number_children;
        std_deduction = 11400;
        break;
    }

    total_deduction = dependents * 3650 + std_deduction;
    taxable_income = income - total_deduction;

    double tax;
    if (taxable_income <= 16750)
    {
        tax = taxable_income * 0.1;
    }
    else if (taxable_income <= 68000)
    {
        tax = 1675 + 0.15 * (taxable_income - 16750);
    }
    else if (taxable_income <= 137300)
    {
        tax = 9362.50 + 0.25 * (taxable_income - 68000);
    }
    else
    {
        tax = 26687.5 + 0.28 * (taxable_income - 137300);
    }
    printf("The amount of tax id %.0lf\n", tax);
}