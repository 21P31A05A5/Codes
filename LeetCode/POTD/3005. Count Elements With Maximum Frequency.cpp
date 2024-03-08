class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>ump;
        int temp=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ump[nums[i]]++;
            if(ump[nums[i]]>temp)temp=ump[nums[i]];
        }
        int count=0;
        for(auto it:ump)
        {
            if(it.second==temp)count++;
        }
        return temp*count;
    }
};
