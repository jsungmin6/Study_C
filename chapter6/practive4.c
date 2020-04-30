#include <stdio.h>

int main4(void)
{
	int nAge = 0, nFee = 1000;
	double nRate = 0;
	printf("나이를 입력하시오 : ");
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


	printf("최종요금 : %d원", (int)(nFee * nRate));

	return 0;
}