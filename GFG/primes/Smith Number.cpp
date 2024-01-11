bool isprime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    int digi(int n)
    {
        int t=0;
        while(n)
        {
            t+=n%10;
            n/=10;
        }
        return t;
    }
    int findFactorsum(int n)
    {
        int sum = 0;
        while (n % 2 == 0) 
        {
            sum += 2;
            n/= 2;
        }
        for (int i = 3; i*i <= (n); i += 2) 
        {
            while (n % i == 0) 
            {
                sum += digi(i);
                n/= i;
            }
        }
        if (n > 2) 
        {
            sum += digi(n);
        }
        return sum;
    }
    
    int smithNum(int n) 
    {
        if(isprime(n))return 0;
        int digitsum=digi(n);
        int factorsum=findFactorsum(n);
        if(digitsum==factorsum)
        {
            return 1;
        }
        return 0;
    }
