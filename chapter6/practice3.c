#include <stdio.h>

int main3(void)
{
	int nAge = 0, nFee = 1000;
	printf("���̸� �Է��Ͻÿ� : ");
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
			
	printf("������� : %d", nFee);


	return 0;

}