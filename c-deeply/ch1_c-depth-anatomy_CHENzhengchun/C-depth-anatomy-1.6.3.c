#include <stdio.h>

int b[100];

void func(int b[100])
{
	sizeof(b);
}

int main()
{
	unsigned i;
	for(i = 9; i > 0; i--)
	{
		printf("%u\n", i);
	}

	printf("The size of b[100] is: %d\n", sizeof(b));
	//printf("The size of b[100] is: %d\n", func(int b[100]));
	return 0;
}
