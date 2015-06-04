/*
 * Filename: c-depth-anatomy-1.5.2.c
 */

#include <stdio.h>

void func(char b[100])
{
	/* 'b' here means the address of 'b array's first element. */
	printf("The size of 'b' here in func() is: %d\n", sizeof(b));
	printf("The value of b[7] is = %d\n", b[7]);	
}

int main()
{
	int * p = NULL;  /* Initialization of pointer 'p'. */
	int a[100];
	int b[100];
	char c[100];  
/* In 3 arraies there aren't a[100], b[100] & c[100] element! */
	b[7] = 7;
	c[0] = '\0';
	func(c);

	printf("%d\n", sizeof(p));	
	printf("%d\n", sizeof(* p));	

	printf("%d\n", sizeof(a));	
	printf("%d\n", sizeof(a[100]));	
	printf("%d\n", sizeof(&a));	
	printf("%d\n", sizeof(&a[100]));	

	//printf("%d\n", func(b));	

	return 0;
}
