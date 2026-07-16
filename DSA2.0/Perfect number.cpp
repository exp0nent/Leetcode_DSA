#include<bits/stdc++.h>
using namespace std;
int main (){
    long n;
    cout<<"Enter the number: ";
    cin>>n;
    long sum = 0;
    for(int i = 1; i<= n/2; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(sum==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not perfect Number";
    }
    return 0;
}