#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {10, 12, 13, 14, 15};

	int * pt1 = (int *) (&a+1); // ptr1->b[]
	int * pt2 = (int *)((int)a+1); // Don't know where pt2 is?
//	int * pt2 = (int *)((int)a+0); // {1} of a[5]
//	int * pt2 = (int *)((int)a+4); // {2} of a[5]
//	int * pt2 = (int *)((int)a+8); // {3} of a[5]

	printf("%x, %d\n", &a, (int)a);
	printf("%x, %x, %x\n", pt1[-1], pt1[0], *pt2); // *pt2's value can't be set! 

	return 0;
}
