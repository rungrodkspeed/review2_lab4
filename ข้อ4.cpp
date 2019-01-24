#include<iostream>
#include<string>
using namespace std;

void text1(string s,int N){
    int count=0;
    while(count<N){
        cout <<s;
        count++;
    }
}

void text2(string s1, string s2, int N){
    int count = 0;
    while(count<N){
        if(count%2==0){
            cout << s1;
        }else{
            cout << s2;
    }
    count++;
}
}

int main()
{
    int count=0;
    while(count<10){
        text1("5",9-count);
        text2("6","9",count);
        cout << "\n";
        count ++;
    }
    return 0;
}