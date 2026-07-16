#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int original = n;
    int temp = n;
    int sum = 0;
    int count = 0;

    while(temp > 0) {
        count++;
        temp = temp / 10;
    }

    while(n > 0) {
        int digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }

    if(sum == original) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not Armstrong Number";
    }

    return 0;
}