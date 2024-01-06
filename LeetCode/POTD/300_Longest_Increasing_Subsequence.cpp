int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>v;
        unordered_map<int,int>mpp;
        mpp[nums[0]]=0;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            auto it=lower_bound(v.begin(),v.end(),nums[i]);
            if(it==v.end())
            {
                mpp[nums[i]]=v.size();
                v.push_back(nums[i]);
            }
            else
            {
                int val=*it;
                int index=mpp[val];
                mpp.erase(val);
                mpp[nums[i]]=index;
                v[index]=nums[i];
            }
        }
        return v.size();
    }
