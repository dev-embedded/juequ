// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 35 (pdf, -25), Chapter 1,
// Exe. 1.6

#include <iostream>

int main()
{
   std::cout << "Please input 2 numbers:" << std::endl;
   int a=0,b=0;
   std::cin >> a >> b ;
   std::cout <<"The sum of "<< a
	     <<" and " << b 
	     <<" is: " << a+b << std::endl;

   return 0;
}
