#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,1,5,6,3};
    int n = 5;
    int k = 3;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            ++count;
        }
    }
    int bad = 0;
    for(int i=0;i<count;i++){
        if(arr[i]>k){
            ++bad;
        }
    }
    int i;
    int j;
    int ans = bad;
    for(int i=0,j=count;j<=n;j++,i++){
        if(arr[i]>k){
            --bad;
        }
        if(arr[j]>k){
            ++bad;
        }
        ans = min(bad,ans);
        ++i;
        ++j;
    }
    cout<<ans;
    return 0;
}