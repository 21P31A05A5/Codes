vector<int> Series(int n) {
        // Code here
        int mod=1e9+7;
        vector<int>dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2; i<n+1; i++)
        {
            dp[i] =  (dp[i-1]%mod + dp[i-2]%mod)%mod;
        }
        return dp;
    }
