#include<bits/stdc++.h>
using namespace std;
int Square_of_a_number(int n){
    return n*n;
}    
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int square_result = Square_of_a_number(n);
    cout<<square_result;
    return 0;
}