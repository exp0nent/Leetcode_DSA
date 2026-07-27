#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the Base number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    int result = 1;
    for(int i=1; i<=b; i++){
        result= result*a;
    }
    cout<<result;
    
    return 0;
}