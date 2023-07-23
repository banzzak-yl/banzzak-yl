#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x[31] = { 0 }, i, num;

	for (i = 1; i < 29; i++)
	{
		scanf("%d", &num);
		x[num] = 1;
	}

	for (i = 1; i < 31; i++)
	{
		if (x[i] != 1)
			printf("%d\n", i);
	}
	return 0;
}