#include<stdio.h>
#include<stdlib.h>

int main() {
    double income;
    int filingStatus;
    int numDependents;
    int children;
    double standardDeduction;
    double deductions;
    double taxableIncome;
    double tax;

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    if (income < 9350) {
        printf("You may be poor, but you owe no taxes\n");
        exit(0);
    }

    printf("What is your filing status?\n1)single\n");
    printf("2)married filing jointly\n3)married filing separately\n");
    printf("Please enter a number:");
    scanf("%d", &filingStatus);

    switch (filingStatus)
    {
    case 1:
        numDependents = 1;
        standardDeduction = 5700;
        break;
    case 2:
        printf("How many children do you have?");
        scanf("%d", &children);
        numDependents = children + 2;
        standardDeduction = 11400;
        break;
    case 3:
        numDependents = 1;
        standardDeduction = 5700;
        break;

    default:
        printf("Invalid input!\n");
        exit(1);
        break;
    }

    deductions = standardDeduction + numDependents * 3650;
    taxableIncome = income - deductions;

    if (taxableIncome < 0) {
        tax = 0;
    } 
    else if (taxableIncome <= 16750) {
        tax = taxableIncome * 0.10;
    }
    else if (taxableIncome <= 68000) {
        tax = 1675 + 0.15 * (taxableIncome - 16750);
    }
    else if (taxableIncome <= 137300) {
        tax = 9362.50 + 0.25 * (taxableIncome - 68000);
    } 
    else {
        tax = 26687.50 + 0.28 * (taxableIncome - 137300);
    }

    printf("%.2f\n", tax);
}