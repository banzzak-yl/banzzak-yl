#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int x[9][9], i, j, max, a = 0, b = 0;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
            scanf("%d", &x[i][j]);
    }

    max = x[0][0];

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (max < x[i][j])
            {
                max = x[i][j];
                a = i;
                b = j;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", a + 1, b + 1);
    return 0;
}