#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    int first = arr[n-1];
    int temp;
    for(int i=n-1;i>=0;i--){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] =temp;
    }
    arr[0]=first;
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}