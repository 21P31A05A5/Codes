//Memoization Approach
#include<bits/stdc++.h>
using namespace std;
int helper(int arr[],int i,int n,int k,vector<int>&dp)
{
    if(i>=n-1) return 0;
    if(dp[i]!=-1)return dp[i];
    int y=INT_MAX;
    for(int j=1;j<=k;j++)
    {
        if(i+j<=n-1)
        {
            y=min(y,abs(arr[i]-arr[i+j])+helper(arr,i+j,n,k,dp));
        }
    }
    return dp[i]=y;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>dp(n+1,-1);
    cout<<helper(arr,0,n,k,dp)<<endl;
}

//Bottom up approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<int>dp(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dp[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        int y=INT_MAX;
        for(int j=1;j<=k;j++)
        {
            if(i+j<=n-1)
            {
                y=min(y,abs(arr[i]-arr[i+j])+dp[i+j]);
            }
            dp[i]=y;
        }
    }
    cout<<dp[0]<<endl;
}
