#include<iostream>

struct infom
{
	char name[20];
	double height;
	double length;
};

int main()
{
using namespace std;
infom wyb={"wangyb19",73.0,178};
cout << "The height of " << wyb.name ;
cout << "is: " << wyb.height << endl;
cout << "The length of " << wyb.name << "is ";
cout << wyb.length <<endl;
return 0;
}
