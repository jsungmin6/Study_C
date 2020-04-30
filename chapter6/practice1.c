#include <stdio.h>

int main1(void)
{
	int Input = 0, nMax = 0;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &Input);
	printf("숫자를 입력하세요 : ");
	scanf("%d", &nMax);

	if (nMax <= Input) {
		nMax = Input;
	}
	printf("숫자를 입력하세요 : ");
	scanf("%d", &Input);
	if (nMax <= Input) {
		nMax = Input;
	}

	printf("Max : %d", nMax);

	

	return 0;
}