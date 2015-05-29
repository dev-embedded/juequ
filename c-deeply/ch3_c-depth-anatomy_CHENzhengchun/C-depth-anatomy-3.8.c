#include <stdio.h>

#define XN "Hello BBT!"
#define melt(x, n) x##n

int main()
{
	printf("%s\n", melt(X, N));

	return 0;
}
