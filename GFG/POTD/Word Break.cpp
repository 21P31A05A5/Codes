int solve( string s, vector<string> &d)
    {
        if(s.size()==0)return 1;
        string t="";
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            t+=s[i];
            if(find(d.begin(),d.end(),t)!=d.end())
            {
                ans|=solve(s.substr(i+1),d);
            }
        }
        return ans;
    }
    int wordBreak(int n, string s, vector<string> &dic) 
    {
        // m=dic.size();
        return solve(s,dic);
    }
