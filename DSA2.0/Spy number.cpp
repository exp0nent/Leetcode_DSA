#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int sum =0;
    int product = 1;
    
    while(n>0){
        int digit = n%10;
        sum = sum + digit;
        product = product * digit;
        n=n/10;
    }
    if(sum==product){
        cout<<"spy number";
    }
    else{
        cout<<"Not spy number";
    }
    
    return 0;
}