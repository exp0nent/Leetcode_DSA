// Average of array
#include<bits/stdc++.h>
using namespace std;
int largest(int arr [], int size ){
    int largest = INT_MIN;
    for(int i =0 ;  i<size; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
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
    
    int Largest_Element = largest(arr,n);
    cout<<"Largest number inthe array is: " << Largest_Element <<endl;
    return 0;
}