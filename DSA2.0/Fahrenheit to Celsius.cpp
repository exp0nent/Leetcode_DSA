#include <bits/stdc++.h>
using namespace std;

int main() {
    float Celsius, Fahrenheit;
    cin >> Fahrenheit;

    Celsius = (Fahrenheit - 32) * 5 / 9;

    cout << "The Celsius value is: " << Celsius << endl;

    return 0;
}