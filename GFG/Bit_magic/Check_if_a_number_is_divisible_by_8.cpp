int DivisibleByEight(string s)
    {
        //code here
        int sum=0;
        int n=s.length();
        if(n>3)
        {
            for(int i=n-3;i<n;i++)
            {
                sum=(sum*10 +(int)s[i])%8;
                
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                sum=(sum*10 +(int)s[i])%8;
                
            }
        }
        if(!sum) return 1;
        return -1;
    }
