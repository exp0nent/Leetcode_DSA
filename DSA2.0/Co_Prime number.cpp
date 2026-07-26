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
    if(a==1){
        cout<<"Co_prime no";
    }
    else{
        cout<<"Not Co_prime";
    }
    return 0;
}