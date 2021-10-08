#include<stdio.h>
#include<string.h>

int main()
{
    FILE *temp;
    temp = fopen("a.txt", "r");
    
    if (temp == NULL)
    {
        printf("Unable to open file a.txt");
    }

    char c;
    while(!feof(temp)) 
    {
        c = fgetc(temp);
        printf("%d\n", c);
    }
    fclose(temp);

    temp = fopen("a.txt", "r");
    char str[120];
    while(!feof(temp))
    {
        fgets(str, sizeof(str), temp);//io operation change stream state to eof, 结尾还有\n时，fgets未改变输入流状态；结尾无\n时，fgets改变输入流状态

        for (int i = 0; str[i] != '\0'; i ++)
        {
            printf("%d\t", str[i]);
        }
        printf("\n");
    }
}