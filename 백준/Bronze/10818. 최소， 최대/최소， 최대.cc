#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, i, x[1000000], max, min;
	scanf("%d", &N);

	scanf("%d", &x[0]);
	max = x[0];
	min = x[0];
	for (i = 1; i < N; i++)
	{
		scanf("%d", &x[i]);

		if (max < x[i])
			max = x[i];
		if (min > x[i])
			min = x[i];
	}
	printf("%d %d", min, max);
	return 0;
}