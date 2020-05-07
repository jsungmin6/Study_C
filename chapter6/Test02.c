#include <stdio.h>

int maint2(void)
{
	int count = 0, Total = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 4 == 0)
		{
			Total += i;
			count += 1;
		}
	}
	printf("Total : %d, count = %d", Total, count);
	return 0;
}