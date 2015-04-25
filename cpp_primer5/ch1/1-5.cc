// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 35 (pdf, -25), Chapter 1,
// Exe. 1.5

#include <iostream>

int main()
{
   std::cout << "Please input 2 numbers:" ;
   std::cout << std::endl;
   int a=0;
   int b=0;
   std::cin >> a ; 
   std::cin >> b ;
   std::cout<<"The pruduct of ";
   std::cout<<a;
   std::cout<<" & ";
   std::cout<<b;
   std::cout<<" is: ";
   std::cout<<a*b;
   std::cout<<std::endl;

   return 0;
}
