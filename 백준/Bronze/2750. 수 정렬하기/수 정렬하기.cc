#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
    int N, i, j, x[1000], temp;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &x[i]);

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++)
        printf("%d\n", x[i]);
    return 0;
}