// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 39 (pdf, -25), Chapter 1,
// Exe. 1.9

#include <iostream>

int main()
{
   std::cout << "The sum from 50 to 100 is: ";
   int i=50;
   int sum=0;
   while(i<=100)
   {
	sum+=i;
	i++;
   }
   std::cout << sum << std::endl;

   return 0;
}
