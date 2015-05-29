#include <stdio.h>

int main()
{
#pragma pack(16) /* No different by 4~16? */
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

	printf("The size of TestStruct4 is: %d\n", sizeof(struct TestStruct4));
	printf("The size of TestStruct5 is: %d\n", sizeof(struct TestStruct5));

	return 0;
}
