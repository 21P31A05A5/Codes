vector<vector<int>> divideArray(vector<int>& nums, int p) 
    {
        int n=nums.size();
        vector<vector<int>>result;
        // if(n%3!=0)return result;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back(nums[i]);
            if(temp.size()==3)
            {
                result.push_back(temp);
                temp.clear();
            }
        }
        for(int i=0;i<result.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=j+1;k<3;k++)
                {
                    if(abs(result[i][j]-result[i][k])>p)
                    {
                        return {};
                    }
                }
            }
        }
        return result;
    }
