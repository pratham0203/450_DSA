#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,2,2,3};
    int n = 5;
    int k = 7;
    int count=0;
    unordered_map<int,int> m;
    int ans = 0;
    for(int i=0;i<n;i++){
        int b = k - arr[i];
        if(m[b]){
            ans = ans+m[b];
        }
    m[arr[i]]++;
   }
   cout<<ans;
    return 0;
}