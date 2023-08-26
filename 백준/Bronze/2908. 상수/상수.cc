#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int A, B, a, b, total1 = 0, total2 = 0;
    scanf("%d %d", &A, &B);

    while (A != 0)
    {
        a = A % 10;
        total1 = total1 * 10 + a;
        A /= 10;
    }

    while (B != 0)
    {
        b = B % 10;
        total2 = total2 * 10 + b;
        B /= 10;
    }

    if (total1 > total2)
        printf("%d", total1);
    else
        printf("%d", total2);
    return 0;
}