#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, i, x[7], sum = 0, cnt = 0, min;

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &N);

        if (N % 2 == 1)
        {
            x[cnt++] = N;
            sum += N;
        }
    }

    if (cnt != 0)
    {
        min = x[0];

        for (i = 0; i < cnt; i++)
        {
            if (min > x[i])
                min = x[i];
        }
    }

    if (cnt == 0)
        printf("-1");
    else
    {
        printf("%d\n", sum);
        printf("%d", min);
    }

    return 0;
}