#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int smaller = min(a, b);
    int ans = 1;
    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            ans = i;
        }
    }
    cout << "GCD = " << ans;
    return 0;
}