// Test of sizeof(int) *p
// from <<C Language dissept deeply>> P.12, Ch1.5.2
// & why sizeof(a) is differnt in main() & fun1() ???

# include <stdio.h>

void fun1(int b[100]) 
{
printf("\nIn the fun1: sizeof(a)=%d \n\n", sizeof(b));
}

int main() 
{
int *p=NULL;
printf("\nint *p=NULL: sizeof(p)=%2d, sizeof(*p)=%2d;\n",sizeof(p),sizeof(*p));
// printf("& sizeof(int) *p=%d\n",sizeof(int)*p);
int a[100];
printf("\nint a[100]:  sizeof(a)=%d, sizeof(a[100])=%d;\n             sizeof(&a)=%d, sizeof(&a[100]=%d;\n",sizeof(a),sizeof(a[100]),sizeof(&a),sizeof(&a[100]));
fun1(a);
return 0;
}

