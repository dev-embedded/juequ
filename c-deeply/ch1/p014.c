// Test signed int + unsingened int
// from <<C Language dissept deeply>> P.14, Ch1.6

# include <stdio.h>

int main() 
{
int i =-20;
unsigned j=10;
unsigned long k=1;
//printf("unsigned j; sizeof(j)=%d; unsinged long k, sizeof(k)=%d\n",sizeof(j),sizeof(k));
printf("signed int i=%3d, unsigned int j=%3d;\n",i,j);
printf("then d:i+j=%d; u:i+j=%u; \n     x:i+j=%x; o:i+j=%o\n",i+j,i+j,i+j,i+j);
printf("then the result of (i+j)>10?(>10):(<10) is: ");
((i+j)>10)?puts("i+j>10"):puts("i+j<=10");
printf("\n");
return 0;
}

