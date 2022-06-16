#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]= {1, 3, 5, 7};
    int arr2[]= {0, 2, 6, 8, 9};
    int n = 4;
    int m = 5;
    int i =n-1;
    int j =0;
    while(i>=0 && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
        }        
        i--;
        j++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}