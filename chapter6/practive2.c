#include <stdio.h>

int main2(void)
{
	int defalt = 1000;
	int age = 0;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	if (age >= 20) {
		printf("최종요금 : %d원", defalt);
	}
	else {
		printf("최종요금 : %.0f원", (defalt * 0.75));
	}
	return 0;
}