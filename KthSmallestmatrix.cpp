#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int k = 3;
    int mat[n][n] ={{9,12,20,25,35},{15,17,23,28,45},{21,31,38,40,51},{28,41,47,52,62},{38,43,48,56,65}};
    int ans;
    int m = 0;
    int arr[n*n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           arr[m] = mat[i][j];
           m++;
        }
    }
    sort(arr,arr+n*n);
    for(int i=0;i<n*n;i++){
        if(i==k-1){
            ans = arr[i];
        }
        
    }
    cout<<ans;
    return 0;
}