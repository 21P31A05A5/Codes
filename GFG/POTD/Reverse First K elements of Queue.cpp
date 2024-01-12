queue<int> modifyQueue(queue<int> q, int k) 
    {
        // add code here.
        vector<int>v;
        while(k--)
        {
            v.push_back(q.front());
            q.pop();
        }
        int n=q.size();
        for(int i=v.size()-1;i>=0;i--)q.push(v[i]);
        while(n--)
        {
            q.push(q.front());
            q.pop();
        }
        return q;
    }
