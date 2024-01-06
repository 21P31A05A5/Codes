long long int setAllOddBits(long long int n) 
    {
        // code here
        int ans=n;
        for(int i=0;i<ceil(log2(n));i++)
        {
            if(i%2==0)
            {
                ans=ans|(1<<i);
            }
        }
        return ans;
    }
