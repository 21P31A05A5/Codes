class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int temp=0;
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            temp=temp^i;
        }
        for(auto it:nums)
        {
            temp=temp^it;
        }
        return temp;
    }
};
