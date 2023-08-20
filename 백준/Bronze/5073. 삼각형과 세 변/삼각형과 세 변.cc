#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int a, b, c, max;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
            break;

        max = a;
        if (max < b)
            max = b;
        if (max < c)
            max = c;

        if (max == a && max >= b + c)
        {
            printf("Invalid\n");
            continue;
        }

        if (max == b && max >= a + c)
        {
            printf("Invalid\n");
            continue;
        }

        if (max == c && max >= a + b)
        {
            printf("Invalid\n");
            continue;
        }

        if (a == b && b == c)
            printf("Equilateral\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles\n");
        else
            printf("Scalene\n");
    }

    return 0;
}