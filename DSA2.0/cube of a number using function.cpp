#include<bits/stdc++.h>
using namespace std;
int cube(int n){
    return n*n*n;
}    
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int cube_result = cube(n);
    cout<<cube_result;
    return 0;
}