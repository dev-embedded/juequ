/* Filename: line3.c */
#include<stdio.h>

int main()
{
	printf("The current filename is %s; The current line is %d.\n", __FILE__, __LINE__);
	printf("macro - #line 100 #line.c\n");
	
	#line 100 "#line.c"
	printf("The filename changed by #line macro is %s; The line changed by #line macro is %d.\n", __FILE__, __LINE__);
	printf("The filename changed by #line macro is %s; The line changed by #line macro is %d.\n", __FILE__, __LINE__);

	return 0;
}
