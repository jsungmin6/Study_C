#include <stdio.h>

int main2(void)
{
	int defalt = 1000;
	int age = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	if (age >= 20) {
		printf("������� : %d��", defalt);
	}
	else {
		printf("������� : %.0f��", (defalt * 0.75));
	}
	return 0;
}