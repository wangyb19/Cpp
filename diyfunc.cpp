#include<iostream>
#include<cmath>

int main()
{
using namespace std;
double wyb(double);
//function wyb is a user defined function, which function is
//double the input sqrt.
double a,b;
cout << "Please input a number you want double: " << endl;
cin >> a;
cout << "The inputted number is: " << a <<endl;
b=wyb(a);
cout << "The doubled number is: " << b <<endl;
return 0;
}

double wyb(double b)
{
double a;
a=2*sqrt(b);
return a;
}
