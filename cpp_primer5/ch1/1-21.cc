// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 50 (pdf, -25), Chapter 1,
// Exe. 1.21

#include <iostream>
#include "Sales_item.h"

int main()
{
Sales_item t1,t2;

std::cout << "Pls enter transactions, use space to devide data: " << std::endl;
std::cout << "The order of data is: ISBN; no. of copies sold; average price:" << std::endl;
if(!(std::cin >> t1))
   {
   std::cout << "Book1 data error!!!" << std::endl;
   return(-1);
   }
if(!(std::cin >> t2))
   {
   std::cout << "Book2 data error!!!" << std::endl;
   return(-1);
   }
std::cout << std::endl;

if(t1.isbn()==t2.isbn())
   {
   std::cout<< "The sum of the tow transactions is ---" << std::endl;
   std::cout<< "ISBN; no of copies sold; total revenue; average price:" << std::endl;
   std::cout<< t1+t2 << std::endl;
   }
else std::cout << "!!! The ISBN of the two transactions doesn't match." << std::endl;

return 0;
}
