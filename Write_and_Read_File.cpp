#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double x[101], y_sin[101],y_cos[101];
    ofstream outFile;
    outFile.open("Data.csv",ios::out);
    outFile << "# Two lines -- sin(2x) and cos(2x)" << endl;
    outFile << setw(15) << "X," << setw(15) << "Y_Sin, " << setw(15) << "Y_Cos, " << endl;
    for(int i = 1; i<102; i=i+1)
    {
        x[i-1] = 10.0/100*(i-1);
        y_sin[i-1] = sin(2.0*x[i-1]);
        y_cos[i-1] = cos(2.0*x[i-1]);
        outFile << scientific << setw(14) << x[i-1] << ", ";
        outFile << scientific << setw(14) << y_sin[i-1] << ", ";
        outFile << scientific << setw(14) << y_cos[i-1] << endl;
    }
    outFile.close();
    return 0;
}