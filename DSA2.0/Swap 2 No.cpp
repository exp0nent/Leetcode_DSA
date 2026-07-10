#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    // swap(a,b)

    cout << "We swap the number: " << a << " " << b << endl;
    return 0;
}