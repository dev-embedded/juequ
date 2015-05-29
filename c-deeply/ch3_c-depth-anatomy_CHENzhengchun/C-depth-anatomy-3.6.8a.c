#include <stdio.h>

int main()
{
#pragma pack(4) /* No different by 4~16? */
struct TestStruct1
{
	char c1;
	char c2;
	short s;		
	int i;
}a;

struct TestStruct4
{
	char a;
	long b;		
};

struct TestStruct5	
{
	char c;
	struct TestStruct4 d;
	long long e;
};
#pragma pack()

	printf("The size of TestStruct4 is: %d\n", sizeof(struct TestStruct1));
	printf("c1 %p, s %p, c2 %p, i %p\n", (unsigned int)(void *)&a.c1, (unsigned int)(void *)&a.s, (unsigned int)(void *)&a.c2, (unsigned int)(void *)&a.i);

	printf("The size of TestStruct4 is: %d\n", sizeof(struct TestStruct4));
	printf("The size of TestStruct5 is: %d\n", sizeof(struct TestStruct5));

	return 0;
}
