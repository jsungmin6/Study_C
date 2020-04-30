#include <stdio.h>

int main3(void)
{
	int nMax = 0;
	int a, b, c;

	printf("숫자 세 개를 입력하시오. : ");
	scanf("%d%d%d", &a, &b, &c);
	
	nMax = a;
	nMax = nMax > b ? nMax : (nMax = b);
	nMax = nMax > c ? nMax : (nMax = c);

	printf("nMax : %d", nMax);
	return 0;
}