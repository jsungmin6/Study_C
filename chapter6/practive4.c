#include <stdio.h>

int main4(void)
{
	int nAge = 0, nFee = 1000;
	double nRate = 0;
	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &nAge);

	if (nAge >= 65)
		nRate = 0;
	else if (nAge >= 20)
		nRate = 1;
	else if (nAge >= 14)
		nRate = 0.75;
	else if (nAge >= 4)
		nRate = 0.5;
	else
		nRate = 0;


	printf("������� : %d��", (int)(nFee * nRate));

	return 0;
}