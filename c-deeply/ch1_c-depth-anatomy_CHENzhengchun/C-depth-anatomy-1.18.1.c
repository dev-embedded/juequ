#include <stdio.h>

enum Color
{
	GREEN = 1,
	RED,
	BLUE,
	GREEN_RED = 10,
	GREEN_BLUE,
}ColorVal;

int main()
{
	printf("%d\n", (enum Color)2);
	printf("%d\n", sizeof(ColorVal));
	return 0;
}
