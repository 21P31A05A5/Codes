bool isPowerOfFour(int n) 
    {
        if(n<=0)
        {
            return false;
        }
        while(n)
        {
            if(n==1)
            {
                return true;
            }
            if((n&(n-1))==0)
            {
                n=n>>2;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
