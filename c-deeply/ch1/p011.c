// To test \ddd 
// from <<C Language dissept deeply>> P.11 , Ch 1.4.2, rule 1-17 

# include <stdio.h>

int main() 
{
int i = '\107';
int j = '\109';
printf("\\107, int==%d, char==%c\n",i,i);
printf("\\109, int==%d, char==%c\n",j,j);
return 0;
}

