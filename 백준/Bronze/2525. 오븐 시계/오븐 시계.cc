#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int hour, minute, time;
	scanf("%d %d", &hour, &minute);
	scanf("%d", &time);

	while (1)
	{
		if (minute + time >= 60)
		{
			hour++;
			minute = minute - 60;

			if (hour >= 24)
				hour -= 24;
		}
		else
			break;
	}
	minute += time;

	printf("%d %d", hour, minute);

	return 0;
}