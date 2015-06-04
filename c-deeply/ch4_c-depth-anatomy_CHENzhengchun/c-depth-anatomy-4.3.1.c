#include <stdio.h>
#include <string.h>

int main()
{
	char *p = "abcdef";
	char a[] = "123456";

	/* Get 'e' */
	printf("The 5th charact is: %c.\n", *(p+4));
	printf("The 5th charact is: %c.\n", p[4]);

	/* Get '5' */
	printf("The 5th number is: %d.\n", a[4]);
	printf("The 5th number is: %d.\n", *(a + 4));

	return 0;
}
