#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int A, B, C, total=0;

	scanf("%lld %lld %lld", &A, &B, &C);
	total = A + B + C;
	printf("%lld",total);
}