#include<bits/stdc++.h>
using namespace std;

/*Basic structure of a function
returnType functionName(parameters) {
    // code
    return value;
}*/
int strong_number(int n){
    int temp = n;
    int sum = 0;
    while(temp>0){
        int digit = temp%10;
        int fact = 1;
        for(int i=1; i<=digit;i++){
            fact = fact * i;
        }
        sum= sum+fact;
        temp=temp/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number you check: ";
    cin>>n;
    if(strong_number(n)==n){
        cout<<"This is a strong number: ";
    }
    else{
        cout<<"This is not a strong number";
    }
    return 0;
}