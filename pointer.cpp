#include<iostream>

int main()
{
using namespace std;
int a;
double b;
int *c;
double *d;
c=&a;
d=&b;
cout << "value of a is: " << a ;
cout << " and the adress of a is:" << &a << endl; 
cout << "value of b is: " <<b;
cout << " and the adress of b is: " << &b << endl;
cout << "value of c related is: " << *c << endl;
cout << "value of d related is: " << *d << endl;
a=0;
b=1.0;
cout << "the adress of a is: " << &a << endl;
cout << "the adress of b is: " << &b << endl;
cout << "the value of c is: " << c << endl;
cout << "the value of d is: " << d << endl;
cout << "the value of c related is: " << *c << endl;
cout << "the value of d related is: " << *d << endl;
return 0;
}
