#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "A is the gratest number: " << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << "B is the gratest number: " << b << endl;
    }
    else {
        cout << "C is the gratest number: " << c << endl;
    }

    return 0;
}