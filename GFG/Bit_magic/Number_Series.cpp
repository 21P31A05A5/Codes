int findNth(int n)
    {
        // code here
        for(int i=0;i<32;i++)
        {
            if(n&(1<<i))
            {
                return i;
            }
        }
    }
