#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, i, j;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for(j = 0; j < N - i - 1; j++)
            printf(" ");

        for (j = 0; j < i * 2 + 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < i + 1; j++)
            printf(" ");

        for (j = 0; j < 2 * (N - i - 1) - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}