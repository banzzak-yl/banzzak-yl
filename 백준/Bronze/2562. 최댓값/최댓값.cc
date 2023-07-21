#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x[9], i, max, max_idx;

	scanf("%d", &x[0]);
	max = x[0];
	max_idx = 1;

	for (i = 1; i < 9; i++)
	{
		scanf("%d", &x[i]);

		if (max < x[i])
		{
			max = x[i];
			max_idx = i + 1;
		}
	}
	printf("%d\n%d", max, max_idx);
	return 0;
}