#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N;
    scanf("%d", &N);

    printf("%d", N * (N - 1));
    return 0;
}