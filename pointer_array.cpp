//The purpose of this program is showing the difference between pointer and array
#include<iostream>

int main()
{
using namespace std;
double *p =new double[5];
p[0]=0.0;
p[1]=1.1;
p[2]=2.2;
p[3]=3.3;
p[4]=4.4;
cout << "the value of p[0] is: " << p[0] << endl;
cout << "the value of p is: " << p << endl;
p=p+1;
cout << "the value of p[0] is: " << p[0] << endl;
cout << "the value of p is: " << p << endl;
p=p-1;
delete [] p;
return 0;
}
