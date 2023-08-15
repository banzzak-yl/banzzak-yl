#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, i, j, num, pn = 0;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &num);

        int cnt = 0;

        for (j = 1; j <= num; j++)
        {
            if (num % j == 0)
                cnt++;
        }

        if (cnt == 2)
            pn++;
    }
    printf("%d", pn);

    return 0;
}