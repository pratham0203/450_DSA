#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,5};
    int n = sizeof(arr)/sizeof(int);
    int m = 0;
    int ans = 0;
    int sum = 0;
    int dp[n+1][m+1];
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    if(sum & 1){
        ans = 0;
    }
    else{
        m = (sum)/2;
    for(int i=1;i<=m;i++){
        dp[0][i] = 0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j>=arr[i-1]){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    ans = dp[n][m];
    }
    cout<<ans;
    return 0;
}