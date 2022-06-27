#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={1, 2, 3, 3, 4};
    int n = sizeof(arr)/sizeof(int);
    int left = 0;
    int a = 1;
    int b = 2;
    int right = n-1;
    for(int i=0;i<=right;i++){
        if(arr[i]<a){
            swap(arr[i],arr[left]);
            left++;

        }
        else if(arr[i]>b){
            swap(arr[i],arr[right]);
            right--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}