// Average of array
#include<bits/stdc++.h>
using namespace std;
int smallest(int arr [], int size ){
    int smallest = INT_MAX;
    for(int i =0 ;  i<size; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    //  Create array of n size.
    int arr[n];
    
    // Loop to take input for each element
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int Smallest_Element = smallest(arr,n);
    cout<<"Smallest  number in the array is: " << Smallest_Element <<endl;
    return 0;
}