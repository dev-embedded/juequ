#include <stdio.h>

int main()
{
	int * p = NULL;
	printf("The value of 'p' is: %d.\n", (int)p);

	int i = 10;
	printf("The value of 'i' is: %d.\n", i);

	int * q = &i;
	*q = NULL;
	printf("The value of '*q' is: %d.\n", *q);
	/* Print the values of 'p', 'i' & 'q'. */

	return 0;
}

/* 
 * GCC shows a warnig:
 * c-depth-anatomy-4.1.3.c:12:5: warning: assignment makes integer from pointer without a cast [enabled by default]
 */
