#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    char x;
    scanf("%c", &x);

    if (x == 'M')
        printf("MatKor\n");
    else if (x == 'W')
        printf("WiCys\n");
    else if (x == 'C')
        printf("CyKor\n");
    else if (x == 'A')
        printf("AlKor\n");
    else if (x == '$')
        printf("$clear\n");
    return 0;
}