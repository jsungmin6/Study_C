#include <stdio.h>

int main3(void)
{
	int nAge = 0, nFee = 1000;
	printf("나이를 입력하시오 : ");
	scanf("%d", &nAge);

	if (nAge > 13) {
		if (nAge > 19)
			nFee = 1000;
		else
			nFee = nFee * 75 / 100;
	}
	else {
		if (nAge > 3)
			nFee = nFee * 50 / 100;
		else
			nFee = nFee * 0;

	}
			
	printf("최종요금 : %d", nFee);


	return 0;

}