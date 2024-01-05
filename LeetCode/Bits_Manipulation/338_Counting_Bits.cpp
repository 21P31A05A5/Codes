int count_set_bit(int n)
    {
        int c=0;
        while(n!=0)
        {
            int rsvm= n & -n;
            n=n-rsvm;
            c++;
        }
        return c;
    }
    vector<int> countBits(int n) 
    {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            v.push_back(count_set_bit(i));
        }
        return v;
    }
