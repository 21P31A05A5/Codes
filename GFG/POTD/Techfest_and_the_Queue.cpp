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
