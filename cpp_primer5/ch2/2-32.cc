// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 103 (pdf, -25), Chapter 2,
// Exe. 2.32

#include <iostream>

int main()
{
   int null=0, *p=&null;
   std::cout<<"null="<<null<<", & its address is: "<<p<<std::endl;

   return 0;
}
