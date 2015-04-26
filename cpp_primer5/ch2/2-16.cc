// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 83 (pdf, -25), Chapter 2,
// Exe. 2.16

#include <iostream>
using namespace std;

int main()
{
int i=0, &r1=i;
double d=0, &r2=d;
r2=3.14159;     //valid
r2=r1;		//valid
i=r2;		//valid
r1=d;		//valid

return 0;
}
