int minSteps(string s, string t) 
    {
        unordered_map<char,int>ump;
        for(int i=0;i<s.size();i++)
        {
            ump[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            ump[t[i]]--;
        }
        int ans=0;
        for(auto &it:ump)ans+=abs(it.second);
        return ans/2;
    }
