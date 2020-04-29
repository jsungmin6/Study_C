#include <stdio.h>

int main01(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &num1, &num2);
	
	printf("AVG : %.2f", (num1 + num2) / 2.0);

	return 0;
}