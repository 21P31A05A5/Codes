vector<int>dp(101,-1);
class Solution {
public:
    int helper(vector<int>& arr,int n)
    {
        if(n<=0)return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]= max(helper(arr,n-1),arr[n-1]+helper(arr,n-2));
    }
    int rob(vector<int>& arr) {
        int n=arr.size();
        fill(dp.begin(),dp.end(),-1);
        return helper(arr,n);
    }
};
