// <<C++ Primer 5th Edition>> by Stanley B. Lippman - Aug2012
// Page 106 (pdf, -25), Chapter 2,
// Exe. 2.33

//NOTE: to support C++11, we must use: g++ -std=c++0x -o...

#include <iostream>
//using namespace std;

int main()
{
int i=0, &r=i;
const int ci=i, &cr=ci;
auto a=r;   //a is an int
auto b=ci;  //b is an int (top-level const in ci is dropped)
auto c=ci;  //c is an int
auto d=&i;  //d is an int*
auto e=&ci; //e is a const int* (low-level const)

const auto f=ci;  //deduced type of ci is int; then f is a const int
auto &g=ci;  //g is a const int& that is bound to ci

//auto &h=42; //error: we can't bind a plain reference to a literal
const auto &j=42;  //ok: we can bind a const reference to a literal

auto k=ci, &l=i;     //ok: k is int; l is int&
auto &m=ci, *p=&ci;  //ok: m is a const int&; p is a const int*
//auto &n=i, *p2=&ci;  //error: &n is a int, but *p2 is a const int

a=42;
b=42;
c=42;
d=42; //err: d is an int*
e=42; //err: e is a const int*
f=42; //err: f is a const int
g=42; //err: g is a const int&

return 0;
}
