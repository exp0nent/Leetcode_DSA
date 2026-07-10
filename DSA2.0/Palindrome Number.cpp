#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int original = n;
    int reverse = 0;

    while (n > 0) {
        int reminder = n % 10;
        reverse = reverse * 10 + reminder;
        n = n / 10;
    }

    if (reverse == original) {
        cout << "Pallindrom no: " << reverse << endl;
    }
    else {
        cout << "Not pallindrom no: " << reverse << endl;
    }

    return 0;
}