// this is to test the return of strlen()

# include <stdio.h>
# include <string.h>

int main()
{
char a[10] = "12345";
char *p1 = "abcde";
a[5] = '\0';

printf("the length of a[10]=\"12345\" is: %d\n", strlen(a));
printf("Resign a[5]='\\0', if the result is 5, then '\\0' is not counted in strlen() !\n\n");
// \\0 is used for printing \0.

printf("the length of *p1=\"abcde\" is: %d\n", strlen(p1));
// \" is used for printing " in the printf() function.

return 0;

}
