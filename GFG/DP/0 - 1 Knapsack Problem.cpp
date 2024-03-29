//Memoization Approach
int dp[1001][1001];
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int helper(int w,int wt[],int val[],int n)
    {
        if(n==0||w==0)return 0;
        if(dp[n][w]!=-1)return dp[n][w];
        if(wt[n-1]<=w)
        {
            return dp[n][w]=max(val[n-1]+helper(w-wt[n-1],wt,val,n-1),
            helper(w,wt,val,n-1));
        }
        else
        {
            return dp[n][w]=helper(w,wt,val,n-1);
        }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp,-1,sizeof(dp));
       return helper(W,wt,val,n);
    }
};

//Top-Down DP
int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
       for(int i=0;i<=n;i++)
       {
           dp[i][0]=0;
       }
       for(int i=0;i<=w;i++)
       {
           dp[0][i]=0;
       }
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=w;j++)
           {
               if(wt[i-1]<=j)
               {
                   dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
       return dp[n][w];
    }
