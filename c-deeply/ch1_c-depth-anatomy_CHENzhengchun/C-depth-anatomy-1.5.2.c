#include <stdio.h>

void func(char b[100])
{
	printf("The size of b[100] in func() is: %d\n", sizeof(b));
}

int main()
{
	int * p = NULL;
	int a[100];
	int b[100];
	char c[100];
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
