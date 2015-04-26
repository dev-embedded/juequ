// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 89 (pdf, -25), Chapter 2,
// Exe. 2.21

#include <iostream>
using namespace std;

int main()
{
int i=0;
// double *dp=&i; error:type convert int* to double* err
int *ip=&i;
// int *p=i;   error: type convert int to int* err

return 0;
}
