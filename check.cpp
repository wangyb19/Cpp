// The purpose of this program is finding the source of the error using
// assert statement
#include<iostream>
#include<cmath>
#include<cassert>

int main()
{
    using namespace std;
    double a;
    cout << "Please input a no-negative double number: ";
    cin >> a;
    assert(a>=0);
    cout << "The square root of " << a ;
    cout << " is " << sqrt(a)  << endl;
    return 0;
}