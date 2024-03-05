int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        map<int,int>mp;
        int res=0;
        for(int i=n-1;i>=0;i--)
        {
            auto it=mp.lower_bound(a[i]);
            if(it!=mp.end())
            {
                res=max(res,it->second-i);
                mp[a[i]]=it->second;
            }
            else
            {
                mp[a[i]]=i;
            }
        }
        return res;
    }
