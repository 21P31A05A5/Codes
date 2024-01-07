long long int bitsAreInAltOrder(long long int n)
    {
        // code here
        n=n^(n>>1);
        return (n&((long)n+1))==0;
    }
