#include <stdio.h>
#include <stdlib.h>

int MyCmp(const void* pParam1, const void* pParam2)
{
	//�Ű������� int�� �����ͷ� ���� ����ȯ �� �� ��������.
	return *(int*)pParam1 - *(int*)pParam2;
}

int mainp3(void)
{
	int aList[5] = { 30,10,40,50,20 };
	int i = 0;
	qsort(aList, 5, sizeof(int), MyCmp);

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t",aList[i]);
	}
	return 0;
}