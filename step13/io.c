#include <stdio.h>
#include <string.h>
#include "transistors.h"

void DisplayTransistor(struct Transistor tran)
{
    printf("Number: %s\n", tran.number);
    switch (tran.type)
    {
    case NPN:
        printf("Type: NPN\n");
        break;

    case PNP:
        printf("Type: PNP\n");
        break;
    }

    switch (tran.caseStyle)
    {
    case TO18:
        printf("Type: T018\n");
        break;

    case TO92A:
        printf("Type: TO92A\n");
        break;
    }

    printf("pMax: %.3f\n", tran.pmax);
    printf("icMax: %.3f\n", tran.icmax);
}

Tran InputTransistor()
{
    Tran t1;

    // scanf("%s", t1.number);
    InputString(t1.number, sizeof(t1.number));

    t1.pmax = InputPositiveValue("Input pMax: ");
    t1.icmax = InputPositiveValue("Input icMax: ");
    t1.type = InputTransistorType("Input type: ");
    t1.caseStyle = InputTransistorType("Input caseStyle: ");

    return t1;
}

void InputString(char *str, int max)
{
    char buffer[100];

    /* Get a line of up to 100 characters */
    fgets(buffer, sizeof(buffer), stdin);

    /* Remove any stray newlines from the buffer */
    while (buffer[0] == '\n')
        fgets(buffer, sizeof(buffer), stdin);

    /* Remove any \n we may have input */
    if (strlen(buffer) > 0)
        buffer[strlen(buffer) - 1] = '\0';

    /* Copy up to max characters to our string */
    strncpy(str, buffer, max);
    str[max - 1] = '\0';
}

double InputPositiveValue(char *prompt)
{
    char buffer[100];
    double value = 0;

    do
    {
        printf("%s", prompt);

        /* Get a line of up to 100 characters */
        fgets(buffer, sizeof(buffer), stdin);

        /* Remove any \n we may have input */
        if (strlen(buffer) > 0)
            buffer[strlen(buffer) - 1] = '\0';

        sscanf(buffer, "%lf", &value);
    } while (value <= 0);

    return value;
}

int InputTransistorType(char *prompt)
{
    char buffer[100];
    int value = 0;

    do
    {
        printf("%s", prompt);

        fgets(buffer, sizeof(buffer), stdin);

        if (strlen(buffer) > 0)
            buffer[strlen(buffer) - 1] = '\0';

        sscanf(buffer, "%d", &value);
    } while (value <= 0);

    return value;
}