class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        // unordered_map<int,int>ump;
        // for(int i=0;i<n;i++)
        // {
        //     ump[nums[i]]++;
        // }
        // for(auto it:ump)
        // {
        //     if(it.second>(n/2))
        //     {
        //         return it.first;
        //     }
        // }
        // return -1;
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};
