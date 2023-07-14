#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int sum, num, i, won, num1, total=0;
	scanf("%d", &sum);
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d %d", &won, &num1);
		total += (won * num1);
	}

	if (sum == total)
		printf("Yes");
	else
		printf("No");
	return 0;
}