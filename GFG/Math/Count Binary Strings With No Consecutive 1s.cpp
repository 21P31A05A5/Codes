void multiply(ll F[2][2], ll M[2][2])
    {
    	ll x = ((F[0][0]* M[0][0])%mod + (F[0][1] * M[1][0])%mod)%mod;
    	ll y = ((F[0][0]* M[0][1])%mod + (F[0][1] * M[1][1])%mod)%mod;
    	ll z = ((F[1][0]* M[0][0])%mod + (F[1][1] * M[1][0])%mod)%mod;
    	ll w = ((F[1][0]* M[0][1])%mod + (F[1][1] * M[1][1])%mod)%mod;
    
    	F[0][0] = x;
    	F[0][1] = y;
    	F[1][0] = z;
    	F[1][1] = w;
    }
    void power(ll F[2][2], ll n)
    {
    	ll M[2][2] = { { 1, 1 }, { 1, 0 } };
        if (n == 0 || n == 1)
    		return;
        power(F, n / 2);
        multiply(F, F);
        if (n % 2 == 1)
            multiply(F, M);
        
    }
    ll fib(long long int n)
    {
    	ll F[2][2] = { { 1, 1 }, { 1, 0 } };
    	if (n == 0)
    		return 0;
    	power(F, n - 1);
    	return F[0][0];
    }
    int countStrings(long long int N) 
    {
        // Code here
        return (int)fib(N+2);
    }
