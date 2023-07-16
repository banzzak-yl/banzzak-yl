#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int T, i, A, B;
	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}