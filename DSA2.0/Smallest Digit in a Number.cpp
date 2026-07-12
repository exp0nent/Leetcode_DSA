#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    int smallest = 9;

    while (n > 0) {
        int digit = n % 10;
        smallest = min(smallest, digit);
        n = n / 10;
    }

    cout << "Smallest digit = " << smallest << endl;

    return 0;
}