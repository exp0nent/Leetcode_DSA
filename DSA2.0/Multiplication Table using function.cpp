#include<bits/stdc++.h>
using namespace std;
void MultiplicatioTable(int n){
    for(int i=1; i<=10;i++){
        cout<<n <<"*"<<i<<"="<<(n*i)<<endl;
    }
}
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    MultiplicatioTable(n);
    return 0;
}