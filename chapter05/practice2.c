#include <stdio.h>
#include <string.h>
int mainp2(void)
{
	int nHeight = 0;
	char nSelect[12];
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%d", &nHeight);

	nHeight >= 150 ? strcpy(nSelect, "�հ�") : strcpy(nSelect, "���հ�");
	printf("��� : %s\n",nSelect);

	return 0;
}