#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={1,2};
    int n=2;
    vector<int> ans;
    int count = 0;
    unordered_map<int,int>m;
    if(n/3>=1){
        count =n/3;
    }
    else if(n/3==0){
        count =0;
    }
    else{
        count = 1;
    }
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
    for(auto x:m){
        if(x.second>count){
            ans.push_back(x.first);
        }
    }
    return 0;
}