// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 51 (pdf, -25), Chapter 1,
// Exe. 1.23

#include <iostream>
#include "Sales_item.h"

int main()
{
Sales_item t;
Sales_item t1;

std::cout << "Pls enter transactions, use space to devide data: " << std::endl;
std::cout << "The order of data is: ISBN; no. of copies sold; average price:" << std::endl;
std::cin >> t;
int acc=0;
std::cout << "Pls input another transaction data:" <<std::endl;

while(std::cin >> t1)
   {
   if(t.isbn()==t1.isbn())   //same ISBN
  	{
	t+=t1;
	acc++;
	std::cout<<"Pls input another transaction data:"<<std::endl;
	}
   else    //different ISBN
	{
	std::cout<<std::endl;
	std::cout<< "--- New ISBN starts! ---"<<std::endl;
   	std::cout<< "The sum of the previous ISBN transactions is:" << std::endl;
   	std::cout<< "ISBN; no of copies sold; total revenue; average price:" << std::endl;
   	std::cout<< t << std::endl;
	std::cout<< "& the amount of transactions is: "<< acc <<std::endl;
	t=t1;
	acc=0;
	}
   }
std::cout<<"--- Transaction Finish! ---"<<std::endl;
std::cout<<"The last ISBN info is:"<<std::endl;
std::cout<< t <<std::endl;
std::cout<<"AND the amount of the last ISBN transaction is: "<< acc <<std::endl;

return 0;
}
