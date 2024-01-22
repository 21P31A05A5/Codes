vector<int> findErrorNums(vector<int>& a) 
    {
        int n=a.size();
        vector<int>v;
        int sum=accumulate(a.begin(), a.end(),0);
        sort(a.begin(),a.end());
        int nsum=n*(n+1)/2;
        int k=nsum-sum;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                v.push_back(a[i]);
                v.push_back(a[i]+k);
                break;
            }
        }
        return v;
    }
