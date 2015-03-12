// To test ++i+++i+++i 
// from <<C Language dissept deeply>> P.62 , Ch 2.7.1 

# include <stdio.h>

int main() 
{
int i=1;
int j=0;
j=(++i)+(++i)+(++i);
printf("while i=1, (++i)+(++i)+(++i)== %d\n", j);

return 0;
}

