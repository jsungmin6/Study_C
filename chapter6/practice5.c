#include <stdio.h>

int main5(void)
{
	int nNum = 0;
	printf("1~9������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &nNum);
	if (nNum < 1) nNum = 1;
	else if (nNum > 9) nNum = 9;

	int i = 0;
	while (i < nNum) {
		printf("*");
		i++;
	}
	printf("\n");

	return 0;
}