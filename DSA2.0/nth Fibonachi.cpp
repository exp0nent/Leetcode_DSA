#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Enter the number: ";
    cin>>n;
    long long first = 0;
    long long second = 1;
    long long next;
    
    if (n==1){
        cout<<first;
    }
    else if(n==2){
        cout<<second;
    }
    else{
        for(int i=3; i<=n; i++){
            next = first+second;
            first = second;
            second = next;
        }
        cout<<second;
    }
    return 0;
}