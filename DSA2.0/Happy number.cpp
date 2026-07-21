#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    while(n != 1 && n!=4){
        int sum = 0;
        
        while(n>0){
            int digit = n%10;
            sum = sum +(digit*digit);
            n=n/10;
        }
        
        n= sum;
    }
    if(n==1){
        cout<<"Happy number";
    }
    else{
        cout<<"Not happy number";
    }
    
    return 0;
}