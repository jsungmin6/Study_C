#include <stdio.h>

int main1(void)
{
	int Input = 0, nMax = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &Input);
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &nMax);

	if (nMax <= Input) {
		nMax = Input;
	}
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &Input);
	if (nMax <= Input) {
		nMax = Input;
	}

	printf("Max : %d", nMax);

	

	return 0;
}