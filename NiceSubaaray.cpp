#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {1,1,2,1,1};
    int n = 5;
    int k = 3;
    int PrefixSum=0;
    int count=0;
    unordered_map<int,int> m;
   for(int i=0;i<n;i++){
    if(nums[i]%2==0){
        nums[i]=0;
    }
    else{
        nums[i]=1;
    }
   }
    for(int i=0;i<n;i++){
        PrefixSum = PrefixSum + nums[i];
        if(PrefixSum==k){
            count++;
        }
        if(m.find(PrefixSum-k)!=m.end()){
            count = count + m[PrefixSum-k];
        }
        m[PrefixSum]++;
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}