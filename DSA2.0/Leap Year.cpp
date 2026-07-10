#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a year: ";
    cin >> a;

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        cout << "This is a leap year: " << a << endl;
    }
    else {
        cout << "Not a leap year: " << a << endl;
    }

    return 0;
}