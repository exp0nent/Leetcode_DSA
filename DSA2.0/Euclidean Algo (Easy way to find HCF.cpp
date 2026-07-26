#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    while(b!=0){
        int reminder = a%b;
        a=b;
        b = reminder;
    }
    cout<<"GCD: "<< a;
    return 0;
}