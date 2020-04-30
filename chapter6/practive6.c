#include <stdio.h>

int main6(void)
{
	int nNum = 5;

	int i = 0, j = 0;
	while (i < nNum)
	{
		j = 0;
		while (j < nNum)
		{
			putchar('*');
			putchar('\t');
			j++;
		}
		putchar('\n');
		i++;
	}
	
	return 0;
}