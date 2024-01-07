vector<int> xor_play(int n)
	{
	    // code here
	    if(n==1)
	    {
	        return {0};
	    }
	    vector<int>v;
	    v.push_back(1);
	    int ans=1;
	    for(int i=2;i<=sqrt(n);i++)
	    {
	        if(n%i==0)
	        {
	            v.push_back(i);
	            if(i!=(n/i))
	            {
	                v.push_back(n/i);
	            }
	        }
	    }
	    sort(v.begin(),v.end());
	    for(int i=1;i<v.size();i++)
	    {
	        ans=ans^v[i];
	    }
	    v.push_back(ans);
	    return v;
	}
