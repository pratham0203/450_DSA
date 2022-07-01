#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abc";
    string t = "bcd";
    int m = s.length();
    int n = t.length();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0){
                dp[i][j]= j;
            }
            else if(j==0){
                dp[i][j] = i;
            }
            else if(s[i-1]==t[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                int min_ans = min(dp[i-1][j],dp[i-1][j-1]);
                dp[i][j] = 1 + min(min_ans,dp[i][j-1]);
            }
        }
    }
    cout<<dp[m][n]<<" ";
    return 0;
}