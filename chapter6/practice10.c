#include <stdio.h>

int main10(void)
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4-i; j++)
		{
			printf("\t");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*\t");
		}
		putchar('\n');
	}
}