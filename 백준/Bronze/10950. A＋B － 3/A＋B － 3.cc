#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, A, B, i;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}