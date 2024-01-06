//Approach-1

int count_prime_factor(int i)
    {
        int count=0;
        int j=2;
        int n=i;
        while(i!=1)
        {
            if(i%j==0)
            {
                i=i/j;
                count++;
            }
            else
            {
                j++;
            }
            if((j>sqrt(n))&(i>1))
            {
                count++;
                break;
            }
        }
        return count;
    }
	int sumOfPowers(int a, int b)
	{
	    int result=0;
	    for(int i=a;i<=b;i++)
	    {
	        result+=(count_prime_factor(i));
	    }
	    return result;
	}


//Approach-2_using Sieve of Eratosthenes Algorithm.
vector<int>prime;
    void find_prime(int n)
    {
        prime.resize(n+1,1);
        prime[1]=false;
        for (int p=2;p<=n;p++)
        {
            if (prime[p] == true) 
            {
                for (int i=p+p;i<=n;i+=p)
                    prime[i] = false;
            }
        }
    }
    int count_prime_factor(int i)
    {
        int count=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            while(i%j==0)
            {
                i/=j;
                count++;
            }
            if(prime[i])return count+1;
        }
        return count;
    }
	int sumOfPowers(int a, int b)
	{
	    int result=0;
	   // vector<int>primes;
        find_prime(b+1);
	    for(int i=a;i<=b;i++)
	    {
	        if(i==1)continue;
	        if(i<=3)
	        {
	            result++;
	            continue;
	        }
	        result+=(count_prime_factor(i));
	    }
	    return result;
	}
