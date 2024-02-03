#include<bits/stdc++.h>
using namespace std;
long long dp[101][100001];
long long helper(long long w,vector<long long>&wt,vector<long long>&val,long long n)
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
int main()
{
    long long n,w;
    cin>>n>>w;
    vector<long long>wt;
    vector<long long>val;
    for(long long i=0;i<n;i++)
    {
        long long w1,v1;
        cin>>w1>>v1;
        wt.push_back(w1);
        val.push_back(v1);
    }
    memset(dp,-1,sizeof(dp));
    cout<<helper(w,wt,val,n);
}
