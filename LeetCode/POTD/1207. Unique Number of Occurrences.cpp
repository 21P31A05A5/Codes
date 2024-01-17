bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++)
        {
            ump[arr[i]]++;
        }
        set<int>st;
        for(auto it:ump)
        {
            st.insert(it.second);
        }
        if(st.size()==ump.size())
        {
            return true;
        }
        return false;
    }
