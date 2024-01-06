int x,a,b,n;
        n=4;
        x=N;
        a=0;
        b=4;
        for(int i=0;i<n;i++)
        {
            if(((x&(1<<(a+i)))>0 && (x&(1<<(b+i)))>0) || ((x&(1<<(a+i)))==0 && (x&(1<<(b+i)))==0))
            {
                continue;
            }
            else
            {
                x=x^(1<<(a+i));
                x=x^(1<<(b+i));
            }
        }
        return x;
