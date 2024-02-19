int minValue(string s, int k)
    {
        // code here
        int n=s.size();
        unordered_map<char,int>ump;
        for(int i=0;i<n;i++)
        {
            ump[s[i]]++;
        }
        priority_queue<int>prq;
        for(auto it:ump)
        {
            prq.push(it.second);
        }
        while(k--)
        {
            auto it=prq.top();
            prq.pop();
            prq.push(it-1);
        }
        int ans=0;
        while(prq.size()){
            auto it=prq.top();
            prq.pop();
            ans+=(it*it);
        }
        return ans;
    }
