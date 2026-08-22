#include<bits/stdc++.h>
using namespace std;
bool even_odd(int n){
    if(n%2==0){
        return true;
    }
    else {
        return false;
    }
}    
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result = even_odd(n);
    cout<<result;
    
    return 0;
}