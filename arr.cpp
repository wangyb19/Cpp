#include <iostream>

int main()
{
    using namespace std;
    int a[5]={1,2,3,4,5};
    cout << "The value of array name: " << a << endl;
    cout << "The adress of first element: " << &a[0] << endl;
    cout << "The value of first element: " << *(a) << endl;
    cout << "The value of the last element: " << *(a+4) << endl;
    return 0;
}