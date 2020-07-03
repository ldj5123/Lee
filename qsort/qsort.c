#include <stdio.h>
#include "qsort.h"
#include "stack.h"

static void swap(int *pa, int *pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void qsort(void *pArr, int left, int right, void (*sort)(const void*))
{
	
	
	push(right);
	push(left);
	
	while ( !isEmpty() ){
		int start = pop();
		int end = pop();
		
		printf("qsort(pArr, %d, %d)\n", start, end);
		
		int last = start;
		for (int i = start + 1; i <= end; ++i)
			if ((*sort)(pArr+start) > (*sort)(pArr+i)) {
				++last;
				swap(pArr + last, pArr + i);
			}
		swap(pArr + start, pArr + last);
		
		if(start < end){
			push(end);
			push(last + 1);
			push(last - 1);
			push(start);
		}
	}
	
	
}
