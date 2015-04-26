// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 101 (pdf, -25), Chapter 2,
// Exe. 2.31

#include <iostream>
using namespace std;

int main()
{
int i=0;
const int v2=0;
int v1=v2;
int *p1=&v1, &r1=v1;  // p1 is a non-const(plain) int pointer
const int *p2=&v2, *const p3=&i, &r2=v2; 
// p2 is a low-level const int pointer, 
// p3 is a top-level & low-level const int pointer.

r1=v2;
//  p1=p2;  // error: can't convert from const int* to int*
p2=p1;
// p1=p3;  // same err as p1=p2
p2=p3;

return 0;
}
