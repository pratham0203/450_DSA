#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {1,2,3};
    int n = 3;
    int i=1;
    int LastIndex = -1;
    if(n==1){
        cout<<nums[0];
    }
    while(i<n){
        if(nums[i-1]<nums[i]){
            LastIndex = i;
        }
        i++;
    }
    if(LastIndex==1){
        for(int i=0;i<n/2;i++){
            swap(nums[i],nums[n-i-1]);
        }
    }
    int mn = nums[LastIndex];
    int index = LastIndex;
    for(int i = LastIndex; i<n;i++){
        if(nums[i]<nums[LastIndex] && nums[i]>nums[LastIndex-1]){
            index = i;
        }
    swap(nums[LastIndex-1],nums[index]);
    sort(nums+LastIndex,nums+n);
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}