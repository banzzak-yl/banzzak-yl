#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, M, A, B, C;
	scanf("%d", &N);
	scanf("%d", &M);

	A = M % 100 % 10;
	B = (M / 10) % 10;
	C = M / 100;

	printf("%d\n", N * A);
	printf("%d\n", N * B);
	printf("%d\n", N * C);
	printf("%d", N * A  + N * B * 10 + N * C * 100);
}