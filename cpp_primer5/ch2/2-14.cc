// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 81 (pdf, -25), Chapter 2,
// Exe. 2.14

#include <iostream>
using namespace std;

int main()
{
int i=100, sum=0;
for(int i=0; i!=10; ++i)  //the scope of this i is only in for();
	sum += i;
cout <<i<<" "<<sum<<endl;  //so, here i=100. 
return 0;
}
