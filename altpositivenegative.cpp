#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = 9;
    int pos[n];
    int neg[n];
    int m=0;
    int o = 0;
    for(int i=0;i<n;i++){
      if(arr[i]>=0){
        pos[m] = arr[i];
        m++;
      }
      else{
        neg[o] = arr[i];
        o++;
      }
    }
    int k=0;
    int l=0;
    for(int i=0;i<n;i++){
      if(k==m){
        arr[i] = neg[l];
        l++;
        continue;
      }
      if(l==o){
        arr[i] = pos[k];
        k++;
        continue;
      }
      if(i%2==0 && k<m){
        arr[i] = pos[k];
        k++;
      }
      else if(i%2!=0 && l<o){
        arr[i] = neg[l];
        l++;
      }
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}