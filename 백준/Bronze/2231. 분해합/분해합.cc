#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, M, i;
    scanf("%d", &N);

    for (i = 1; i < N; i++)
    {
        int total = 0;
        M = i;
        total += M;

        while (M != 0)
        {
            total += M % 10;
            M /= 10;
        }

        if (total == N)
        {
            printf("%d", i);
            break;
        }
    }

    if (i == N)
        printf("0");

    return 0;
}