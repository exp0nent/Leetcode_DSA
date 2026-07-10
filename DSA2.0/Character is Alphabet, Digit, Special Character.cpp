// Character is Alphabet / Digit / Special Character
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ALP;
    cin>> ALP;
    
    if (ALP >= 'A' &&  ALP <= 'Z' || ALP >= 'a' && ALP<= 'z'){
        cout << "This is character: " << ALP << endl;
    }
    else if (ALP >= '0' &&  ALP <= '9'){
        cout<< "This is a Number: " << ALP << endl;
    }
    else {
        cout << "This is the special character: " << ALP << endl;
    }
    return 0;
}