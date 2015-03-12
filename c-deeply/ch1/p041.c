// Test signed int + unsingened int
// from <<C Language dissept deeply>> P.41, Ch1.17.2

# include <stdio.h>

int main() 
{
int a[5] = {1,2,3,4,5};
int *ptr=(int *)(a+1);  // or int *ptr=a+1;
int *ptr1 = (int *)(&a+1);
int *ptr2 = (int *)((int)a+1);
// printf("(int)a = %x\n", (int)a);
printf("%x, %x, %x\n",ptr[0],ptr1[-1],*ptr2);
return 0;
}

