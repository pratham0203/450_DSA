#include<bits/stdc++.h>
using namespace std;
int main(){
    int dp[3][7];
    int n = 3;
    int m = 7;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || j==0){
                dp[i][j] = 1;
            }
            else{
                dp[i][j]= dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    cout<<dp[n-1][m-1];
    return 0;
}