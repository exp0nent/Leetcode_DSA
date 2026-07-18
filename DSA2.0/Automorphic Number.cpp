#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int original = n;
    int temp = n;
    int count = 0;

    // Count the number of digits
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Calculate square
    int square = n * n;

    // Calculate 10^count
    int divisor = 1;
    for (int i = 1; i <= count; i++) {
        divisor = divisor * 10;
    }

    // Check if the last 'count' digits of square equal the original number
    if (square % divisor == original) {
        cout << "Automorphic Number";
    } else {
        cout << "Not an Automorphic Number";
    }

    return 0;
}