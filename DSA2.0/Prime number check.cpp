#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    if(n<=1){
        cout<<"Not a prime number";
    return 0;
    }
    
    bool isprime = true;
    
    for(int i = 2; i<n; i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        cout<<"Prime number";
    }
    else{
        cout<<"Not prime number";
    }
    return 0;
}