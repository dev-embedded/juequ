// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 37 (pdf, -25), Chapter 1,
// Exe. 1.8

#include <iostream>

int main()
{
   std::cout << "/*";
   std::cout << "*/";
//   std::cout << /*  "*/"  */;  Illegal statement !!!
   std::cout << /*  "*/"  /*  "/*"  */;
   std::cout << std::endl;

   return 0;
}
