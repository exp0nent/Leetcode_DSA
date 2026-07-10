#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cout << "Enter the number: " << endl;
    cin >> n;

    int sum = 0;

    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << sum;

    return 0;
}