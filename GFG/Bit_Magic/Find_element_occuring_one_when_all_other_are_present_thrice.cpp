int ans=0;
        vector<int>v(32,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                if(arr[i]&(1<<j))
                {
                    v[j]++;
                    v[j]=v[j]%3;
                }
            }
        }
        for(int i=0;i<32;i++)
        {
            if(v[i])ans|=(1<<i);
        }
        return ans;
