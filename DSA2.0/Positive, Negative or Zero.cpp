#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a > 0) {
        cout << "This is a posative no: " << a << endl;
    }
    else if (a < 0) {
        cout << "This is a negative no: " << a << endl;
    }
    else {
        cout << "This is zero: " << a << endl;
    }

    return 0;
}