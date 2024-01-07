long long findMissing(long long a[], long long b[], int n)
    {
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans^a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            ans=ans^b[i];
        }
        return ans;
    }
