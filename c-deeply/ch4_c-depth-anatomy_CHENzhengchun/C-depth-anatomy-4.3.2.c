#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[]={1,2,3,4,5,6,7};
	int x = 10;
	int b[]={8,9,10,11,12,13,14};
	int *ptr = (int *)(&a+1);	
	printf("%d,%d\n", *(a+1), *(ptr));
	printf("%d\n", x);
	printf("%d\n", *(b+3));

	return 0;
}
