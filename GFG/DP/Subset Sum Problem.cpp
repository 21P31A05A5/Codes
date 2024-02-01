//Memoization Approach
bool subset(int n,vector<int>arr,int sum,vector<vector<int>>&dp)
    {
        // if(n==0)return false;
        // if(sum==0)return true;
        if(dp[n][sum]!=-1)return dp[n][sum];
        if(arr[n-1]<=sum)
        {
            return dp[n][sum] =subset(n-1,arr,sum-arr[n-1],dp)||subset(n-1,arr,sum,dp);
        }
        else
        {
            return dp[n][sum]= subset(n-1,arr,sum,dp);
        }
    }
    bool isSubsetSum(vector<int>arr, int sum)
    {
        // code here 
        // memset(dp,-1,sizeof(dp));
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        for(int i=0;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        return subset(n,arr,sum,dp);
    }

//top-down approach
bool isSubsetSum(vector<int>arr, int sum)
    {
        // code here 
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        for(int i=0;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j-arr[i-1]])||dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
