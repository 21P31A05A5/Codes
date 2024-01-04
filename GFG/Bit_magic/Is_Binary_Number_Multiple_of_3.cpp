int isDivisible(string s){
	    //complete the function here
	    long long ans=0;
	    long n=s.size();
	    long long even=0,odd=0;
	    for(int i=0;i<n;i++)
        {
            if((s[i]=='1')&& i%2==0)
            {
                even++;
            }
            else if((s[i]=='1')&& i%2==1)
            {
                odd++;                
            }
        }
        ans=odd-even;
        return ans%3==0?1:0;
	}
