#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
	int T, R;
	char S[21], P[161];
	scanf("%d", &T); //총 몇 번 입력 받을 건지 입력

	for (int i = 0; i < T; i++) //T번 만큼 반복
	{
		scanf("%d %s", &R, S); //반복 횟수와 문자열 S 입력 받기

		int len = strlen(S); 
		int cnt = 0;

		for (int j = 0; j < len; j++)
		{
			for (int k = 0; k < R; k++)
			{
				P[cnt++] = S[j];
			}
		}
		P[cnt] = '\0';

		printf("%s\n", P);
	}

	return 0;
}