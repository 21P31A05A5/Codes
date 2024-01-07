bool isSparse(int n)
    {
        // Your code
        for(int i=0;i<32;i++)
        {
            if(((n&(1<<i))>0)&&((n&(1<<(i+1)))>0))
            {
                return false;
            }
        }
        return true;
    }
