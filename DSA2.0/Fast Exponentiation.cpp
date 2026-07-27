#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the Base number: ";
    cin>>a;

    cout<<"Enter the power: ";
    cin>>b;

    int result = 1;
    
    while(b>0){
        if(b%2!=0){
            result = result*a;
        }
        a = a*a;
        b=b/2;
    }

    cout<<result;

    return 0;
}