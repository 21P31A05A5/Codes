int minOperations(vector<int>& nums) 
    {
        int count=0;
        int n=nums.size();
        unordered_map<int,int>um;
        for(int i=0;i<n;i++)
        {
            um[nums[i]]++;
        }
        for(auto it:um)
        {
            if(it.second==1)
            {
                return -1;
            }
            if(it.second%3==0)
            {
                count+=(it.second/3);
            }
            else
            {
                count+=(it.second/3)+1;
            }
        }
        return count;
    }
