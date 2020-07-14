#include <stdio.h>
#include "qsort.h"

void sortInt(const void* pData)
{
	printf("%d", *(int *)pData);			// 원래 자료형으로 캐스팅하고 역참조한다.
}

void sortDouble(const void* pData)
{
	printf("%f", *(double *)pData);
}

int main(void)
{
	int nums[] = {3, 4, 6, 1, 2, 7, 9, 10, 8 ,5};
	qsort(nums, 0, 10-1, sortInt);
	
	for(int i = 0; i <10; ++i)
		printf("%d", nums[i]);
	printf("\n");
	
	double num[] = {3.3, 4.4, 6.6, 1.1, 2.2, 7.7, 9.9, 10.1, 8.8 ,5.5};
	qsort(num, 0, 10-1, sortDouble);
	
	for(int i = 0; i <10; ++i)
		printf("%lf", num[i]);
	printf("\n");
	
	return 0;
}
