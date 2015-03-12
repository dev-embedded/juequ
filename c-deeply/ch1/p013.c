// Test one's complement & char
// from <<C Language dissept deeply>> P.13, Ch1.6

# include <stdio.h>
# include <string.h>

int main() 
{
// signed char a[1000];
unsigned char a[1000];
int i;
for(i=0; i<1000; i++) a[i]=-1-i;
printf("strlen(a)=%d\n",strlen(a));
for(i=0;i<256;i++)
printf("a[%3d]: int =%4d, char =%c \n ",i,(int)a[i],a[i]);
return 0;
}

