vector<int> primes;
    void generate_seive()
    {
        int n =1e4+1;
        primes.resize(n,1);
        primes[0] = 0;
        primes[1] = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (primes[i] == 1)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    primes[j] = 0;
                }
            }
        }
    }
    int prime_factor(int n)
    {
        int count=0;
        if(primes[n])
        {
            return n;
        }
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(primes[i])
                {
                    count+=i;
                }
                if(i!=(n/i)  &&primes[n/i])
                {
                    count+=(n/i);
                }
            }
        }
        return count;
    }
    int sumOfAll(int l, int r)
    {
        // code here
        generate_seive();
        int sum=0;
        for(int i=l;i<=r;i++)
        {
            int t=prime_factor(i);
            // cout<<t<<" ";
            sum+=t;
        }
        return sum;
    }
