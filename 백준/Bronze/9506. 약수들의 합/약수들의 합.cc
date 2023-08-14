#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, i, x[100000], cnt = 0;

    while (1)
    {
        scanf("%d", &N);

        if (N == -1)
            break;

        int total = 0, cnt = 0;

        for (i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                x[cnt] = i;
                total += i;
                cnt++;
            }
        }

        if (total == N)
        {
            printf("%d = ", N);
            for (i = 0; i < cnt - 1; i++)
                printf("%d + ", x[i]);
            if(i == cnt - 1)
                printf("%d\n", x[cnt - 1]);
        }
        else
            printf("%d is NOT perfect.\n", N);
    }

    return 0;
}