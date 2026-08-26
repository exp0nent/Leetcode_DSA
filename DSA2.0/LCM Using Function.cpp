#include<bits/stdc++.h>
using namespace std;
int lcm_brute(int a, int b){
    int maximum = max(a,b);
    while (true){
        if(maximum % a == 0 && maximum % b==0){
            return maximum;
        }
        maximum= maximum+max(a,b);
    }
}
int main(){
    int a, b;
    cout<<"Enter Two numbers: ";
    cin>>a>>b;
    cout<< "LCM IS: "<< lcm_brute(a,b)<<endl;
    return 0;
}