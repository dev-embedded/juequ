// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 39 (pdf, -25), Chapter 1,
// Exe. 1.11

#include <iostream>

int main()
{
std::cout << "Please input 2 integers: " << std::endl;
int a,b;
std::cin >> a >> b;
std::cout << "The number in the range by " << a
          << " & " << b << " is: " << std::endl;
if(a>b)
   {
   while(a>b)
      std::cout << a-- << ", ";
   }
else if(a==b) std::cout << "Since they equals, the rang is only: ";
else
   {
   while(a<b)
	std::cout << a++ << ", ";
   }
std::cout << b << "." << std::endl;
   
return 0;
}
