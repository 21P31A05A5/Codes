int maxConsecutiveOnes(int N)
    {
        // code here
        int ans=0;
        int h=0;
        for(int i=0;i<32;i++)
        {
            if(N&(1<<i))
            {
                h++;
            }
            else
            {
                ans=max(ans,h);
                h=0;
            }
        }
        return ans;
    }
