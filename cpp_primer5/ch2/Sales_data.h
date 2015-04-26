#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
	std::string isdn;
	unsigned units_sold = 0;
	double unit_price=0.0;
	};
#endif

