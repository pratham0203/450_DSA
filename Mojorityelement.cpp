#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int ans = -1;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto x : m){
        if(x.second>n/2){
            ans = x.first;
        }
    }
    cout<<ans;
    return 0;
}