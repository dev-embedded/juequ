// To test empty struct 
// from <<C Language dissept deeply>> P.37 , Ch 1.16.1 

# include <stdio.h>

struct student
{}stu;

int main() 
{
printf("The size of a empty struct is: %d !\n", sizeof(stu));

return 0;
}

