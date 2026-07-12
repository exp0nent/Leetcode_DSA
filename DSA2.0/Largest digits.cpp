#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    int largest = 0;

    while (n > 0) {
        int digit = n % 10;          // Extract the last digit
        largest = max(largest, digit); // Compare and update largest digit
        n = n / 10;                  // Remove the last digit
    }

    cout << "Largest digit = " << largest << endl;

    return 0;
}