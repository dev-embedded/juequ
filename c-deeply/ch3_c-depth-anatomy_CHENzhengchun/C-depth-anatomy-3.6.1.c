#include <stdio.h>

//#define STR(x) #x
//#define TOSTRING(x) STR(x)
//#pragma message(__FILE__ "("TOSRING(__LINE__)"):Hello Dong!")

#pragma message("Compiling " __FILE__)
#pragma message("Last modified on" __TIMESTAMP__)

int main()
{
	printf("Hello #pragma message!\n");

	return 0;
}
