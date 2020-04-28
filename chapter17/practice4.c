#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int MyCompare(const void* pParam1, const void* pParam2)
{
	//매개변수를 char의 포인터의 포인터로 강제 형 변환 후 간접 지정.
	//이 후 strcmp로 비교
	return strcmp(*(char**)pParam1,*(char**)pParam2);
}

int main(void)
{
	char* aList[5] = {
		"폭탄조심","장애","김태민","김고나","김정미"};
	int i = 0;
	qsort(aList, 5, sizeof(int), MyCompare);

	for (i = 0; i < 5; ++i)
	{
		printf("%s\t", aList[i]);
	}
	return 0;
}