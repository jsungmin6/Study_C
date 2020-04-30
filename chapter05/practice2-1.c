#include <stdio.h>

int main21(void)
{
	int H = 0;
	printf("키를 입력하시오 : ");
	scanf("%d", &H);
	
	printf("%s\n", H >= 150 ? "합격" : "불합격");

	return 0;

}