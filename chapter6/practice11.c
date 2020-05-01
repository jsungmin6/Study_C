#include <stdio.h>

int main11(void)
{

	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 0; j < 5 - i; ++j)
		{
			printf("\t");
		}
		for (int k = 1; k <= i*2-1; k++)
		{
			printf("*\t");
		}
		putchar('\n');
	}
}