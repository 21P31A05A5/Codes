vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        // vector<int>ans;
        vector<int>winner;
        vector<int>looser;
        set<int>st;
        set<int>win;
        unordered_map<int,int>ump;
        int n=matches.size();
        for(int i=0;i<n;i++)
        {
            st.insert(matches[i][1]);
            ump[matches[i][1]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(st.find(matches[i][0])==st.end())
            {
                win.insert(matches[i][0]);
            }
        }
        for(auto it:win)
        {
            winner.push_back(it);
        }
        for(auto it:ump)
        {
            if(it.second==1)
            {
                looser.push_back(it.first);
            }
        }
        sort(looser.begin(),looser.end());
        return {winner,looser};
    }
