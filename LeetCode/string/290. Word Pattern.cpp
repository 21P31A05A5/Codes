class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        unordered_map<string,char> mp;
        int n=pattern.size();
        string temp="";
        int m=s.size();
        vector<string>v;
        for(int i=0;i<m;i++)
        {
            if(s[i]==' ')
            {
                v.push_back(temp);
                temp="";
            }
            else
            {
                temp+=s[i];
            }
        }
        if(temp.size()!=0)
        {
            v.push_back(temp);
        }
        if(n!=v.size())return false;
        // set<char>st;
        // for(int i=0;i<n;i++)
        // {
        //     st.insert(pattern[i]);
        // }
        // set<string>st1;
        // for(int i=0;i<n;i++)
        // {
        //     st1.insert(v[i]);
        // }
        // if(st.size()!=st1.size())return false;
        set<char>st;
        for(int i=0;i<n;i++)
        {
            if(mp.find(v[i])==mp.end()&& st.find(pattern[i])==st.end())
            {
                mp[v[i]]=pattern[i];
                st.insert(pattern[i]);
            }
            else
            {
                if(mp[v[i]]!=pattern[i])return false;
            }
        }
        return true;
    }
};
