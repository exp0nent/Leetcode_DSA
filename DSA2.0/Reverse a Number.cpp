#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, reverse_number = 0;

    cout << "Enter the number: ";
    cin >> n;

    while(n > 0) {
        int reminder = n % 10;
        reverse_number = reverse_number * 10 + reminder;
        n = n / 10;
    }

    cout << "reverse no = " << reverse_number << endl;

    return 0;
}