// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 53 (pdf, -25), Chapter 1,
// Exe. 1.25

#include <iostream>
#include "Sales_item.h"

int main()
{
Sales_item total;

if(std::cin >> total)
   {
   Sales_item trans;
   while(std::cin >> trans)
   	{
	if(total.isbn()==trans.isbn())
	   total += trans;
	else
	   {
	   std::cout << total << std::endl;
	   total = trans;
	   }
   	}
   std::cout <<total << std::endl;
   }
else
   {
   std::cerr << "No data?!" << std::endl;
   return -1;
   }

return 0;
}
