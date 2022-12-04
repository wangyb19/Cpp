#include <cassert>
#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    double x[3]={1,2,3};
    double y[3]={4,5,6};
    ofstream write_output("output.dat");
    assert(write_output.is_open());
    for (int i=0;i<3;i++)
    {
        write_output << x[i] << " " << y[i] << "\n";
    }
    write_output.close();
    return 0;
}