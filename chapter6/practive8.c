#include <stdio.h>

int main8(void)
{
	int nInput = 0;
	printf("2~9사이의 정수를 입력하세요 : ");
	scanf("%d", &nInput);

	int i = 1;

	if (nInput >= 2 && nInput <= 9)
	{
		while (i < 10)
		{
			printf("%d * %d = %d\n", nInput, i, nInput * i);
			i++;
		}
	}
	else {
		puts("ERROR");
	}

	return 0;
}