int replaceBit (int n, int k)
    {
        //code here.
        int t=ceil(log2(n))-k;
        if((n&(1<<t)))
        {
            n=n^(1<<t);
        }
        return n;
    }
