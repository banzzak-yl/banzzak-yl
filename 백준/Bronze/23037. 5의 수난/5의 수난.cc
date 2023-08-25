#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, i, x[5], total = 0;
    scanf("%d", &N);

    for (i = 0; i < 5; i++)
    {
        x[i] = N % 10;
        N /= 10;
        x[i] = x[i] * x[i] * x[i] * x[i] * x[i];
        total += x[i];
    }
    printf("%d", total);
    return 0;
}