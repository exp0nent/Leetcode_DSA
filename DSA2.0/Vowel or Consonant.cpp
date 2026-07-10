// 	Vowel or Consonant 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ALP;
    cout << "Enter the alphabets: " << endl;
    cin>> ALP;
    
    if (ALP== 'A' ||  ALP== 'a'){
        cout << "This is Vowels: " << ALP << endl;
    }
    else if (ALP== 'E' ||  ALP== 'e'){
        cout << "This is Vowels: " << ALP << endl;
    }
    else if (ALP== 'I' || ALP== 'i'){
        cout << "This is Vowels: " << ALP << endl;
    }
    else if (ALP== 'O' || ALP=='o'){
        cout << "This is Vowels: " << ALP << endl;
    }
    else if (ALP== 'U' && ALP== 'u'){
        cout << "This is Vowels: " << ALP << endl;
    }
    else{
        cout << " This is consonent: " << ALP << endl;
        
    }
    return 0;
}
