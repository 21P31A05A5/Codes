long long int PowMod(long long int a,long long int b,long long int M)
		{
		    // Code here
		    long long int ans=1;
            while(b)
            {
                if(b&1)
                {
                    b=b-1;
                    ans=(ans*a)%M;
                }
                else{
                    b=b/2;
                    a=(a*a)%M;
                }
            }
            return ans%M;
		}
