// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 71 (pdf, -25), Chapter 2,
// Exe. 2.8

#include <iostream>
using namespace std;

int main()
{
cout << "Using escape sequence, print 2M followed by a new line.\n" 
     << "Then, print 2,then a tab, then an M, followed by a new line.\n" 
     << "FYI: \\11 means TAB, \\12 means Newline, \\62 means 2, \\115 means M\n" 
     << "Note: A generalized escape sequence is \\x followed by one or more Hexadecimal digits or a \\ followed by one, two, or three Octall digits.\n";
cout << "\62\115\12" << "\62\11\115\12";

return 0;
}
