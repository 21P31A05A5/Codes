int DifferOne(long int a, long int b) 
    {
        //complete the function here
        long int x=a^b;
        if(x&(x-1))
        {
            return 0;
        }
        return 1;
    }
