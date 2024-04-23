int firstElement(int n) {
        // code here
        const int mod=1e9+7;
        vector<int> dp(n+2,0);
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
            dp[i]%=mod;
        }
        return dp[n];
    }
