#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Enter the number: ";
    cin>>n;
    long long ans = 0;
    for (long long i=1; i<=n; i++){
        if(i*i*i ==n){
            ans = i;
            break;
        }
        else if(i*i*i>n){
            ans= i-1;
            break;
        }
    }
    cout<<ans;
    
    return 0;
}