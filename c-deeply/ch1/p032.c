// To test const follow case 
// from <<C Language dissept deeply>> P.32 , Ch 1.13.1
// --->
// NOTE: It does not work !!! & The err message of gcc is: 
// "case label does not reduce to an integer constant"
// <---
// According to P.22, Ch 1.8.2, "case" can only be followed by
// int, char constant or expressions.


# include <stdio.h>

# define ZERO 0

int main() 
{
int i=1;
const int JIU=9;
int j=0;

switch(j)
{
case ZERO:
    printf("j == 0 ! \n");
    break;
case i:
    printf("j == i == 1 ! \n");
    break;
case JIU:
    printf("j == 1 ! \n");
    break;
default:
    break;
}

return 0;
}

