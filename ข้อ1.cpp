#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x;
    double y=0;
    cout << "Enter x for compute:";
    cin >> x;
    y=3*pow(x,3)+2*exp(1)+pow(2,2*x+1)+sqrt(pow(x,2)+1);
    cout << y;
    return 0;
}