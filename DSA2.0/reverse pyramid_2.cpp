#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <=  2*(n-i)+1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}