class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.find(nums[i])!=st.end())return nums[i];
            else st.insert(nums[i]);
        }
        return 0;
    }
};
