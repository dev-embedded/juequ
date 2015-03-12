// To test size of emum 
// from <<C Language dissept deeply>> P.45 , Ch 1.18.2 

# include <stdio.h>

int main() 
{

enum Color
   {
	GREEN=1,
	RED,
	BLUE,
	GREEN_RED=10,
	GREEN_BLUE
   }ColorVal;

printf("The size of enum is: %d !\n", sizeof(ColorVal));

return 0;
}

