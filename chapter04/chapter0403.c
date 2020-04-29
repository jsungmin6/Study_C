#include <stdio.h>

int main(void)
{
	int nInput, nTotal;

	nInput = 0;
	nTotal = 0;

	for (int i = 1; i <= 3; i++) {
		scanf("%d", &nInput);
		nTotal += nInput;
	}
	



	printf("Total : %d\n", nTotal);
	return 0;
}