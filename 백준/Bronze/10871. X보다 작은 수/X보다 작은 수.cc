#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, x, i, a[10000];
	scanf("%d %d", &N, &x);

	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < N; i++)
	{
		if (a[i] < x)
			printf("%d ", a[i]);
	}
	return 0;
}