#include<bits/stdc++.h>
using namespace std;
int maximum(int a, int b){
    return max(a,b);
}    
int main (){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    int result = maximum(a,b);
    cout<<result;
    return 0;
}