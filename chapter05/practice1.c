#include <stdio.h>

int mainp1(void)
{
	int nAge = 0, nHeight = 0;

	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &nAge);
	printf("Ű�� �Է��Ͻÿ�  : ");
	scanf("%d", &nHeight);

	printf("��� : %d (1:�հ�, 0:���հ�)\n", nAge >= 20 && nAge <= 30 && nHeight >= 150);

	return 0;
}