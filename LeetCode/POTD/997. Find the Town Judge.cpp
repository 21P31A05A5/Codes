class Solution {
public:
    int findJudge(int n, vector<vector<int>>& v) 
    {
        if(n==1 && v.size()==0)return 1;
        else if(n==2 && v.size()==0)return -1;
        set<int>st;
        for(auto it:v)
        {
            st.insert(it[0]);
        }
        int sum=0;
        for(auto it:st)sum+=it;
        int judge=(n*(n+1)/2)-sum;
        if(judge>n || judge<1)return -1;
        map<int,int>mp;
        for(auto it:v)
        {
            if(it[1]==judge)
                mp[it[0]]=it[1];
        }
        for(int i=1;i<n;i++)
        {
            if(i==judge)continue;
            if(mp[i]!=judge)return -1;
        }
        // cout<<mp[10];
        return judge;
    }
};
