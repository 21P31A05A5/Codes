vector<bool> primes;
    void generate_seive(int n)
    {
        // int n=1e6+1;
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
	int Count(int m, int n){
	    // Code here
	    generate_seive(n);
        int prime=0;
        int composite=0;
        for(int i=m;i<=n;i++)
        {
            if(i==1 || i==0)
            {
                continue;
            }
            else if(primes[i])
            {
                prime++;
            }
            else
            {
                composite++;
            }
        }
        return composite-prime;
	}
