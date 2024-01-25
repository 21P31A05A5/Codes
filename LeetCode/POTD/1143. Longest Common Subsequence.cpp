//1st Approach
int solve(string& s1,string& s2,int i,int j,vector<vector<int>>&dp)
    {
        if(i>=s1.length())return 0;
        if(j>=s2.length())return 0;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ans=0;
        if(s1[i]==s2[j])
        {
            ans=1+solve(s1,s2,i+1,j+1,dp);
        }
        else
        {
            ans=max(solve(s1,s2,i+1,j,dp),solve(s1,s2,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return solve(text1,text2,0,0,dp);
    }


//2nd Approach
    int solveTab(string a,string b)
    {
        vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
        for(int i=a.length()-1;i>=0;i--)
        {
            for(int j=b.length()-1;j>=0;j--)
            {
                int ans=0;
                if(a[i]==b[j])
                {
                    ans=1+dp[i+1][j+1];
                }
                else
                {
                    ans=max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j]=ans;
            }
        }
        return dp[0][0];
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        return solveTab(text1,text2);
    }

//3rd Approach
    int solveTab(string a,string b)
    {
        //space optimized
        vector<int>curr(b.length()+1,0);
        vector<int>next(b.length()+1,0);
        
        for(int i=a.length()-1;i>=0;i--)
        {
            for(int j=b.length()-1;j>=0;j--)
            {
                int ans=0;
                if(a[i]==b[j])
                {
                    ans=1+next[j+1];
                }
                else
                {
                    ans=max(next[j],curr[j+1]);
                }
                curr[j]=ans;
            }
            next=curr;
        }
        return next[0];
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        return solveTab(text1,text2);
    }
