#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3, 4, 1, 9, 56, 7, 9, 12};
    int n = 8;
    int m= 5;
    int d;
    int Min = INT_MAX;
    sort(arr,arr+n);
    for(int i=0; i+m-1<n;i++){
        d = arr[i+m-1]-arr[i]; 
        Min = min(Min,d);
    }
    cout<<Min;
    return 0;
}