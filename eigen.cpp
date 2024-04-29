// 本程序的目的是测试Eigen库（3.4）的功能
#include <iostream>
// Eigen安装后的路径是  /usr/local/include/eigen3/Eigen/Dense>
#include <eigen3/Eigen/Dense>
using namespace std;
using Eigen::MatrixXd;

int main()
{
        MatrixXd m(3,3);
        m(0,0) = 3;
        m(1,0) = 2.5;
        m(2,0) = 1.0;
        m(0,1) = -1;
        m(1,1) = m(1,0) + m(0,1);
        m(2,1) = 1.0;
        m(0,2) = 1.0;
        m(1,2) = 1.0;
        m(2,2) = 1.0;
        cout << m << endl;
}
