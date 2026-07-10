#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << "A is the gratest number: " << a << endl;
    }
    else if (b > a) {
        cout << "B is the gratest number: " << b << endl;
    }
    else {
        cout << "Both number are equal: " << a << b << endl;
    }

    return 0;
}