#include <stdio.h>

int main7(void)
{
	int Total = 0;

	int i = 1;
	while (i <= 10)
	{
		Total += i++;
	}
	printf("Total : %d", Total);

	return 0;
}