#include<iostream>
using namespace std;

int findDivisor(int x){
    int i=x;
    int j=1;
    while(j<i){
        if(i%j==0 && j!=1){
            return j;
        }
    j++;
    }
}

int main()
{
    int a;
    cout << "find divisor of :";
    cin >> a;
    cout << findDivisor(a);
    return 0;
}