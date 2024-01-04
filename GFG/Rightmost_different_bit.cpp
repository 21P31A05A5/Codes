int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m==n) return -1;
        for(int i=0;i<32;i++)
        {
            int mbit=m&1;
            int nbit=n&1;
            if(mbit!=nbit)
            {
                return i+1;
            }
            m=m>>1;
            n=n>>1;
        }
    }
