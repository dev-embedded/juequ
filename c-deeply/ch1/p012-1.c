// To test sizeof(i++) 
// from <<C Language dissept deeply>> P.12 , Ch 1.5.1

# include <stdio.h>

int main() 
{
int i=0;
printf("int i = 0 ;\n");
printf("sizeof(i++) = %d ;\n", sizeof(i++));
printf("then, i = %d !\n", i);
return 0;
}

