#include <iostream>   // For input and output
using namespace std;

int main()
{
    // Declare variables
    int n;
    long long first = 0;
    long long second = 1;
    long long next;

    // Take input from the user
    cout << "Enter the number of terms: ";
    cin >> n;

    // If the user wants at least 1 term
    if (n >= 1)
    {
        cout << first << " ";
    }

    // If the user wants at least 2 terms
    if (n >= 2)
    {
        cout << second << " ";
    }

    // Generate the remaining Fibonacci numbers
    for (int i = 3; i <= n; i++)
    {
        // Calculate the next Fibonacci number
        next = first + second;

        // Print the next Fibonacci number
        cout << next << " ";

        // Move the variables forward
        first = second;
        second = next;
    }

    return 0;
}