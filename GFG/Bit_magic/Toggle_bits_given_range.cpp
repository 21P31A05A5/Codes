int toggleBits(int x , int L , int R) 
    {
        // code here
        for(int i=L;i<=R;i++)
        {
                x=x^(1<<i-1);
        }
        return x;
    }
