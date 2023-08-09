#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
    int N, x[1000], k, i, j, temp;
    
    scanf("%d %d", &N, &k);

    for (i = 0; i < N; i++)
        scanf("%d", &x[i]);

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (x[j] < x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    printf("%d", x[k - 1]);
    return 0;
}