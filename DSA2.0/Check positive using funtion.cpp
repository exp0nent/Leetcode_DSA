#include<bits/stdc++.h>
using namespace std;
bool ispositive(int n){
    if(n>0){
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
    int result = ispositive(n);
    cout<<result;
    
    return 0;
}