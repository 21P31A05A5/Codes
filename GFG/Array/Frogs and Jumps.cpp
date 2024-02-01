int unvisitedLeaves(int N, int leaves, int frogs[]) 
    {
        // Code here
        vector<int>v(leaves+1,1);
        for(int i=0;i<N;i++)
        {   
            if(frogs[i]==1) return 0;
            if(frogs[i]<=leaves && v[frogs[i]]==1)
            {
                for(int j=frogs[i];j<=(leaves);j+=frogs[i])
                {
                    v[j]=0;
                }
            }
        }
        return accumulate(v.begin()+1,v.end(),0);
    }
