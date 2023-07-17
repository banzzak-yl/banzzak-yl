#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, i, A, B;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i + 1, A + B);
	}

	return 0;
}