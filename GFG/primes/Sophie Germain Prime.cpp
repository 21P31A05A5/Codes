vector<bool>primes;
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
   	vector<int> sophie_Primes(int n)
   	{
   	    // Code here
   	    vector<int>v;
   	    if(n==0||n==1)return v;
   	    generate_seive((2*n)+1);
   	    for(int i=2;i<n;i++)
   	    {
   	        if(primes[i]&&primes[(i*2)+1])
   	        {
   	            v.push_back(i);
   	        }
   	    }
   	    return v;
   	}
