#include <stdio.h>

int main02(void)
{
	int second = 0;
	printf("�ʸ� �Է��ϼ��� : ");
	scanf("%d", &second);
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", second, second / 60 / 60, second / 60 % 60, second % 60);
	return 0;
}