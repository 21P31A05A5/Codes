vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        int n=0;
        unordered_map<int,int>um;
        for(auto x:nums)
        {
            um[x]++;
            n=max(n,um[x]);
        }
        vector<vector<int>>result(n);
        for(auto it:um)
        {
            int element=it.first;
            int occurence=it.second;
            for(int i=0;i<occurence;i++)
            {
                result[i].push_back(element);
            }
        }
        return result;
    }
