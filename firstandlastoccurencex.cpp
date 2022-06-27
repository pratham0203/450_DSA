#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int n = 9;
    int x = 6;
    int ans_left=0;
    int ans_right =0;
    vector<int>ans;
    for(int i = 0;i<n;i++){
    if(arr[i]==x){
        ans_left = i;
        break;
    }
    else if (arr[i]!=x){
        ans_left = -1;
    }
   }
   for(int i = n-1;i>=0;i--){
    if(arr[i]==x){
        ans_right = i;
        break;
    }
    else if (arr[i]!=x){
        ans_right = -1;
    }
   }
   ans.push_back(ans_left);
   ans.push_back(ans_right);
    cout<<ans_left<<" "<<ans_right;
    return 0;
}