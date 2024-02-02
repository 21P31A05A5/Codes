//Memoization Approach
#include<bits/stdc++.h>
using namespace std;
int helper(int arr[],int i,int n,vector<int>&dp)
{
    if(i>=n-1) return 0;
    if(dp[i]!=-1)return dp[i];
    int x=abs(arr[i]-arr[i+1])+helper(arr,i+1,n,dp);
    int y=INT_MAX;
    if(i+2<=n-1)
    {
        y=abs(arr[i]-arr[i+2])+helper(arr,i+2,n,dp);
    }
    return dp[i]=min(y,x);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>dp(n+1,-1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<helper(arr,0,n,dp)<<endl;
}


//Bottom up approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>dp(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dp[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        int x=abs(arr[i]-arr[i+1])+dp[i+1];
        int y=INT_MAX;
        if(i+2<=n-1)
        {
            y=abs(arr[i]-arr[i+2])+dp[i+2];
        }
        dp[i]=min(y,x);
    }
    cout<<dp[0]<<endl;
}
