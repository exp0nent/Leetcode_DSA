#include<bits/stdc++.h>
using namespace std;
int add_two_number(int a, int b){
    int sum= a+b;
    return sum;
}    
int main (){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    int result = add_two_number(a,b);
    cout<<result;
    return 0;
}