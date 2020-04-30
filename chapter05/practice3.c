#include <stdio.h>

int main31(void)
{
	int nMax = 0;
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	a - b <= 0 ? (b=b) : (b=a);
	b - c <= 0 ? (nMax = c) : (nMax = b);

	printf("MAX : %d\n", nMax);

	return 0;
}