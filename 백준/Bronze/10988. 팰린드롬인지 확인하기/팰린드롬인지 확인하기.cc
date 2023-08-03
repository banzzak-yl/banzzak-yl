#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
    int n;
    char x[100];
    scanf("%s", x);

    for (int i = 0; i < strlen(x) / 2; i++)
    {
        if (x[i] == x[strlen(x) - i - 1])
            n = 1;
        else
        {
            n = 0;
            break;
        }
    }
    if (n == 0)
        printf("0");
    else
        printf("1");

    return 0;
}