#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int answer = 0;

    for (int i = 1; i <= n; i++) {
        if (i * i == n) {
            answer = i;
            break;
        }
        else if (i * i > n) {
            answer = i - 1;
            break;
        }
    }

    cout << "Square root is: " << answer;

    return 0;
}