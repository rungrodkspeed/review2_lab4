#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a,double t)
{
    double s;
    s=u*t+(0.5)*a*pow(t,2);
    return s;
}

int main()
{
    double a,b,c;
    cout << "Enter velocity:";
    cin >> a;
    cout << "Enter accle:";
    cin >>b;
    cout << "Enter time:";
    cin >> c;
    cout << "Distance = " << findDistance(a,b,c);
    return 0;
}