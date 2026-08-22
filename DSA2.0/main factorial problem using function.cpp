#include<bits/stdc++.h>
using namespace std;

/*Basic structure of a function
returnType functionName(parameters) {
    // code
    return value;
}*/
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int result = factorial(4);
    cout<<result;
}