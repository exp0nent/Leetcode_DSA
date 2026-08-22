#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    if(n<=0){
        return false;
    }
    else if(n==1){
        return true;
    }
    
    for(int i= 2; i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number you check: ";
    cin>>n;
    if(is_prime(n)==true){
        cout<<"This is a prime number: ";
    }
    else{
        cout<<"This is not a prime number";
    }
    return 0;
}