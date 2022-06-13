#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {6,-3,-10, 0, 2};
    long long int maxp = INT_MIN, prod = 1;
    int  n = 5;
    for(int i=0;i<n;i++){
        prod = prod*arr[i];
        if(prod > maxp){
            maxp = prod;
        }
        if(prod==0){
            prod=1;
        }
    }

    for(int i=n;i>=0;i--){
        prod = prod*arr[i];
        if(prod > maxp){
            maxp = prod;
        }
        if(prod==0){
            prod=1;
        }
    }
    cout<<maxp;
    return 0;
}