long long dp[r+1];
    fill(dp,dp+r+1,0);
    dp[0] = 1;
    long long mod = pow(10,9)+7;
    for(int i=1;i<=n;i++){
        for(int j = min(r,i);j>0;j--){
            dp[j] = (dp[j]+dp[j-1]);
        }
        cout<<endl;
    }
    cout<<dp[r]<<" ";