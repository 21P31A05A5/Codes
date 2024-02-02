#include<bits/stdc++.h>
using namespace std;
int dp[100001][4];
int helper(int i,int n,vector<vector<int>>&arr,int pre)
{
    if(i>=n)return 0;

    if(pre!=-1&&dp[i][pre]!=-1){
        return dp[i][pre];
    }
    int temp=0;
    for(int j=0;j<3;j++)
    {
        if(pre!=j)
        {
            temp=max(temp,arr[i][j]+helper(i+1,n,arr,j));
        }
    }
    return dp[i][pre]=temp;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        arr.push_back({x,y,z});
    }
    memset(dp,-1,sizeof(dp));
    cout<<helper(0,n,arr,-1);
}
