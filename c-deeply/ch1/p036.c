// To test extern
// from <<C Language dissept deeply>> P.36 , Ch 1.15 
// -->
// Error: conflicting types for 'j'


# include <stdio.h>
# include "./p036.h"

int main() 
{
extern double j;
j = 3.0;
printf("extern j: int = %d ; double = %f \n",j,j);
return 0;
}

