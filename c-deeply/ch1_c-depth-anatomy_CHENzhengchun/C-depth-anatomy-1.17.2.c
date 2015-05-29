#include <stdio.h>

int checkSystem()
{
	union check
	{
		int i;
		char ch;
	}c;
	c.i = 258;
/*	c.i = 17;   */
	printf("The value of c.i is: %p\n", &c.i);
	return (c.ch == 1);
}

int main()
{
	printf("The endian's type is: %d\n", checkSystem());
	
	return 0;
}
