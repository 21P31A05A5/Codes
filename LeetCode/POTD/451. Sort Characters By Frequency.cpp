class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int>mp;
        for(char it : s) mp[it]++;
        auto lamda = [&](char &a,char &b)
        {
            if (mp[a] != mp[b]) 
            {
                return mp[a] > mp[b];
            }
            return a < b;
        };
        sort(s.begin(),s.end(),lamda);
        return s;
    }
};
