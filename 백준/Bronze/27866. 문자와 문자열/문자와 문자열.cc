#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, num;
	char x[1000];

	scanf("%s", &x);
	scanf("%d", &num);

	printf("%c", x[num - 1]);

	return 0;
}