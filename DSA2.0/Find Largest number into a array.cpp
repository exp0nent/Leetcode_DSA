#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums []= {5,15,22,1,-15,24};
    int size = 6;
    int maximum = INT_MIN;
    for(int i = 0; i<size;i++){
        if(nums[i]>maximum){
            maximum=nums[i];
        }
    }
    cout<<"Largest number in an array is: "<< maximum<<endl;
    return 0;
}