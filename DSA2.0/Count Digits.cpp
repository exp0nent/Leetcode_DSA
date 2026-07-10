#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Total digits = 1";
        return 0;
    }

    int count = 0;

    while (n > 0) {
        n = n / 10;
        count++;
    }

    cout << "Total digits = " << count;

    return 0;
}