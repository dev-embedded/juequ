// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 39 (pdf, -25), Chapter 1,
// Exe. 1.10

#include <iostream>

int main()
{
std::cout << "Print the numbers from ten down to zero: " <<std::endl;
int i=10;
while(i>=0)
   std::cout << i-- <<", ";
std::cout << std::endl;

return 0;
}
