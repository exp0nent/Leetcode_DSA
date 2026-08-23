#include<bits/stdc++.h>
using namespace std;
bool isDivisible(int a, int b){
    if(b==0){
        return false;
    }
    if(a%b==0){
        return true;
    }
    return false;
}
int main (){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    bool result = isDivisible(a,b);
    if(result){
        cout<<a << "is divisable by"<<b<<endl;
    }
    else{
        cout<<a << "is not divisable by"<<b<<endl;
    }
    return 0;
}