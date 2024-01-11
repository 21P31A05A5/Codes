vector<bool> primes;
    void generate_seive(int n)
    {
        primes.assign(n+1, true);
        primes[0] = primes[1] = false;
        for (int i = 2; i * i <= n; i++)
        {
            if (primes[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    primes[j] = false;
                }
            }
        }
    }
    int countPrimes(int n) 
    {
        generate_seive(n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(primes[i])
            {
                count++;
            }
        }
        return count;
    }
