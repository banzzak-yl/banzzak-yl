#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x[100], num, num1, i, cnt = 0;
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		scanf("%d", &x[i]);

	scanf("%d", &num1);

	for (i = 0; i < num; i++)
	{
		if (x[i] == num1)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}