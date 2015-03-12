// To test logical operator 
// from <<C Language dissept deeply>> P.58 , Ch 2.4 

# include <stdio.h>

int fun()
{
return 1;
}

int main() 
{
int a = 3;
int b = 1;

if ((a==3) && b++) 
	printf("--> if((a==3) && b++) works! and b=%d\n",b);
printf("if b==2, it means that after &&, b++ works!\n");
if ((a==3) || b--) 
	printf("--> if((a==3) || b--) works! and b=%d\n",b);
printf("if b==2, it means that after ||, b-- acutally does NOT work!\n");
if ((a==3) || fun()) 
	printf("--> if((a==3) || fun()) works!\n");
return 0;
}

