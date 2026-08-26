#include<bits/stdc++.h>
using namespace std;
int gcd_brute(int a, int b){
    int smaller = min(a,b);
    for(int i = smaller; i>=1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}
int main(){
    int a, b;
    cout<<"Enter Two numbers: ";
    cin>>a>>b;
    cout<< "GCD IS: "<< gcd_brute(a,b)<<endl;
    return 0;
}