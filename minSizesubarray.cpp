#include<bits/stdc++.h>
using namespace std;
int main(){
    int target = 7;
    int nums[] = {1,1,1,1,1,1};
    int n = 6;
    int sum=0;
    int min_len =INT_MAX;
    int left=0;
    for(int i=0;i<n;i++){
        sum = sum + nums[i];
        if(sum>=target){
            while(sum>=target){
                sum = sum - nums[left];
                left++;
            }
            min_len = min(min_len,i-left+2);
        }
    }
    if(min_len==INT_MAX){
        min_len = 0;
    }
    cout<<min_len;
    return 0;
}