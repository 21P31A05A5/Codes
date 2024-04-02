class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        // map<char,int>smp,tmp;
        // for(int i=0;i<s.size();i++)
        // {
        //     smp[s[i]]++;
        //     tmp[t[i]]++;
        //     if(smp[s[i]]!=tmp[t[i]])return false;
        // }
        // return true;

        unordered_map<char, char>ms, mt;
        for (int i = 0; i < s.size(); ++i) 
        {
            if (ms.count(s[i]) && mt.count(t[i])) 
            {
                if (ms[s[i]] != t[i]) {
                    return false;
                }
            } 
            else if (ms.count(s[i]) || mt.count(t[i])) 
            {
                return false;
            } 
            else 
            {
                ms[s[i]] = t[i];
                mt[t[i]] = s[i];
            }
        }
        return true;
    }
};
