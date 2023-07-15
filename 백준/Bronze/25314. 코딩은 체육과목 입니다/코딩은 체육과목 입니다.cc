#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int N, i;
	scanf("%d", &N);

	for (i = 0; i < N; i+=4)
		printf("long ");
	printf("int");

	return 0;
}