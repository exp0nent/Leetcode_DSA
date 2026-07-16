#include<bits/stdc++.h>
using namespace std;
int main (){
    long n;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i = 1; i<= n; i++){
        if(n%i==0){
            cout<<"Factors are: "<<  i << endl;
        }
    }
    return 0;
}