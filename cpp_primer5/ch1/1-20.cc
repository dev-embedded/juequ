// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 50 (pdf, -25), Chapter 1,
// Exe. 1.20

#include <iostream>
#include "Sales_item.h"

int main()
{
Sales_item t;

std::cout << "Pls enter transactions, use space to devide data: " << std::endl;
std::cout << "ISBN; no. of copies sold; average price:" << std::endl;
while(std::cin >> t)
   {
   std::cout<<"ISBN, no. of copies sold, total revenue, & average price are:"<< std::endl;
   std::cout<< t << std::endl;
   }

return 0;
}
