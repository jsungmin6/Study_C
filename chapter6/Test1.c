#include <stdio.h>

int maint1(void)
{
	int nInput = 0, nMax = 0;
	printf("숫자를 입력하세요");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;

	printf("숫자를 입력하세요");
	scanf("%d", &nMax);

	if (nInput >= nMax) nMax = nInput;

	printf("숫자를 입력하세요");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;
	if (nInput >= nMax) nMax = nInput;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;
	if (nInput >= nMax) nMax = nInput;

	printf("숫자를 입력하세요");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;
	if (nInput >= nMax) nMax = nInput;

	printf("Max : %d", nMax);

	
}