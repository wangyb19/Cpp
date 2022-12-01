// The purpose of this program is to show the array in the C++
// and using array in function of C++
#include <iostream>

int arr_sum(int n[],int b);

int main()
{
    using namespace std;
    int s;
    int a[5]={1,2,3,4,5};
    cout << "Print the value of array a: " << a << endl;
    cout << "Print the adress of the first element of array a: ";
    cout << &a[0] <<endl;
    s=arr_sum(a,5);
    cout << "The sum of array a is: " << s << endl;
    return 0;
}

int arr_sum(int n[],int b)
{
    int s=0;
    for (int i=0;i<b;i++)
    {
        s=s+n[i];
    }
    return s;
}