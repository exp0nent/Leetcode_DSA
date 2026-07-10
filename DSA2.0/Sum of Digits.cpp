#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;

    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}