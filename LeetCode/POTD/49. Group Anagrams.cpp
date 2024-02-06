class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) 
    {
        int n=s.size();
        unordered_map<string,vector<string>> mp;
        vector<vector<string>>ans;
        for(int i=0;i<n;i++)
        {
            string temp=s[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s[i]);
        }
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans ;
    }
};
