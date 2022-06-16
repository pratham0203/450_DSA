#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,4,2,2};
    int n = 5;
    int ans =0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto x:m){
         if(x.second>1){
            ans = x.first;
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    cout<<ans;
    return 0;
}