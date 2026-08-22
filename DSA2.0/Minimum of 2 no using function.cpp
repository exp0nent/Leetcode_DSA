#include<bits/stdc++.h>
using namespace std;
int minimum(int a, int b){
    return min(a,b);
}    
int main (){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    int result = minimum(a,b);
    cout<<result;
    return 0;
}