long long largestPerimeter(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long perimeter=0;
        long long sum=0;
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i]<sum)
            {
                perimeter=nums[i]+sum;
            }
            sum+=nums[i];
        }
        if(perimeter==0) return -1;
        return perimeter;
    }
