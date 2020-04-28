#include <stdio.h>

int mainp1(void) {
	void* pData = mainp1;

	printf("%p\n", mainp1);
	printf("%p\n", pData);
	return 0;
}