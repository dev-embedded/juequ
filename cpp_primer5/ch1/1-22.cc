// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 50 (pdf, -25), Chapter 1,
// Exe. 1.22

#include <iostream>
#include "Sales_item.h"

int main()
{
Sales_item t,t1;

std::cout << "Pls enter transactions, use space to devide data: " << std::endl;
std::cout << "The order of data is: ISBN; no. of copies sold; average price:" << std::endl;
if(!(std::cin >> t))
   {
   std::cout << "item0 data error!!!" << std::endl;
   return(-1);
   }
std::cout << "Pls input another transaction data:" <<std::endl;

while(std::cin >> t1)
   {
   if(t.isbn()==t1.isbn()) 
  	{
	t+=t1;
	std::cout<<"Pls input another transaction data:"<<std::endl;
	}
   else
	{
	std::cout<<std::endl;
	std::cout<< "The ISBN of the last data doesn't match!!!"<<std::endl;
   	std::cout<< "---The sum of the previous transactions is ---" << std::endl;
   	std::cout<< "ISBN; no of copies sold; total revenue; average price:" << std::endl;
   	std::cout<< t << std::endl;
	return 0;
	}
   }

return -1;
}
