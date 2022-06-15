#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,6,7,-1};
    int n = 5;
    int pos[n+1];
    int neg[n];
    int k=0;
    int l=0;
    for(int i=0;i<n;i++){
      if(arr[i]>=0){
        pos[k] = arr[i];
        k++;
      }
      if(arr[i]<0){
        neg[l] = arr[i];
        l++;
      }
    }
    int m=0;
    int o=0;
    for(int i=0;i<n;i++){
      if(i%2!=0){
        arr[i]=neg[o];
        o++;
      }
      else{
        arr[i]=pos[m];
        m++;
      }
    }
    for(int i=0;i<m;i++){
      cout<<pos[i]<<" ";
    }
    return 0;
}