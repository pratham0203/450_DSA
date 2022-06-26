#include<bits/stdc++.h>
using namespace std;
int main(){
    int N = 4;
    int arr[] = {7,4,0,9};
    
    int left[N],right[N];
    int leftMax =INT_MIN;
    int rightMax = INT_MIN;
    int ans=0;
    
    if(N<=2){
        ans = 0;
    }
    left[0]=0;
    leftMax = arr[0];
    for(int i=1;i<N;i++){
        left[i] = leftMax;
        leftMax = max(leftMax,arr[i]);
    }
    right[N-1]=0;
    rightMax = arr[N-1];
    for(int i=N-2;i>=0;i--){
        right[i]=rightMax;
        rightMax = max(rightMax,arr[i]);
    }
    int trapwater=0;
    for(int i=1;i<N-1;i++){
        if(arr[i]<left[i] && arr[i]<right[i]){
           trapwater+=min(left[i],right[i])-arr[i]; 
        }
    }
    cout<<trapwater;
    return 0;
}