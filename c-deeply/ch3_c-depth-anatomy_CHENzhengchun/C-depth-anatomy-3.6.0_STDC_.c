#include <stdio.h>

int main()
{
	int j;

	printf("Date:%s\n", __DATE__);
	printf("Time:%s\n", __TIME__);
    printf("Filename:%s\n", __FILE__);
    printf("The current line is %d.\n", __LINE__);
    printf("The compiler is %s to support standard C.\n", (__STDC__)?"Ok":"No"); 

	return 0;
}
