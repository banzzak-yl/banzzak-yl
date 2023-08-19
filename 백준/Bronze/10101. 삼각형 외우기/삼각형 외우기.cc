#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == b && b == c && a + b + c == 180)
        printf("Equilateral");
    else if ((a == b || b == c || a == c) && (a + b + c == 180))
        printf("Isosceles");
    else if (a + b + c == 180)
        printf("Scalene");
    else
        printf("Error");
    return 0;
}