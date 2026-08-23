#include<bits/stdc++.h>
using namespace std;

// 1. Prime Check
bool isprime(int n){
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 2. Palindrome Check
bool ispalindrom(int n){
    int temp = n;
    int rev = 0;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == n);
}

// 3. Armstrong Check
bool isarmstron(int n){
    int temp = n;
    int sum = 0;
    int digits = 0;
    // Count digits first
    int tempN = n;
    while (tempN > 0) {
        digits++;
        tempN /= 10;
    }
    // Calculate sum of powers
    tempN = n;
    while (tempN > 0) {
        int d = tempN % 10;
        sum += pow(d, digits);
        tempN /= 10;
    }
    return (sum == n);
}

// 4. Strong Number Check
bool isstrong(int n){
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        int fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    return (sum == n);
}

// 5. Reverse Number
int reverseNumber(int n){
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// 6. Sum of Digits
int sumDigits(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 7. Count Digits
int countDigits(int n){
    if (n == 0) return 1;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Helper for Divisible (if you want to use it)
bool isDivisible(int a, int b) {
    if (b == 0) return false;
    return (a % b == 0);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Check Prime
    if (isprime(n)) cout << n << " is Prime." << endl;
    else cout << n << " is NOT Prime." << endl;

    // Check Palindrome
    if (ispalindrom(n)) cout << n << " is a Palindrome." << endl;
    else cout << n << " is NOT a Palindrome." << endl;

    // Check Armstrong
    if (isarmstron(n)) cout << n << " is an Armstrong number." << endl;
    else cout << n << " is NOT an Armstrong number." << endl;

    // Check Strong
    if (isstrong(n)) cout << n << " is a Strong number." << endl;
    else cout << n << " is NOT a Strong number." << endl;

    // Example of other functions
    cout << "Reverse: " << reverseNumber(n) << endl;
    cout << "Sum of digits: " << sumDigits(n) << endl;
    cout << "Count of digits: " << countDigits(n) << endl;

    return 0;
}