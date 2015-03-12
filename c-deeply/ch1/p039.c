// To test put fun() in a  struct 
// from <<C Language dissept deeply>> P.39 , Ch 1.16.3 
// -->
// Error: field 'total' declared as a function


# include <stdio.h>

struct student
{
int no;
char name[20];
int math;
int phy;
int chem;
int total(int ma, int phy, int che);
//    {
//        return (ma+phy+che);
//    };
}stu;

int main() 
{
printf("The size of a empty struct is: %d !\n", sizeof(stu));

return 0;
}

