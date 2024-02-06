//1st Approach memoization
int dp[1001];
    int fun(int price[],int n)
    {
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int len=i+1;
            ans=max(ans,price[i]+fun(price,n-len));
        }
        return dp[n]=ans;
    }
    int cutRod(int price[], int n) {
        //code here
        memset(dp,-1,sizeof(dp));
        return fun(price,n);
    }

//2nd Approach Tabulation
int dp[1001];
    int cutRod(int price[], int n) {
        //code here
        memset(dp,0,sizeof(dp));
        for(int j=1;j<=n;j++)
        {
            int ans=INT_MIN;
            for(int i=0;i<j;i++)
            {
                int len=i+1;
                ans=max(ans,price[i]+dp[j-len]);
            }
            dp[j]=ans;
        }
        return dp[n];
    }
