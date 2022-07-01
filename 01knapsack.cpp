#include<bits/stdc++.h>
using namespace std;
int main(){
    int values[] = {1,2,3};
    int weight[] = {4,5,1};
    int n = 3;
    int w = 3;
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=w;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(i==0 || j==0){
                dp[i][j]==0;
            }
            else if(weight[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j], values[i-1] + dp[i-1][j-weight[i-1]]);
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}