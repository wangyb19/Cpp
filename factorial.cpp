// Purpose of this program is caculate the factorial 
//of integer 1 to 10
 #include<iostream>

int main()
{
using namespace std;
int i;
int f;
for (i=1;i<=10;i++)
{
  f=1;
  for (int j=i;j>1;j--)
  {
    f=f*j;
  }
  cout << "The factorial of " << i << " is: " << f <<endl;

}
return 0;
}
