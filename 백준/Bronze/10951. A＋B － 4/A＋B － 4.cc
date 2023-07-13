#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A, B;
	while(scanf("%d %d", &A, &B)!=EOF)
	{
		printf("%d\n", A + B);
	}
	return 0;
}