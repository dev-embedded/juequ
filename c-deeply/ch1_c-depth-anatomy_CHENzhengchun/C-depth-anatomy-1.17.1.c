#include <stdio.h>

union Endian
{
	int  i;
	char a[2];
};

int main()
{
	union Endian * p, u = {0};
	p = &u;
//	p->i = 0;== u = {0};
// union 'u' has to be initiallized as 0.
	p->a[0] = 0x01; // 0000 0001
	p->a[1] = 0x02; // 0000 0010

	printf("The size of union 'u' is:%d\n", sizeof(u));
	printf("The value of p->i is:%d\n", p->i);
// The result is 513 = 0000 0010 0000 0001, it shows the system is little endian. 
	printf("The value of u.i is:%d\n", u.i);
	return 0;
}
