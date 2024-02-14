class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
            }
            else
            {
                pos.push_back(nums[i]);
            }
        }
        for(int i=0;i<(n/2);i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
