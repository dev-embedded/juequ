// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 41 (pdf, -25), Chapter 1,
// Exe. 1.12

#include <iostream>

int main()
{
int sum=0;
for(int i=-10; i<=10; i++) 
   {
   sum+=i;
   std::cout<<"i="<<i<<", & sum="<<sum<<std::endl;
   }
std::cout << "The answer is: " << sum << std::endl;

return 0;
}
