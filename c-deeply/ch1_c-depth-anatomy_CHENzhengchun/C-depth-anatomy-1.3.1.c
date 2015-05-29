/* Using a static before a variable can keep last variable's value! */

#include <stdio.h>

static int j;

void func1(void)
{
	static int i = 0;   /* i is a local static variable, it can be only used in func1() */
	i++;
	printf("%d\n", i);
}

void func2(void)
{
	j = 0;   /* j is reset to 0 each time recalled! It's a trick?!! */
	printf("%d - ", j);
	j++;
	printf("%d\n", j);
}

int main()
{
	int k = 0;
	for(k = 0; k < 10; k++)
	{
		func1();   /* i = 1 after running 1st time */
		func2();
	}
	
	printf("%d\n", j);

	return 0;
}
