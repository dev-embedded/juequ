//to test the top-level and low-level const

#include <iostream>
using namespace std;

int main()
{
int i=0;
const int *p2;
p2=&i;
cout<<"plain i=0; const int *p2=&i; *p2="<<*p2<<endl;
i=10;

// *p2=100;  //this doesn't work, since *p2 is const int;
	     //we can't change it with *p directly,
	     //but we can change it by i=10 assignment.
cout<<"change i=10; then const int *p2="<<*p2<<endl;

int j=-1;
cout<<"plain int j=-1"<<endl;
j=*p2;
cout<<"*p2 is a const int pointer, j=*p2; then j="<<j<<endl;

int *p;
cout<<"*p is a plain int pointer."<<endl;
// p=p2;  //error: invalid conversion from const int* to int*.
// cout<<"p2 is a const int pointer, p=p2; then *p="<<*p<<endl;

return 0;
}
