class Solution {
public:
    vector<int>v;
    int dp[1001];
    void solve(int ind,vector<int>&arr,vector<int>&v1,int prev,int l)
    {
        if(ind>=arr.size())
        {
            if(l>v.size())
            {
                l=v.size();
                v=v1;
            }
            return ;
        }
        if((int)v1.size()>dp[ind] and arr[ind]%prev==0)
        {
            dp[ind]=v1.size();
            v1.push_back(arr[ind]);
            solve(ind+1,arr,v1,arr[ind],l+1);
            v1.pop_back();
        }
        solve(ind+1,arr,v1,prev,l);

    }
    vector<int> largestDivisibleSubset(vector<int>& nums) 
    {
        vector<int>v1;
        int ind=0;
        memset(dp,-1,sizeof(dp));
        sort(nums.begin(),nums.end());
        solve(ind,nums,v1,1,0);
        return v;
    }
};
