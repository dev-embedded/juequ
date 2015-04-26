// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 67 (pdf, -25), Chapter 2,
// Exe. 2.3

#include <iostream>

using namespace std;

int main()
{

unsigned u=10, u2=42;
cout << "unsigned u=10, u2=42; then u-u2=" << u-u2 <<endl;

int i=10, i2=42;
cout << "int i=10, i2=42; then i-i2=" << i-i2 <<endl;

cout << "Then, i-u2=" << i-u2 << "; u-i2=" << u-i2 <<endl;
cout << "AND then, i-u=" << i-u << "; u-i=" << u-i <<endl;

return 0;
}
