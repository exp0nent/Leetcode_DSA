#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int original = n;
    int sum = 0;
    int square = n * n;
    
    while(square>0){
        int digit = square%10;
        sum = sum + digit;
        square = square/10;
    }
    
    if(sum == original){
        cout<<"Neon number";
    }
    else{
        cout<<"Not a neon no";
    }
    return 0;
}