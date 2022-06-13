#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1, -1, 3, 2, -7, -5, 11, 6};
    int arr2[8];
    int n = 8;
    int x=0;
    int temp;
    int j = n-1;
    for(int i=0;i<n;i++){
     if(arr[i]>=0){
         arr2[x] = arr[i]; 
         x++;      
     }
    }
    for(int i=0;i<n;i++){
     if(arr[i]<0){
         arr2[x] = arr[i]; 
         x++;      
     }
    }
    for(int k=0;k<n;k++){
        cout<<arr2[k]<<" ";
    }

    return 0;
}