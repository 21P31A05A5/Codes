long long gf(int n)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        return ((gf(n-2)*gf(n-2))-gf(n-1));
    }
    void gfSeries(int n)
    {
        // Write Your Code here
        for(int i=0;i<n;i++){
            cout << gf(i) << " ";
        }
        cout<<endl;
    }
