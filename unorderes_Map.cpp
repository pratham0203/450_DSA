#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,7,1};
    int n = 4;
    int k = 6;
    int count=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}