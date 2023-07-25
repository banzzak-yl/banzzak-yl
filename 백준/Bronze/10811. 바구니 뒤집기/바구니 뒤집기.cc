#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, M, a, b, i, j, x[100], temp;
	scanf("%d %d", &N, &M);

	for (a = 0; a < N; a++)
		x[a] = a + 1;

	for (a = 0; a < M; a++)
	{
		scanf("%d %d", &i, &j);

		for (b = 0; b <= (j - i) / 2; b++)
		{
			temp = x[i + b - 1];
			x[i + b - 1] = x[j - b - 1];
			x[j - b - 1] = temp;
		}
	}

	for (a = 0; a < N; a++)
		printf("%d ", x[a]);

	return 0;
}