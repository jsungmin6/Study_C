#include <stdio.h>

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (b > nMax) nMax = b;
	if (c > nMax) nMax = c;

	return nMax;
}

int mainp2(void)
{
	int(*pfGetMax)(int, int, int) = GetMax;

	printf("Max : %d\n", pfGetMax(1, 2, 3));
	return 0;
}