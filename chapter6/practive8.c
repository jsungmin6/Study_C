#include <stdio.h>

int main8(void)
{
	int nInput = 0;
	printf("2~9������ ������ �Է��ϼ��� : ");
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