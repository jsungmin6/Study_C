#include <stdio.h>

int main02(void)
{
	int second = 0;
	printf("초를 입력하세요 : ");
	scanf("%d", &second);
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", second, second / 60 / 60, second / 60 % 60, second % 60);
	return 0;
}