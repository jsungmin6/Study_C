#include <stdio.h>
#include <stdlib.h>

int MyCmp(const void* pParam1, const void* pParam2)
{
	//매개변수를 int형 포인터로 강제 형변환 한 후 간접지정.
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