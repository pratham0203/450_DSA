#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,45,6,10,8};
    int n=6;
    int X=13;
    int sum=0;
    int ans =0;
    sort(arr,arr+n);
    for(int i = 0;i < n;i++){ 
        sum = X - arr[i];
        int low = i+1;
        int high = n-1;
        while(low<high){
            if(arr[low]+arr[high]==sum){
                ans = 1;
            }
            if(arr[low]+arr[high]>sum){
                high--;
            } 
            if(arr[low]+arr[high]<sum){
                low++;
            }
        }
    }
    cout<<"hello"; 
    return 0;
}