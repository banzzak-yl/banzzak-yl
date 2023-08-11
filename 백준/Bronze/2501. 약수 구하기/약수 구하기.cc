#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, K, i, j, num = 0, a[10000] = { 0 };

    scanf("%d %d", &N, &K);

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            a[num++] = i;
        }
    }

    if (num == 0)
        printf("0");
    else
        printf("%d", a[K - 1]);

    return 0;
}