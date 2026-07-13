#include<bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cout << "Enter the digit: ";
    cin >> n;
    int first_digit = 0;
    while(n>0){
        long digit = n%10;
        first_digit = digit;
        n=n/10;
    }
    cout << first_digit;
}