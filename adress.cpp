#include<iostream>

int main()
{
using namespace std;
int a=0;
double b=0;
cout << "The value of a is: " << a << endl;
cout << "The adress of a is: " << &a << endl;
cout << "The value of b is: " << b << endl;
cout << "The adress of b is: " << &b << endl;
a=1;
b=1.0;
cout << "The value of a is: " << a << endl;
cout << "The adress of a is: " << &a << endl;
cout << "The value of b is: " << b << endl;
cout << "The adress of b is: " << &b <<endl;
return 0;
}
