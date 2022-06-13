#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = 9;
    int j=0,k=0;
    int ans1[n/2];
  for(int j = 0; j < n; j++){
    if(arr[j]>=0 && arr[j+1]<0 && (j%2!=0)){
        swap(arr[j],arr[j+1]);        
    }
  }

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}