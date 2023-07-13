#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n1, n2, n3, reward, max;
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 == n2 && n2 == n3)
		reward = 10000 + n1 * 1000;
	else if (n1 == n2)
		reward = 1000 + n1 * 100;
	else if (n2 == n3)
		reward = 1000 + n2 * 100;
	else if (n3 == n1)
		reward = 1000 + n1 * 100;
	else
	{
		max = n1;
		if (max < n2)
			max = n2;
		if (max < n3)
			max = n3;
		reward = max * 100;
	}
	printf("%d", reward);

	return 0;
}