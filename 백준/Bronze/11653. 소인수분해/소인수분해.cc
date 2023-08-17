#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int N, i, num;
    scanf("%d", &N);

    for (i = 2; i <= N; i++)
    {
        num = i;
        while (1)
        {
            if (N % num != 0 || num == 1)
                break;
            
            if (N % num == 0)
            {
                printf("%d\n", num);
                N /= num;
            }
        }
    }
    return 0;
}