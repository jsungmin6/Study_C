#include <stdio.h>
#include <string.h>
int mainp2(void)
{
	int nHeight = 0;
	char nSelect[12];
	printf("키를 입력하세요 : ");
	scanf("%d", &nHeight);

	nHeight >= 150 ? strcpy(nSelect, "합격") : strcpy(nSelect, "불합격");
	printf("결과 : %s\n",nSelect);

	return 0;
}