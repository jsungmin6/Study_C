#include <stdio.h>

int maint1(void)
{
	int nInput = 0, nMax = 0;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;

	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &nMax);

	if (nInput >= nMax) nMax = nInput;

	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;
	if (nInput >= nMax) nMax = nInput;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;
	if (nInput >= nMax) nMax = nInput;

	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &nInput);
	if (nInput < 0) nInput = 0;
	else if (nInput > 100) nInput = 100;
	if (nInput >= nMax) nMax = nInput;

	printf("Max : %d", nMax);

	
}