#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int MyCompare(const void* pParam1, const void* pParam2)
{
	//�Ű������� char�� �������� �����ͷ� ���� �� ��ȯ �� ���� ����.
	//�� �� strcmp�� ��
	return strcmp(*(char**)pParam1,*(char**)pParam2);
}

int main(void)
{
	char* aList[5] = {
		"��ź����","���","���¹�","���","������"};
	int i = 0;
	qsort(aList, 5, sizeof(int), MyCompare);

	for (i = 0; i < 5; ++i)
	{
		printf("%s\t", aList[i]);
	}
	return 0;
}