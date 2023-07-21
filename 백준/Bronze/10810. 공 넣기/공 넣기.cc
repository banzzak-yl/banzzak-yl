#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, M, i, j, k, a, b, x[100] = { 0 };
	scanf("%d %d", &N, &M);

	for (a = 0; a < M; a++)
	{
		scanf("%d %d %d", &i, &j, &k);

		for (b = i; b <= j; b++)
			x[b - 1] = k;
	}

	for (a = 0; a < N; a++)
	{
		printf("%d ", x[a]);
	}
	return 0;
}