#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int R1, R2, S;
    scanf("%d %d", &R1, &S);

    R2 = 2 * S - R1;
    printf("%d", R2);
    return 0;
}