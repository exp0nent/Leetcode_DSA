#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i= 2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool result = isprime(n);
    if (result) {
        cout << n << " is Prime" << endl;
    } 
    else {
        cout << n << " is Not Prime" << endl;
    }
    
    return 0;
}