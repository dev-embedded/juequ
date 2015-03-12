// To test { } 
// from <<C Language dissept deeply>> P.60 , Ch 2.6 

# include <stdio.h>

int main() 
{
// char a[10] {="abcde"};  // <-- this does NOT work!

char a[10] = {"abcde"};
printf("The content of the array is: %s\n", a);

return 0;
}

