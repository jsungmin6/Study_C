#include <stdio.h>

int main9(void)
{
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*\t");
		}
		putchar('\n');
	}
}